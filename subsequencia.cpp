#include <iostream>

using namespace std;

int main(){
    int A, B, cont=0;
    bool ordem=false;
    cin >> A >> B;
    int seqA[A], seqB[B];

    for (int i = 0; i < A; i++)
    {
        cin >> seqA[i];
    }

    for (int i = 0; i < B; i++)
    {
        cin >> seqB[i];
    }

    int j=0;
    for (int i = 0; i < B; i++)
    {
         while(j < A){
            if (seqB[i] == seqA[j])
             {
                 cont++;
                 break;
             }    
             j++;
         }
    }

    if(cont == B){
        cout << "S";
    }else{
        cout << "N";
    }
    
    
}
/*

*/
