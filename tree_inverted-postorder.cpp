struct binaryTree
{
    char data;
    struct binaryTree *lChild *rChild;
} *mother;

void inverted_postorder(struct binaryTree *p)
{

    if (p->lChild != NULL)
        inverted_postorder(p->lChild);

    if (p->rChild != NULL)
        inverted_postorder(p->rChild);
        
    cout << p->data;
}