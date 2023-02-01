void nonrecursive_postorder(struct binaryTree *m)
{
    int status;

    top = -1;

    do
    {
        do
        {
            push(m, 1);

            if (m->rChild)
                push(m->rChild, 0);

            m = m->lChild;

        } while (m);

        m = pop(status);

        while ((status == 1) && m)
        {
            cout << m->data;

            m = pop(status);
        }

    } while ((status == 0) && m);
}