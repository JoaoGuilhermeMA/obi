#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair<int, string> A;
    pair<int, string> B;

    A.first = 10;
    A.second = "Joao";

    B.first = 5;
    B.second = "Ana";

    if (A > B)
    {
        cout << A.second << " eh melhor\n";
    }
    else
    {
        cout << B.second << " eh melhor\n";
    }
}
/*
	vector< pair<int, string> > V;
	int a;
	string b;
	for(int i=1;i<10;i++){	
		cin>>a>>b; //Leio os valores da entrada e armazeno nas variáveis a e b
		V.push_back(make_pair(a,b)); //Adiciono o pair no vetor utilizando make_pair
	}
	sort(V.begin(), V.end()); //Ordena o vetor utilizando o comparador de desigualdade do pair, ou seja, primeiro compara pelo first e em caso de empate compara pelo second.
*/