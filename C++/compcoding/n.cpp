#include<iostream>
 using namespace std;
class circularqueue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    circularqueue(int n)
    {
        size = n;
        arr = new int(size);
        front = rear = -1;
    }
    void enqueue(int value)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            cout << "queue is full";
            return;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = value;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = value;
        }
        else
        {
            rear++;
            arr[rear] = value;
        }
        return;
    }
    void dequeue()
    {
        if (front == -1)
        {
            cout << "queue is empty";
            return;
        }
        else if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0; // to mantain cyclic nature
        }
        else
        { // normal flow
            front++;
        }
        return;
    }
    void isEmpty()
    {
        if (front == -1)
        {
            cout << "queue is empty";
        }
    }
    void isFull()
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            cout << "the queue is full";
        }
    }
    void peek()
    {
        if (front == -1)
            cout << "queue is empty";
        else
            cout << arr[front] << endl;
    }
    void displayqueue()
    {
        if (front == -1)
        {
            cout << "queue is empty";
        }
        if (rear >= front)
        {
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << endl;
            }
        }
        else
        {
            for (int i = front; i < size; i++)
            {
                cout << arr[i] << endl;
            }
            for (int i = 0; i <= rear; i++)
            {
                cout << arr[i] << endl;
            }
        }
    }
};
int main()
{
    circularqueue q(5);
    int z;
    int m;
    while (1)
    {
        cout << "choose a option:" << endl;
        cout << "1. enqueue" << endl;
        cout << "2. dequeue" << endl;
        cout << "3. isfull" << endl;
        cout << "4. isempty" << endl;
        cout << "5. display" << endl;
        cout << "6. peek" << endl;
        cout << "7. break" << endl;
        cin >> z;
        switch (z)
        {
        case 1:
        {
            cout << "enter the number you want to insert" << endl;
            cin >> m;
            q.enqueue(m);
            break;
        }
        case 2:
            q.dequeue();
            break;
        case 3:
            q.isFull();
            break;
        case 4:
            q.isEmpty();
            break;
        case 5:
            q.displayqueue();
            break;
        case 6:
            q.peek();
            break;
        case 7:
            break;
            break;
        }
    }
}
