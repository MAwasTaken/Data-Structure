void prefixToInfix(char *pre, char *in)
{
    int i, k = 0, l = 0;

    for (i = 0; pre[i] != '\0'; i++)
        switch (pre[i])
        {
        case '+':
        case '-':
        case '*':
        case '%':
        case '/':
            in[k++] = '(';
            push(pre[i]);
            break;

        default:
            if (in[k - 1] == ')')
            {
                in[k++] = pre[i];
                in[k++] = pop();
                l++;
            }

            else
            {
                in[k++] = pre[i];

                for (; l >= 1; l++)
                    in[k++] = ')';

                if (pre[i + 1] == '*' || pre[i + 1] == '/' || pre[i + 1] == '+' || pre[i + 1] == '%' || pre[i + 1] == '-')
                {
                    in[k++] = ')';
                    l = 0;
                }

                if (!emptyStack())
                {
                    in[k++] = pop();
                    l++;
                }
            }
        }

    in[k] = '\0';
}