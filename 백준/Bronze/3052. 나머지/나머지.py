numbers = set()

for _ in range(10):
    num = int(input())
    numbers.add(num % 42)

print(len(numbers))