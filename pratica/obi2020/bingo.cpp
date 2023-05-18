#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, U, K;
    list<int>numSort;
    vector<vector <int> > cartelas;
    list<int> idGanhadores;
    bool existe = false;

        cin >> N >> K >> U ;
    int num;
    for(int i = 0; i <N; i++){
        vector<int>conjunto;

        while(conjunto.size() < K){
            cin >> num;

            conjunto.push_back(num);
        }
        cartelas.push_back(conjunto);
    }

    for(int i = 0; i < K; i++){
        int n;
        cin >> n;
        numSort.push_back(n);
    }

    for(int i=0; i<N;i++){
        int numero;
        for(int j=0; j<K;j++){
            numero = cartelas[i].at(j);
            auto iter = find(numSort.begin(), numSort.end(), numero);
            if(iter != numSort.end()){
                existe = true;
            }else{
                existe = false;
                break;
            }
        }
        if(existe){
            idGanhadores.push_back(i);
        }
    }

    if(idGanhadores.size() == 1){
        cout << idGanhadores.front() << endl;
    }else{
        idGanhadores.sort();
        auto iter = idGanhadores.begin();
        for(int i = 0; i < idGanhadores.size();i++){
            if(iter != idGanhadores.end()){
                cout << *iter << " ";
                iter++;
            }
        }
    }

}

