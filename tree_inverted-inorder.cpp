struct binaryTree
{
    char data;
    struct binaryTree *lChild *rChild;
} *mother;

void inverted_inorder(struct binaryTree *p)
{

    if (p->lChild != NULL)
        inverted_inorder(p->lChild);

    if (p->rChild != NULL)
        cout << p->data;
}