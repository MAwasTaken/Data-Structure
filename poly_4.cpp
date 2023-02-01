struct poly
{
    int coef, exp;
    struct poly *fl, *bl;
}

class poly
{
public:
    poly();
    void readPoly();
    void addpoly();
    void multiPoly();
    long int evaluatePoly(int);

private:
    struct poly *start1, *cur1, *p1, *start2, *cur2, *p2, *start3, *cur3, *p3, *start4, *cur4, *p4;
}

void
Poly::addpoly()
{
    p1 = start1->fl;
    p2 = start2->fl;

    do
    {
        p3 = new struct poly;

        p3->fl = NULL;
        p3->bl = cur3;

        cur3->fl = p3;
        cur3 = p3;

        if (p1->exp == p2->exp)
        {
            p3->coef = p1->coef + p2->coef;
            p3->exp = p1->exp;

            p1 = p1->fl;
            p2 = p2->fl;
        }

        else if (p1->exp > p2->exp)
        {
            p3->coef = p1->coef;

            p1 = p1->fl;
        }

        else
        {
            p3->coef = p2->coef;
            p3->exp = p2->exp;

            p2 = p2->fl;
        }

    } while (p1 != NULL || p2 != NULL);
}

void Poly::multiPoly()
{
    int co, ex;
    struct poly *bp *q;

    for (p1 = start1->fl; p2 != NULL; p2 = p2->fl)
    {
        co = p1->coef * p2->coef;
        ex = p1->exp + p2->exp;

        for (p4 = start4->fl; p4 != NULL && p4->exp > ex; p4 = p4->fl)
            ;

        if (p4 = NULL)
            if ((p4->bl)->exp == ex)
                (p4->bl)->coef = co;

            else
            {
                bp = p4->bl;
                q = new struct poly();
                bp->fl = q;
                q->bl = bp;
                q->fl = p4;
                p4->bl = q;
                q->coef = co;
                q->exp = ex;
            }

        else
        {
            p4 = new struct poly();

            p4->fl = NULL;
            p4->bl = cur4;
            cur4->fl = p4;

            cur4 = p4;
            p4->coef = co;
            p4->exp = ex;
        }
    }
}