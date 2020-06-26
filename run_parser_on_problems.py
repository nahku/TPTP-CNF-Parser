import subprocess


if __name__ == "__main__":
    error_list = []
    problem_counter = 0
    with open("filenames_fof.txt", "r") as myfile:
        data = myfile.read().splitlines()

        for line in data:
            problem_counter += 1
            line = line[1:]
            command = "./parser " + "\"TPTP-v7.3.0" + line + "\""
            testRun = subprocess.run(command, shell=True, stdout=subprocess.DEVNULL)
            result = testRun.returncode
            if result != 0:
                error_list.append(command)
            print(str(problem_counter) + " " + command)
            if problem_counter == 100:
                break

        print("Number of errors: " + str(len(error_list)))
