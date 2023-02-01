void infixToPrefix(char *in, char *pre)
{
    int i, l;
    int j = 0;
    char ch;
    l = strlen(in);

    for (i = l - 1; in[i] != '\0'; i--)
        switch (in[i])
        {
        case '(':
            ch = pop();
            pre[j] = ch;
            j++;
            break;

        case '+':
        case '-':
        case '*':
        case '/':
        case '%':
            push(in[i]);
            break;

        case ')':
            break;

        default:
            pre[j] = in[i];
            j++;
        }

    pre[j] = '\0';
    l = strlen(pre);

    for (j = 0; j < l / 2; j++)
    {
        ch = pre[j];
        pre[j] = pre[l - 1 - j];
        pre[l - 1 - j] = ch;
    }
}