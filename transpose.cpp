void transpose(int *a, int *b)
{
    int i, j;

    b[0][0] = a[0][1];
    b[0][1] = a[0][0];
    b[0][2] = a[0][2];

    for (j = 0; j <= a[0][1]; j++)
        for (i = 1; i <= a[0][2]; i++)
            if (a[i][1] == j)
            {
                b[k][0] = a[i][1];
                b[k][1] = a[i][0];
                b[k++][2] = a[i][2];
            }
}
