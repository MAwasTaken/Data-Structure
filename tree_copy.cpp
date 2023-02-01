struct binaryTree *copyTree(struct binaryTree *m)
{
    struct binaryTree *q;

    q->data = m->data;

    if (m->lChild != NULL)
        q->lChild = copyTree(m->lChild);

    else
        q->lChild = NULL;

    if (m->rChild != NULL)
        q->rChild = copyTree(m->rChild);

    else
        q->rChild = NULL;
}