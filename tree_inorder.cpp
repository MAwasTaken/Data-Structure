struct binaryTree
{
    char data;
    struct binaryTree *lChild *rChild;
} *mother;

void inorder(struct binaryTree *p)
{
    if (p->lChild != NULL)
        inorder(p->lChild);

    cout << p->data;

    if (p->rChild != NULL)
        inorder(p-> rChild);
}