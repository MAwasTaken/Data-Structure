#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define n 30

class stack1
{
public:
    stack1();
    int pop();
    void push(int input);
    bool isFull();
    bool isEmpty();

private:
    int a[n], top;
};

stack1::stack1()
{
    top = -1;
}

int stack1::pop()
{
    int value;

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

void stack1::push(int input)
{
    if (isFull())
        cout << "The Stack Is Full !" << endl;

    else
    {
        top++;
        a[top] = input;
    }
}

bool stack1::isFull()
{
    if (top == n - 1)
        return true;

    else
        return false;
}

bool stack1::isEmpty()
{
    if (top == -1)
        return true;

    else
        return false;
}

class stack2
{
public:
    stack2();
    string pop();
    void push(string input);
    bool isFull();
    bool isEmpty();
    int getlen();

private:
    string a[n];
    int top;
};

stack2::stack2()
{
    top = -1;
}

string stack2::pop()
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

void stack2::push(string input)
{
    if (isFull())
        cout << "The Stack Is Full!" << endl;

    else
    {
        top++;
        a[top] = input;
    }
}

bool stack2::isFull()
{
    if (top == n - 1)
        return true;

    else
        return false;
}

bool stack2::isEmpty()
{
    if (top == -1)
        return true;

    else
        return false;
}

int stack2::getlen()
{
    return top++;
}

int prefixToPostfix(string pre, string infix, char *post)
{
    int len;
    string preToIn(string pre);
    int inToPost(string infix, char *post);

    infix = preToIn(pre);

    cout << infix;

    post[len], len = inToPost(infix, post);

    return post[len], len;
}

string preToIn(string pre)
{
    string p1, p2, temp;
    int i, lenp;
    stack2 myStack = stack2();

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

int inToPost(string in, char *post)
{
    stack1 myStack = stack1();
    int len = 0, lenin, i, j = 0;
    char ch;

    lenin = in.length();

    for (i = 0; i < lenin; i++)
    {
        switch (in[i])
        {
        case '(':
            break;

        case ')':
            ch = myStack.pop();

            post[j++] = ch;

            len++;

            break;

        case '+':
            myStack.push(in[i]);

            break;

        case '-':
            myStack.push(in[i]);

            break;

        case '/':
            myStack.push(in[i]);

            break;

        case '*':
            myStack.push(in[i]);

            break;

        default:
            ch = in[i];

            post[j++] = ch;

            len++;
        }
    }

    post[j] = '\0';

    return post[len], len;
}

int main()
{
    int length;
    string infix, prefix = "*+DB-CA";
    char postfix[n];

    postfix[length], length = prefixToPostfix(prefix, infix, postfix);

    infix = preToIn(prefix);

    cout << "The Prefix: " << prefix << endl;
    cout << "The infix: " << infix << endl;
    cout << "The postfix: ";

    for (int i = 0; i < length; i++)
        cout << postfix[i];

    cout << endl;

    return 0;
}