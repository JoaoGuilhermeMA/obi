#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, num;

    cin >> n;
    int arr[n]; 
    for(int i = 0; i < n; i++){ 
        cin >> num;
        arr[i] = num;
    }

    for (int i = 1; i < n; i++) 
    {
        int chave = arr[i];
        int j = i - 1; 

        while (j >= 0 && arr[j] > chave)
        {
            arr[j + 1] = arr[j]; 
            j -= 1;
        }
        arr[j + 1] = chave;
    }

    cout << "\nDepois de ordenar " << endl; 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}