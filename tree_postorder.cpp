struct binaryTree
{
    char data;
    struct binaryTree *lChild *rChild;
} *mother;

void postorder(struct binaryTree *p)
{
    if (p->lChild != NULL)
        postorder(p->lChild);

    if (p->rChild != NULL)
        postorder(p->rChild);
        
    cout << p->data;
}