longint(char *pre)
{
    int i, p1, p2, l;

    l = strlen(pre);

    for (i = l-1; i>=0, i--)
        switch (pre[i])
        {
        case '+':
            p1 = pop();
            p2 = pop();
            push(p1 + p2);
            break;

        case '-':
            p1 = pop();
            p2 = pop();
            push(p1 - p2);
            break;

        case '*':
            p1 = pop();
            p2 = pop();
            push(p1 * p2);
            break;

        case '/':
            p1 = pop();
            p2 = pop();
            push(p1 / p2);
            break;

        case '%':
            p1 = pop();
            p2 = pop();
            push(p1 % p2);
            break;

        default:
            push(pre[i] - 48);
        }

    return pop();
}