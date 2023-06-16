#include <iostream>

using namespace std;

struct tLista
{
    int info;
    tLista *prox;
};

int main()
{
    tLista *inicio, *cauda, *novo, *atual ;
    bool primeiraVez = true;
    int opcao, valor;
    do
    {
        cout << "Digite o novo elemento" << endl;
        cin >> valor;

        novo = (struct tLista*) malloc(sizeof(struct tLista));
        novo->info = valor;

        if (primeiraVez)
        {
            inicio = novo;
            novo->prox = NULL;
            primeiraVez = false;
        }
        else
        {
            novo->prox = NULL;
            cauda = inicio;
            while(cauda->prox != NULL){
                cauda = cauda->prox;
            }
            cauda->prox = novo;
        }

        cout << "Deseja inserir mais elementos? (1/2)" << endl;
        cin >> opcao;
    } while (opcao != 2);

    atual = inicio;
    while (atual != NULL){
        cout << atual->info << " ";
        atual = atual->prox;
    }
    cout << endl;

    
}