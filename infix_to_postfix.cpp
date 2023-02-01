void infixToPostfix(char *in, char *post)
{
    int i;
    int j = 0;
    char ch;

    for (i = 0; in[i] != '\0'; i++)
        switch (in[i])
        {
        case '(':
            break;

        case '+':
        case '-':
        case '*':
        case '/':
        case '%':
            push(in[i]);
            break;

        case ')':
            ch = pop();
            post[j] = ch;
            j++;
            break;

        default:
            post[j] = in[i];
            j++;
        }

    post[j]='\0';
}