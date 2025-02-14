A = int(input())
B = int(input())
C = (int)((B % 100) % 10) * A
D = (int)((B % 100) / 10) * A
E = (int)(B / 100) * A
F = C + ((D * 10) + (E * 100))
print(C)
print(D)
print(E)
print(F)