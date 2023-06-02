#include <iostream>

using namespace std;

int main(){
    int M, N, P, I, J, vendas=0;   
    cin >> M >> N;
    int vetor[M][N];

    for (int L = 0; L < M; L++)
    {
        for (int K = 0; K < N; K++)
        {
            cin >> vetor[L][K];
        }
    }

    cin >> P;
    for (int L = 0; L < P; L++)
    {
        cin >> I >> J;
        if(vetor[I-1][J-1] > 0){
            vendas++;
            vetor[I-1][J-1] -= 1;
        }
    }

    cout << vendas;
    
    

}
