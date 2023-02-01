#include <iostream>
using namespace std;

void readPoly(int a[], int n)
{
    for (int i = 0; i >= 0; i++)
    {
        cout << '\n coaf of a[' << i << ']';
        cin >> a[i];
    }
}

long int evaluatePoly(int a[], int n, int x)
{
    long int sum = 0;

    for (int i = 0; i <= n; i++)
        sum += a[i];

    return sum;
}

void addPoly(int c[], int a[], int b[], int n)
{
    for (int i = 0; i <= n; i++)
        c[i] = a[i] + b[i];
}

void multiPoly(int c[], int a[], int b[], int n, int m)
{
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++)
            c[i + j] = a[i] * b[j];
}

void main()
{
    int a[21], b[21], c[21], d[41];
    long int s, l;

    cout << '\n Please Enter First Poly: ';
    readPoly(a, 20);

    cout << '\n Please Enter Second Poly: ';
    readPoly(b, 20);

    addPoly(c, a, b, 20);

    multiPoly(d, a, b, 20, 20);

    cout << '\n The Sum Of Two Poly Is: ';
    printPoly(c, 20);

    cout << '\n The Multiply Of Two Poly Is: ';
    printPoly(d, 40);

    cout << '\n The Sum of Two Poly IS: '
         << evaluatePoly(c, 20);

    cout << '\n The Multiply Of Two Poly Is: '
         << evaluatePoly(d, 40);
}

void printPoly(int a[], int n)
{
    cout << endl;

    for (int i = n; i > 0; i--)
    {
        if (a[i] != 0)
            if (a[i] > 0)
                cout << '+' << a[i] << 'x^n' << i;
            else
                cout << a[i] << 'x^' << i;
    }
}
