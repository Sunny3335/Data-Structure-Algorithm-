#include <bits/stdc++.h>
using namespace std;

// creating a class
class myQueue
{
private:
    int *arr;
    int size;
    int front;
    int rear;

public:
    // constructor called
    myQueue(int n)
    {
        size = n;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    // NOTE: all operation in queue has T.C = O(1);

    // chechk is empty ?
    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // code for enqueue
    void enqueue(int data)
    {
        // check is queue full or not
        if (rear == size)
        {
            cout << "queue is full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    // code for dequeue
    int dequeue()
    {
        // check is queue empty
        if (front == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[front];
            arr[front] = -1; // for empty location
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }

    // front function means find element at front but not free up that space
    int frontNum()
    {
        // check is queue empty
        if (front == rear)
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    // for the size of queue
    int getSize()
    {
        return (rear - front);
    }
};

int main()
{

    myQueue q(5);
    q.enqueue(25);
    q.enqueue(252);
    q.enqueue(44);
    q.enqueue(2655);
    q.enqueue(65);

    cout << q.getSize() << endl;
    cout << q.dequeue() << endl;
    cout << q.getSize() << endl;
    cout << q.frontNum() << endl;

    if (q.isEmpty())
    {
        cout << "empty queue" << endl;
    }
    else
    {
        cout << "not empty" << endl;
    }

    return 0;
}