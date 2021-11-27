# a = int(input())
# b = int(input())
# c = int(input())
# n = int(input())
entrada = input().split()
a = int(entrada[0])
b = int(entrada[1])
c = int(entrada[2])
n = int(entrada[3])

if a >=1 and b>=1 and c>=1 and a+b+c>=n and n>=3:
    print("YES")
else:
    print("NO")

