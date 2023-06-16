def quicksort(array)
    if array.length < 2
      # caso base, array com 1 ou 0 elementos não precisam ser "sorteados"
      array
    else
      # caso recurssivo
      pivo = array[0]
      # sub-array de todos os elementos menos o array
      rest = array[1..-1]
      menor = rest.select { |i| i <= pivo } # subp-arry de todos os elementos que são menor que o pivo
      greater = rest.select { |i| i > pivo } # sub-array de todos os elementos que são maior que o pivo
      quicksort(menor) + [pivo] + quicksort(greater)
    end
  end
  
  print quicksort([10, 5, 2, 3])