import sys

N, X = map(int, sys.stdin.readline().split())
N_list = list(map(int, sys.stdin.readline(). split()))
for i in N_list:
    if i < X:
        sys.stdout.write("%d " % i)
print()