import sys

arr = list()
maximum = 0
index = 0
for i in range(9):
    arr = int(sys.stdin.readline())
    if maximum < arr:
        maximum = arr
        index = i + 1

sys.stdout.write("%d\n" % maximum)
sys.stdout.write("%d\n" % index) 