void infixToPrefix(char *in, char *pre)
{
    int i;
    int j = 0;
    int k;

    for (i = 0; in[i] != '\0'; i++)
        switch (in[i])
        {
        case '(':
            push[j];
            j++;
            break;

        case '+':
        case '-':
        case '*':
        case '/':
        case '%':
            k = pop();
            pre[k] = in[i];
            break;

        case ')':
            break;

        default:
            pre[j] = in[i];
            j++;
        }

    pre[j]='\0';
}