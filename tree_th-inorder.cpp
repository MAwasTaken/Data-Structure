#include <iostream>

void th_inorder(struct binaryTree *m)
{
    q = m;
    struct binaryTree *q;

    if (m->lChild)
        th_inorder(m->lChild);

    else
    {
        m->lChild = q;
        m->lStatus = 0;
    }

    if (!(q->rChild))
    {
        q->rChild = m;
        q->rStatus = 0;
    }

    q = m;

    if (m->rChild)
        th_inorder(m->rChild);
}

status = 1;
status = 0;

struct binaryTree
{
    int data;
    struct binaryTree *lChild, *rChild;
    int lStatus, rStatus;
};

void t_th_inorder(struct binaryTree *m)
{
    p = m;

    do
    {
        for (; p->lStatus; p = p->lChild)
            ;

        cout << p->data;

        p = p->rChild;

        cout << p->data;

        p = p->rChild;

    } while (p != m);
}