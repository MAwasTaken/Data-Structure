struct tree *creatBTformula(int i, pre[])
{
    struct binaryTree *s;

    if (pre[i] != '\0')
    {
        switch (pre[i])
        {
        case '+':
        case '*':
        case '-':
        case '/':
        case '%':
            s = new struct binaryTree;

            s->data = pre[i];
            s->lChild = creatBTformula(i + 1, pre);
            s->rChild = creatBTformula(i + 1, pre);

            return (s);

            break;

        default:
            s = new struct binaryTree;

            s->lChild = NULL;
            s->rChild = NULL;
            s->data = pre[i];

            return (s);
        }
    }

    void main()
    {
        struct binaryTree *start;

        start = creatBTformula(0, pre);
    }
}