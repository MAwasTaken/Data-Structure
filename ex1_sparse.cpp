#include <iostream>

using namespace std;

#define length 5
#define col 4

int len;

int readMatrix(int a[][col], int n, int m)
{
    cout << "Please Enter A Matrix Of Size " << n << " * " << m << endl;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    return a[n][m];
}

void printMatrix(int a[][col], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";

        cout << "\n";
    }
}

int sparsedMatrix(int a[][col], int sparsed[length][3], int n, int m)
{
    len = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] != 0)
            {
                sparsed[len][0] = i;
                sparsed[len][1] = j;
                sparsed[len][2] = a[i][j];

                len++;
            }
        }
    }

    return sparsed[len][3];
}

void printSparsedMatrix(int sparsed[length][3], int len)
{
    cout << "Sparse Matrix With Size Of " << len << " * 3" << endl;
    cout << "Row Column Value" << endl;

    for (int i = 0; i < len; i++)
        cout << sparsed[i][0] << "  " << sparsed[i][1] << "  " << sparsed[i][2] << endl;
}

int main()
{
    int a[3][col], sparse[length][3], m, n;

    cout << "Please Enter Dimension Of Your Matrix: " << endl;

    cout << "Rows: ";
    cin >> n;

    cout << "Cols: ";
    cin >> m;

    readMatrix(a, n, m);

    printMatrix(a, n, m);

    sparsedMatrix(a, sparse, n, m);

    printSparsedMatrix(sparse, len);

    return 0;
}