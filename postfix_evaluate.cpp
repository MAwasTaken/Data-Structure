longint(char *post)
{
    int i, p1, p2;

    for (i = 0; post[i] != '\0', i++)
        switch (post[i])
        {
        case '+':
            p1 = pop();
            p2 = pop();
            push(p1 + p2);
            break;

        case '-':
            p1 = pop();
            p2 = pop();
            push(p2 - p1);
            break;

        case '*':
            p1 = pop();
            p2 = pop();
            push(p1 * p2);
            break;

        case '/':
            p1 = pop();
            p2 = pop();
            push(p2 / p1);
            break;

        case '%':
            p1 = pop();
            p2 = pop();
            push(p2 % p1);
            break;

        default:
            push(post[i] - 48);
        }

    return pop();
}