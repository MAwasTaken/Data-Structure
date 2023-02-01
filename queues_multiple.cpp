#include <stdio.h>
#include <conio.h>
#include <iostream>

#define N 1000;

using namespace std;

struct queue[N];
int front[4] = {0, 250, 500, 750};
int rear[4] = {0, 250, 500, 750};
int l[4] = {0, 250, 500, 750};
int h[4] = {249, 499, 749, 999};

bool isEmpty(i)
{
    if (rear[i] == front[i])
        return true;

    else
        return false;
}

bool isFull(i)
{
    if ((rear[i] + 1) % h[i] + l[i] == front[i])
        return true;

    else
        return false;
}

void insert(int i, int d)
{
    if (!isFull(i))
    {
        queue[rear[i]] = d;
        rear[i] = (rear[i] + 1) % h[i] + l[i];
    }

    else
        cout << 'The Queue Is Full !';
}

int del(int i)
{
    int data;

    if (!isEmpty(i))
    {
        data = queue[front[i]];
        front[i] = (front[i] + 1) % h[i] + l[i];
    }

    else
        cout << 'The Queue Is Empty !' << endl;
}

void main()
{
    int x, m;
    char ch;

    cout << 'Insert i For Insert & d For Delete: ';

    do
    {
        ch = getch();

        switch (ch)
        {
        case 'i':
        case 'I':
            cout << 'Enter The Queue NO. : ';
            cin >> m;

            cout << 'Enter The Data: ';
            cin >> x;

            insert(m, x);

            break;

        case 'd':
        case 'D':
            cout << 'Enter The Queue NO. : ';
            cin >> m;

            x = del(m);

            cout << 'The Deleted Data Is: ' << x;

            break;
        }
    } while (ch != 'x' && ch != 'X');
}