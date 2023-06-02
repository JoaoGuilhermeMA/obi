#include <iostream>

using namespace std;

int main(){
    int V, A, F, P, qntd=0;

    cin >> V;
    cin >> A;
    cin >> F;
    cin >> P;

    if(A+F+P <= V){
        qntd=3;
    }else if(A+F <= V || A+P <= V || P+F <= V ){
        qntd=2;
    }else if(A <= V|| P <= V || F <= V){
        qntd=1;
    }

    cout << qntd;
}
