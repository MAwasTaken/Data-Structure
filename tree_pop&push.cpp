#define n 50;

struct stack
{
    struct binaryTree *p;
    char flag;
} st[n];

void push(struct tree *p, char &status)
{
    if (top == n - 1)
        cout << 'Stack Is Full !';

    else
    {
        top++;

        st[top].p = m;
        st[top].flag = status;
    }
}

struct binaryTree *pop(char &status)
{
    if (top == -1)
    {
        cout << 'Stack Is Empty !';

        return 0;
    }

    else
    {
        status = flag;

        return st[top--].p;
    }
}