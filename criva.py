n = int(input())
marcados = set()
primos = []
aux = 2

for i in range(2,n+1):
    if i not in marcados:
        aux = i
    for j in range(aux+1,n+1):
        if j % aux == 0:
            marcados.add(j)

for i in range(2,n+1):
    if i not in marcados:
        primos.append(i)
       
print(primos)
