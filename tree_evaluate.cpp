float evaluate(struct tree *m)
{
    switch (m->data)
    {
    case '+':
        return evaluate(m->lChild) + evaluate(m->rChild);
        break;

    case '-':
        return evaluate(m->lChild) - evaluate(m->rChild);
        break;

    case '*':
        return evaluate(m->lChild) * evaluate(m->rChild);
        break;

    case '/':
        return evaluate(m->lChild) / evaluate(m->rChild);
        break;

    case '%':
        return evaluate(m->lChild) % evaluate(m->rChild);
        break;

    default:
        return (m->data - 48);
    }
}