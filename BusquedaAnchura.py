import collections

# grafo = {
#   '5' : ['3','7'],
#   '3' : ['2', '4'],
#   '7' : ['8'],
#   '2' : [],
#   '4' : ['8'],
#   '8' : []
# }

grafo = [
    [0,8,0,3,0],
    [0,0,7,0,0],
    [0,0,0,0,4],
    [0,0,0,0,3],
    [0,0,5,0,0]
]

visitados = set() 

def bfs(visitados, grafo, nodo):

    cola = collections.deque([nodo])
    print(cola)
    visitados.add(nodo)
  
    while cola:
        nodo_a_visitar = cola.popleft()
        print(f"visite: {nodo_a_visitar}")
        for vecino in grafo[nodo_a_visitar]:
            if vecino not in visitados:
                visitados.add(vecino)
                cola.append(vecino)


bfs(visitados, grafo, '0')

