#include <iostream>
#include <bits/stdc++.h>

#define n 30

using namespace std;

class stack1
{
public:
    stack1();
    string pop();
    void push(string input);
    bool isFull();
    bool isEmpty();
    int getLen();

private:
    string a[n];
    int top;
};

stack1::stack1()
{
    top = -1;
}

string stack1::pop()
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

void stack1::push(string input)
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

int stack1::getLen()
{
    return top++;
}

class stack2
{
public:
    stack2();
    int pop();
    void push(int input);
    bool isFull();
    bool isEmpty();

private:
    int a[n], top;
};

stack2::stack2()
{
    top = -1;
}

int stack2::pop()
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

void stack2::push(int input)
{
    if (isFull())
        cout << "The Stack Is Full !" << endl;

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

int postfixToPrefix(string post, string infix, char *pre)
{
    int len;
    string postToIn(string post);
    int inToPre(string in, char *pre);

    infix = postToIn(post);

    pre[len], len = inToPre(infix, pre);

    return pre[len], len;
}

string postToIn(string post)
{
    int i, lenp;
    string p1, p2, temp;
    Stack1 myStack = stack1();

    lenp = post.length();

    for (i = 0; i < lenp; i++)
    {
        switch (post[i])
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
            temp = post[i];

            myStack.push(temp);

            break;
        }
    }

    temp = myStack.pop();

    return temp;
}

int inToPre(string infix, char *pre)
{
    stack2 myStack = stack2();
    int i, lenin, len = 0, j;
    char ch;

    lenin = infix.length();

    for (i = lenin - 1; i >= 0; i--)
    {
        switch (infix[i])
        {
        case '(':
            ch = myStack.pop();

            pre[j++] = ch;

            len++;

            break;

        case '+':
            myStack.push(infix[i]);

            break;

        case '-':
            myStack.push(infix[i]);

            break;

        case '*':
            myStack.push(infix[i]);

            break;

        case '/':
            myStack.push(infix[i]);

            break;

        case ')':
            break;

        default:
            pre[j++] = infix[i];

            len++;
        }
    }

    for (j = 0; j < len / 2; j++)
    {
        ch = pre[j];
        pre[j] = pre[len - 1 - j];
        pre[len - 1 - j] = ch;
    }

    return pre[len], len;
}

int main()
{
    int length;
    char prefix[n];
    string infix, postfix = "AC-BD+*";

    prefix[length], length = postfixToPrefix(postfix, infix, prefix);
    infix = postToIn(postfix);

    cout << "The Postfix: " << postfix << endl;
    cout << "The Infix: " << infix << endl;
    cout << "The Prefix: ";

    for (int i = 0; i < length; i++)
        cout << prefix[i];

    cout << endl;

    return 0;
}