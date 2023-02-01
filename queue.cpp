#include <iostream>
using namespace std;

#define n 200

class queue
{
public:
    queue();
    void insert();
    int del();
    bool isEmpty();
    bool isFull();

private:
    int q[n];
    int front;
    int rear;
}

queue::queue()
{
    front = 0;
    rear = 0;
}

void queue::insert()
{
    if (!isFull())
    {
        cout << 'Please Enter Data for INSERT: ';
        cin >> q[rear];

        rear = (rear + 1) % n;
    }

    else
    {
        cout << 'Queue Is Full !';
    }
}

int queue::del()
{
    int data;

    if (!isEmpty())
    {
        data = q[front];
        front = (front + 1) % n;

        return data;
    }

    else
    {
        cout << 'Queue Is Empty !';

        return 0;
    }
}

bool queue::isEmpty()
{
    if (front == rear)
        return true;

    else
        return false;
}

bool queue::isFull()
{
    if((rear+1)%n = front)
        return true;

    else
        return false;
}