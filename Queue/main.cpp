#include <iostream>

#include "Queue.cpp"
using namespace std;

int main()
{
    // Crea una cola con capacidad de 5 elementos
    Queue q(5);

    // Inserta elementos en la cola
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    // Muestra el elemento al frente
    cout << "Front element: " << q.peek() << endl;

    // Elimina elementos de la cola
    q.dequeue();
    q.dequeue();

    // Muestra el elemento al frente después de eliminar
    cout << "Front element: " << q.peek() << endl;

    return 0;
}