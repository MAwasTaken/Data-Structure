#include <bits/stdc++.h>

using namespace std;

#define n 30

class stack
{
public:
    stack();
    string pop();
    void push(string input);
    bool isFull();
    bool isEmpty();
    int getLen();

private:
    string a[n];
    int top;
};

stack::stack()
{
    top = -1;
}

string stack::pop()
{
    string value;

    if (isEmpty())
    {
        cout << "The Stack Is Empty !" << endl;

        return 0;
    }

    else
    {
        value = a[top];
        top--;

        return value;
    }
}

void stack::push(string input)
{
    if (isFull())
        cout << "The Stack Is Full!" << endl;

    else
    {
        top++;
        a[top] = input;
    }
}

bool stack::isFull()
{
    if (top == n - 1)
        return true;

    else
        return false;
}

bool stack::isEmpty()
{
    if (top == -1)
        return true;

    else
        return false;
}

int stack::getLen()
{
    return top++;
}

string prefixToInfix(string pre)
{
    string p1, p2, temp;
    int i, lenp;

    stack myStack = stack();

    lenp = pre.length();

    for (i = lenp; i >= 0; i--)
    {
        switch (pre[i])
        {
        case '+':
            p1 = myStack.pop();
            p2 = myStack.pop();

            temp = "(" + p1 + "+" + p2 + ")";

            myStack.push(temp);

            break;

        case '-':
            p1 = myStack.pop();
            p2 = myStack.pop();

            temp = "(" + p1 + "-" + p2 + ")";

            myStack.push(temp);

            break;

        case '*':
            p1 = myStack.pop();
            p2 = myStack.pop();

            temp = "(" + p1 + "*" + p2 + ")";

            myStack.push(temp);

            break;

        case '/':
            p1 = myStack.pop();
            p2 = myStack.pop();

            temp = "(" + p1 + "/" + p2 + ")";

            myStack.push(temp);

            break;

        default:
            temp = pre[i];

            myStack.push(temp);

            break;
        }
    }

    return myStack.pop();
}

int main()
{
    int length;
    string infix, prefix = "*+DB-CA";

    infix = prefixToInfix(prefix);

    cout << "The Prefix: " << prefix << endl;
    cout << "The Infix: " << infix << endl;

    return 0;
}