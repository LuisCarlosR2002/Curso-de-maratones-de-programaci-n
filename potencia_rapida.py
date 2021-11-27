
def producto_matrices(a, b):
    filas_a = len(a)
    filas_b = len(b)
    columnas_a = len(a[0])
    columnas_b = len(b[0])
    if columnas_a != filas_b:
        return None
    # Asignar espacio al producto. Es decir, rellenar con "espacios vacíos"
    producto = []
    for i in range(filas_b):
        producto.append([])
        for j in range(columnas_b):
            producto[i].append(None)
    # Rellenar el producto
    for c in range(columnas_b):
        for i in range(filas_a):
            suma = 0
            for j in range(columnas_a):
                suma += a[i][j]*b[j][c]
            producto[i][c] = suma
    return producto

def identidad(tamano):
    matriz=[[0 for _ in range(tamano)] for _ in range(tamano)]
    for i in range(tamano):
        matriz[i][i]=1
    return matriz





def potenciacion(matriz,n):
    resultado = identidad(len(matriz))
    while n:
        if n & 1:
            resultado= producto_matrices(resultado,matriz)
        n = n >> 1
        matriz = producto_matrices(matriz,matriz)
    

    return resultado

matriz = [
    [1, -1],
    [1, 0]
    ]


print(potenciacion(matriz,4))