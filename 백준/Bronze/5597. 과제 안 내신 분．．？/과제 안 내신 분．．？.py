students = [0] * 30

for _ in range(28):
    input_num = int(input())
    students[input_num - 1] = input_num

for i in range(30):
    if students[i] == 0:
        print(i + 1)