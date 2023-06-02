#include <iostream>
#include <vector>

using namespace std;

struct tunel
{
    int a;
    int b;
};


int main(){
    int S, T, P, N, sa;
    bool possivel=false;

    cin >> S >> T;
    tunel vetor[T];
    
    for (int i = 0; i < T; i++)
    {
        tunel t;
        int ax,bx;
        cin >> ax >> bx;
        vetor[i].a = ax;
        vetor[i].b = bx;    
    }

    cin >> P;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        int sequencia[N];
        for (int j = 0; j < N; j++)
        {
            cin >> sequencia[j];
        }

        for (int l = 0; l < N; l++)
        {
            if(sequencia[l]){

            }
        }
        
        
    }
      
} 
