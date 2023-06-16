#include <iostream> // Biblioteca iostream necessária para funcionar
#include <algorithm> // Biblioteca algorithm necessária para funcionar
#include <queue> // Biblioteca da queue
using namespace std;

int main()
{
	priority_queue<int, vector<int>, greater<int>> fila1; // Fila de prioridade fila1 armazenando elementos do tipo int
  	// Agora menor elemento sempre no topo
	
	fila1.push(3); // Insiro o 3 na fila
	fila1.push(4); // Insiro o 4 na fila

 	printf("%d", fila1.top()); // Imprimo o menor número (topo) = 3

  	priority_queue<double, vector<double>, greater<double>> fila2; // Fila de prioridade fila1 armazenando elementos do tipo double
  	// Agora menor elemento sempre no topo

	fila2.push(5.2); // Insiro o 5.2 na fila
	fila2.push(3.14); // Insiro o 3.14 na fila

	printf("%d", fila2.top()); // Imprimo o menor número (topo) = 3.14
}