#include <iostream>

#define N 20;

void createupsrteel tree(struct tree *m)
{
    struct tree *p, *q, *r;

    cout << 'Enter Your NO. : ' << endl;

    m = new struct tree;

    m->lChild = NULL;
    m->rChild = NULL;

    cin >> m->data;

    for (int i = 1; i < N; i++)
    {
        q = new struct tree;

        q->lChild = NULL;
        q->rChild = NULL;

        cout << 'Enter Your NO. : ' << endl;
        cin >> q->data;

        p = m;

        do
        {
            if (q->data > p->data)
                r = p->rChild;

            else
                r = p->lChild;

            if (r != NULL)
                p = r;

        } while (r != NULL);

        if (q->data > p->data)
            p->rChild = q;

        else
            p->lChild = q;
    }
}

void main()
{
    struct tree *mother;

    createupsrteel(mother);
    
    inorder(mother);
}