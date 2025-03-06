import sys
N = int(sys.stdin.readline())
N_list = list(map(int, sys.stdin.readline().split()))
sys.stdout.write("%d %d\n" % (min(N_list), max(N_list)))