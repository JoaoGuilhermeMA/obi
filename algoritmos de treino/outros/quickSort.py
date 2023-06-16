def quicksort(array):
    # caso base, array com 1 ou 0 elementos não precisam ser "sorteados"
  if len(array) < 2:
    return array
  else:
    # caso recurssivo
    pivo = array[0]
    # sub-arry de todos os elementos que são menor que o pivo
    menor = [i for i in array[1:] if i <= pivo]
    # sub-array de todos os elementos que são maior que o pivo
    maior = [i for i in array[1:] if i > pivo]
    return quicksort(menor) + [pivo] + quicksort(maior)

print(quicksort([10, 5, 2, 3]))