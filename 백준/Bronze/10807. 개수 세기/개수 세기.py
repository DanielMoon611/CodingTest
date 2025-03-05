import sys
N = int(sys.stdin.readline())
N_list = list(map(int, sys.stdin.readline().split()))
v = int(sys.stdin.readline())
sys.stdout.write(str(N_list.count(v)))