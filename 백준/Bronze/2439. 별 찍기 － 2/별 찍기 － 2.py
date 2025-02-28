import sys
N = int(sys.stdin.readline())
for i in range(N):
    for j in range(N):
        if i + j >= N - 1:
            print("*", end="")
        else:
            print(" ", end="")
    print()