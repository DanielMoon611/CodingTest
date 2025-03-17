N, M = map(int, input().split())
result = list(range(1, N + 1))

for _ in range(M):
    i, j = map(int, input().split())
    while i < j:
        tmp = result[i - 1]
        result[i - 1] = result[j - 1]
        result[j - 1] = tmp
        i += 1
        j -= 1
        
for r in result:
    print(r, end=" ")
    