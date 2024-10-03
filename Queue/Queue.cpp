#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue(int capacity) {
    front = -1;
    rear = -1;
    size = capacity;
    queue = new int[size];
}

bool Queue::isEmpty() {
    return front == -1;
}

bool Queue::isFull() {
    return rear == size-1;
}

void Queue::enqueue(int value) {
    if(isFull()) {
        cout << "Queue overflow " << endl;
        return;
    }
    if(front == -1) {
        front = 0;
    }
    queue[++rear] = value;
    cout << value << " enqueued to queue " << endl;
};


void Queue::dequeue() {
    if (isEmpty()) {
        cout << "Queue underflow" << endl;
        return;
    }
    cout << queue[front] << " dequeued from queue" << endl;
    front++;  // Incrementa el frente para eliminar el elemento

    if (front > rear) {
        front = rear = -1;
    }
}

int Queue::peek() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return -1;
    }
    return queue[front];  // Retorna el elemento del frente
}

// Destructor: Libera la memoria asignada para el arreglo
Queue::~Queue() {
    delete[] queue;
}