X = int(input())
N = int(input())
i = 0
a = 0
b = 0
answer = 0
while True:
    if i >= N:
        break
    a, b = map(int, input().split())
    answer += a * b
    i += 1
if answer == X:
    print("Yes")
else:
    print("No")