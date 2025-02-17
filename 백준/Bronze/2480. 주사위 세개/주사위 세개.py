H, M, C = map(int, input().split())

if(H == M and M == C):
    print(10000 + H * 1000)
elif(H == M or H == C):
    print(1000 + H * 100)
elif(M == C):
    print(1000 + M * 100)
else:
    print(max(H, M, C) * 100)