struct poly
{
    int coef, exp;
    struct poly *fl, *bl;
} *start, *cur, *p;

start = new struct poly;

start->fl = NULL;
start->bl = NULL;

cur = start;

void readPoly()
{
    int co, ex;

    do
    {
        cout << 'Enter Coef: ';
        cin >> co;

        cout << 'Enter Exp: ';
        cin >> ex;

        p = new struct poly;

        p->fl = NULL;
        p->bl = p;

        cur = p;

        p->coef = co;
        p->exp = ex;
    } while (ex != 0);
}

void writePoly()
{
    cout << endl;

    for (p == start->fl; p != NULL; p = p->fl)
        if (p->coef > 0)
            cout << '+' << p->coef << 'x^' << p->exp;

        else
            cout << p->coef << 'x^' << p->exp;
}

long int evaluatePoly(int x)
{
    long int sum = 0;

    for (p = start->fl; p != NULL; p = p->fl)
        sum += p->coef * pow(x, p->exp);

    return sum;
}