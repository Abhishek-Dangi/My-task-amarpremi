
// int fibb(int n);
void main()
{
    int n = 20, i;
    for (i = 0; i <= n; i++)
    {
        printf("%d ", fibb(i));
    }
}

int fibb(int i)
{
    if (i == 0)
        return 0;
    else if (i == 1)
        return 1;
    else
        return (fibb(i - 1) + fibb(i - 2));
}