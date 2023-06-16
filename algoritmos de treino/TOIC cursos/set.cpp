#include <iostream>
#include <set> //Biblioteca do set

using namespace std;

int main()
{
    set<int> S; // Cria uma variável do tipo set para armazenar números inteiros

    S.insert(7);  // Adiciona o elemento 7 no set
    S.insert(10); // Adiciona o elemento 10 no set
    S.insert(3);  // Adiciona o elemento 3 no set

    for (set<int>::iterator it = S.begin(); it != S.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << "\n";
}
/*
{
    set<int> S; //Cria uma variável do tipo set para armazenar números inteiros
    S.insert(10); //Adiciona o elemento 10 no set
    S.insert(3); //Adiciona o elemento 3 no set
    if(S.find(3) != S.end()){ //Se 3 está no conjunto
      cout<<3<<"\n";
    }
}
{
    set<int> S; //Cria uma variável do tipo set para armazenar números inteiros
    S.insert(10); //Adiciona o elemento 10 no set
    S.insert(3); //Adiciona o elemento 3 no set
    S.erase(10); //Apaga o elemento 10 do set
}
clear: Apaga todos os elementos.
size: Retorna a quantidade de elementos.
begin: Retorna um ponteiro para o inicio do set
end: Retorna um ponteiro para o final do set
*/