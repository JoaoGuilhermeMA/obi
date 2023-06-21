#include <iostream>
using namespace std;

int main() {
    long long int A, B, C;
    char desiredType;

    // Leitura dos valores de entrada
    cin >> A >> B >> C;
    cin >> desiredType;

    // Cálculo do máximo de questões do tipo desejado
    long long int maxQuestions = 0;

    if (desiredType == 'A') {
        // Calcula o máximo de questões do tipo A (grafos)
        maxQuestions = min(min(A, B * 2) / 3, C / 5 * 2);
    } else if (desiredType == 'B') {
        // Calcula o máximo de questões do tipo B (programação dinâmica)
        maxQuestions = min(min(B, A * 3 / 2) / 2, C / 5 * 2);
    } else if (desiredType == 'C') {
        // Calcula o máximo de questões do tipo C (geometria)
        maxQuestions = min(min(C, A / 2 * 5), B / 3 * 5);
    }

    // Imprime o resultado
    cout << maxQuestions << endl;

    return 0;
}
