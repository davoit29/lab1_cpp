#include <iostream>


struct Node {   // узел двухсвязного списка(узел-шаг), ring -номер кольца from to координаты перестановки
    int ring;
    char from;
    char to;

    Node* next; // next prev сдлед и пред ход
    Node* prev;
};


Node* head = nullptr;   // указатели на начало и конец списка
Node* tail = nullptr;   // nullptr - ничего

// узел в конец списка - шаг ханоя
void addMove(int ring, char from, char to) {
    Node* node = new Node; //надо new иначе развал

    //в узел записываем значения

    node->ring = ring;
    node->from = from;
    node->to = to;

    node->next = nullptr;
    node->prev = tail;

    if (tail == nullptr) {
        head = node;
    } else {
        tail->next = node;
    }

    tail = node;
}

  
void hanoi(int n, char from, char to, char hub) {
    if (n == 1) {
        addMove(1, from, to);
        return;
    }

    hanoi(n - 1, from, hub, to); // n-1  в сторону
    addMove(n, from, to); //большой
    hanoi(n - 1, hub, to, from); // возврат 
}


void printList() {
    Node* cur = head;
    while (cur != nullptr) {
        std::cout << "ring " << cur->ring
                  << ": " << cur->from
                  << " -> " << cur->to << "\n";
        cur = cur->next;
    }
}



void deleteList() {
    Node* cur = head;
    while (cur != nullptr) {
        Node* next = cur->next;
        delete cur;
        cur = next;
    }
}

int main() {
    int n = 8; 

    hanoi(n, 'A', 'C', 'B');

    printList();

    deleteList();

    return 0;
}