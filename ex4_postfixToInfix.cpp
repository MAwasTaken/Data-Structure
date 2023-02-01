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
        cout << "The Stack Is Full !" << endl;

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

string postfixToInfix(string post)
{
    int i, lenp;
    string p1, p2, temp;

    stack mystack = stack();

    lenp = post.length();

    for (i = 0; i < lenp; i++)
    {
        switch (post[i])
        {
        case '+':
            p1 = mystack.pop();
            p2 = mystack.pop();

            temp = "(" + p1 + "+" + p2 + ")";

            mystack.push(temp);

            break;

        case '-':
            p1 = mystack.pop();
            p2 = mystack.pop();

            temp = "(" + p1 + "-" + p2 + ")";

            mystack.push(temp);

            break;

        case '*':
            p1 = mystack.pop();
            p2 = mystack.pop();

            temp = "(" + p1 + "*" + p2 + ")";

            mystack.push(temp);

            break;

        case '/':
            p1 = mystack.pop();
            p2 = mystack.pop();

            temp = "(" + p1 + "/" + p2 + ")";

            mystack.push(temp);

            break;

        default:
            temp = post[i];

            mystack.push(temp);

            break;
        }
    }

    temp = mystack.pop();

    return temp;
}

int main()
{
    string infix, postfix = "AC-BD+*";

    infix = postfixToInfix(postfix);

    cout << "The Postfix: " << postfix << endl;
    cout << "The Infix: " << infix << endl;

    return 0;
}