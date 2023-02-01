void nonerecursive_preorder(struct binaryTree *m)
{
    top = -1;

    do
    {
        do
        {
            cout << m->data;

            push(m);

            m->lChild;

        } while (m);

        do
        {
            m = pop();

        } while (!(m->rChild) && (top > -1));

    } while (m);
}