struct binaryTree
{
    char data;
    struct binaryTree *lChild *rChild;
} *mother;

void preorder(struct binaryTree *p)
{
    cout << p->data;

    if (p->lChild != NULL)
        preorder(p->lChild);

    if (p->rChild != NULL)
        preorder(p->rChild);
}