H, M = map(int, input().split())

if(M >= 45):
    M -= 45
else:
    if(H == 0):
        H = H - 1 + 24
    else:
        H -= 1
    M = M - 45 + 60
print(H, M)
