void nonrecursive_inorder(struct binaryTree *m)
{
    top == -1;

    for (;;)
    {
        for (; m; m = m->lChild)
            push(m);

        if (top > -1)
            m = pop();

        else
            break;

        cout << m->data;

        m = m->rChild;
    }
}