struct m
{
    int row, col;
    float value;
}

class sparse
{
    friend add(sparse, sparse, sparse &);

public:
    void read();
    void show();

private:
    struct m.Data[max];
    int R, C, V;
}

friend add(sparse X, sparse Y, sparse &Z)
{
    int i = 0, j = 0, k = 0;

    if ((X.R != Y.R) || (X.C != Y.C))
        cout << 'Unable To Add';

    else
        Z.V = 0;

    do
    {
        if (X.Data[i].row == Y.Data[j].row)
        {
            if (X.Data[i].col == Y.Data[j].col)
            {
                Z.Data[k].row = X.data[i++].col;
                Z.Data[k++].value = X.Data[i++].value + Y.Data[j++].value;

                Z.V++;
            }

            else if (X.Data[i].col < Y.Data[j].col)
            {
                Z.Data[k].row = X.Data[i].row;
                Z.Data[k].col = X.Data[i].col;
                Z.Data[k++].value = X.Data[i++].value;

                Z.V++;
            }

            else
            {
                Z.Data[k].row = Y.Data[j].row;
                Z.Data[k].col = Y.Data[j].col;
                Z.Data[k++].value = Y.Data[j++].value;

                Z.V++;
            }
        }

        else if (X.Data[i].row < Y.Data[j].row)
        {
            Z.Data[k].row = X.Data[i].row;
            Z.Data[k].col = X.Data[i].col;
            Z.Data[k++].value = X.Data[i++].value;

            Z.V++;
        }

        else
        {
            Z.Data[k].row = Y.Data[j].row;
            Z.Data[k].col = Y.Data[j].col;
            Z.Data[k++].value = Y.Data[j++].value;

            Z.V++;
        }

    } while (i <= X.V && j <= Y.V);

    if (i > X.V)
        for (; j < Y.V; j++)
        {
            Z.Data[k].row = Y.Data[j].row;
            Z.Data[k].col = Y.Data[j].col;
            Z.Data[k++].value = Y.Data[j++].value;

            Z.V++;
        }

    else
        for (; i <= X.V; i++)
        {
            Z.Data[k].row = X.Data[i].row;
            Z.Data[k].col = X.Data[i].col;
            Z.Data[k++].value = X.Data[i++].value;

            Z.V++;
        }
}