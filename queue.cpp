#include <iostream>
using namespace std;

class Queue {
private:
    static const int MAX_SIZE = 3;
    int arr[MAX_SIZE];
    int front, rear;

public:
    Queue() {
        front = rear = -1;
    }

    void enqueue(int data) {
        if ((rear == MAX_SIZE - 1 && front == 0) || (rear == front - 1)) {
            cout << "Queue is full. Cannot enqueue " << data << endl;
        } else {
            if (front == -1)
                front = 0;
            rear = (rear + 1) % MAX_SIZE;
            arr[rear] = data;
            cout << data << " enqueued in the queue." << endl;
        }
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue is empty. Cannot dequeue." << endl;
        } else {
            int data = arr[front];
            if (front == rear) {
                front = rear = -1;
            } else {
                front = (front + 1) % MAX_SIZE;
            }
            cout << data << " dequeued from the queue." << endl;
        }
    }
    
    void view() {
        if (front == -1) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Queue elements: ";
            int i = front;
            while (true) {
                cout << arr[i] << " ";
                if (i == rear) break;
                i = (i + 1) % MAX_SIZE;
            }
            cout << endl;
        }
    }
};

int main() {
    Queue queue;
    int choice, data;
    queue.enqueue(22);
    queue.enqueue(33);
    queue.enqueue(88);
    queue.dequeue();
    queue.enqueue(44);
    queue.view();
    
    return 0;
}

