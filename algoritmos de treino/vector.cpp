#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
    vector<int>n;

    for(int i=0; i<=20; i++){
        n.push_back(i);
    }

    for(int j=0; j<n.size(); j++){
        cout << n[j] << endl;
    }
    cout << endl;
    n.resize(10); //Muda o tamanho do vector n para 10.
    for(int j=0; j<n.size(); j++){
        cout << n[j] << endl;
    }
    cout << endl;
    n.pop_back(); //Apaga o ultimo elemento do vector n.

    n.clear(); //Remove todos os elementos do vector n.

	n.push_back(5);
	n.push_back(10);
	n.push_back(2);
	n.push_back(4);
    n.push_back(6);
    n.push_back(7);
    n.push_back(1);
    n.push_back(3);
    n.push_back(11);
    n.push_back(2);

    sort(n.begin(), n.end()); //Ordena todo o vector N
    cout << endl;
    cout << endl;
    for(int j=0; j<n.size(); j++){
        cout << n[j] << endl;
    }
}