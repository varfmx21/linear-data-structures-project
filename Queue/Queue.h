#ifndef QUEUE_H
#define QUEUE_H



class Queue {
private:
    int front;
    int rear;
    int size;
    int* queue;
public:
    Queue(int capacity);
    bool isEmpty();
    bool isFull();
    void enqueue(int value);
    void dequeue();
    int peek();
    ~Queue();
};



#endif //QUEUE_H