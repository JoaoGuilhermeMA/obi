#include <iostream>

// Definição da estrutura do nó
struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    char opcao;

    do {
        int valor;
        std::cout << "Digite o valor do elemento: ";
        std::cin >> valor;

        Node* newNode = new Node;
        newNode->data = valor;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }

        std::cout << "Deseja adicionar mais um elemento? (S/N): ";
        std::cin >> opcao;
    } while (opcao == 'S' || opcao == 's');

    std::cout << "A lista encadeada criada é: ";
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;

    // Liberar memória
    current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
