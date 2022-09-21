
from argparse import ArgumentParser
from difflib import unified_diff
from pathlib import Path
import subprocess as sp
import yaml

if __name__ == "__main__":
    parser = ArgumentParser(description="Functionnal Tester script")
    parser.add_argument("executable",metavar="EXECUTABLE", help="File which will be tested")
    args = parser.parse_args()

    executable = Path(args.executable).absolute()
    executable_name = Path(args.executable).name

    exitcode = 0
    with open("./testsuite.yml") as testfile:
        content = yaml.safe_load(testfile)
        for testcase in content:
            print("Running test " + testcase["name"])
            # print(testcase)
            result = sp.run(testcase["args"], capture_output=True, timeout=5)
            # print(testcase["stdout"])
            # print(result.stdout)
            difference = unified_diff(testcase["stdout"], result.stdout.decode("ascii"))
            difference = "".join(difference)
            if (difference == ""):
                print("Test OK")
            else:
                print(difference)
                exitcode = 1

    exit(exitcode)
