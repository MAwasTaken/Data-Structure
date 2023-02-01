int compTree(struct binaryTree *m1, struct binaryTree *m2)
{
    if (m1->data != m2->data)
        return 0;

    else
        return (compTree(m1->lChild, m2->lChild) && compTree(m1->rChild, m2->rChild));

    if ((m1 == NULL) && (m2 == NULL))
        return 1;
}