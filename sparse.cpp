struct sparse
{
    int value;
    int row, col;
    struct sparse *left, *right, *up, *down
} *start, *hc, *hr, *p, *q, *r;

void smRead()
{
    start = new struct sparse;

    start->up = start;
    start->down = start;
    start->left = start;
    start->rght = start;

    int row, col, value, nv, nr, nc;

    cout << 'Please Enter Number Of ROW, Number Of COL And Number Of Value: ';
    cin >> nr >> nc >> nv;

    for (row = 0; row < nr; row++)
    {
        hr = new struct sparse;

        hr->up = p;
        hr->down = start;

        p->down = hr;

        hr->left = hr;
        hr->right = hr;

        p = hr;
    }

    p = start;

    for (col = 0; col < nc; col++)
    {
        hc = new struct sparse;

        hc->left = p;
        hc->right = start;

        p->right = hc;

        start->left = hc;

        hc->up = hc;
        hc->down = hc;

        p = hc;
    }

    for (int i = 0; i < nv; i++)
    {
        cout << '\n Please Enter Following Values: ';

        cout << '\n Row: ';
        cin >> row;

        cout << '\n Col: ';
        cin >> col;

        cout << '\n Value: ';
        cin >> value;

        hr = start;

        for (int j = 0; j <= row; j++)
        {
            hr = hr->down;
            hc = start;

            for (int k = 0; k <= col; k++)
                hc = hc->right;

            q = new struct sparse;

            for (p = hr->right; p != hr; p = p->right)
                ;

            for (r = hc->down; r != hc; r = r->down)
                ;

            q->left = p;
            q->up = r;
            q->down = hc;
            q->right = hr;

            p->right = q;
            r->down = q;

            hr->left = q;
            hc->up = q;

            q->value = value;
            q->row = row;
            q->col = col;
        }
    }
}

void smDelete()
{
    hr = start;

    do
    {
        hc = hc->right;

        do
        {
            p = hc->right;

            hc->right = NULL;
            hc->left = NULL;
            hc->up = NULL;
            hc->down = NULL;

            delete (hc);

            hc = p;

        } while (p != start);

        hr = hr->down;

    } while (hr != start);

    hr = start->down;

    do
    {
        p = hr->down;

        hr->right = NULL;
        hr->left = NULL;
        hr->up = NULL;
        hr->down = NULL;

        delete (hr);

        hr = p;

    } while (p != start);

    delete (start);
}