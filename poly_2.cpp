#include <iostream>
using namespace std;

void readPoly(int a[])
{
    int i = 0;

    cout << '\n Please Enter Poly: ';

    do
    {
        cout << '\n caef: ';
        cin >> a[0][i];

        cout << '\n exp: ';
        cin >> a[1][i];

        i++;
    } while (a[i][i + 1] != 0);
}

void writePoly(int *a)
{
    int i = 0;

    cout << '\n The Poly is: ';

    do
    {
        if (i > 0)
            cout << '+' << a[0][i];

        else
        {
            cout << a[0][i] << 'x^' << a[1][i];
            i++;
        }
    } while (a[1][i - 1] != 0);
}

void sumPoly(int *a, int *b, int *c)
{
    int i = 0, j = 0, k = 0;

    do
    {
        if (a[1][i] == b[1][j])
        {
            c[1][k] = a[1][i];
            c[0][k++] = a[0][i++] + b[0][j++];
        }

        else if (a[1][i] > b[1][i])
        {
            c[i][k] = a[1][i];
            c[0][k++] = a[0][i++];
        }

        else
        {
            c[1][k] = b[1][k];
            c[0][k++] = b[0][j++];
        }

    } while (c[1][k - 1] != 0);
}

void multiPoly(int *a, int *b, int *c)
{
    int i = 0, j = 0, k = 0, n, coef, exp, found;

    do
    {
        do
        {
            coef = a[0][i] * b[0][j];
            exp = a[1][i] + b[1][j];

            n = 0;
            found = 0;

            do
            {
                if (exp == c[1][n])
                {
                    found = 1;
                    c[0][n] += coef;
                }

                n++;
            } while (n < k && !found);

            if (found == 0)
            {
                c[1][k] = exp;
                c[0][k] = coef;

                k++;
            }

            j++;

        } while (b[1][j - 1] != 0)

            i++;

    } while (a[1][i - 1] != 0);

    for (i = 0; i < k - 1; i++)
        for (j = i + 1; j < k; j++)
            if (c[1][i] < c[1][j])
            {
                n = c[0][i];
                c[0][i] = c[0][j];
                c[0][j] = n;

                n = c[1][i];
                c[1][i] = c[1][j];
                c[1][j] = n;
            }
}
