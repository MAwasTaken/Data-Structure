#include <iostream>
using namespace std;

#define n 200

class stack
{
public:
    stack();
    void push();
    int pop();
    bool isEmpty();
    bool isFull();

private:
    int st[n];
    int top;
}

stack::stack()
{
    top = -1;
}

void stack::push()
{
    if (!isFull())
    {
        cout << 'Please Enter Data For Push: ';

        top++;

        cin >> st[top];
    }

    else
    {
        cout << 'Stack Is Full !';
    }
}

int stack::pop()
{
    int data;

    if (!isEmpty())
    {
        data = st[top];

        top--;

        return data;
    }

    else
    {
        cout << 'Stack Is Empty !';

        return 0;
    }
}

bool stack::isEmpty()
{
    if (top == -1)
        return true;

    else
        return false;
}

bool stack::isFull()
{
    if (top == n - 1)
        return true;

    else
        return false;
}
