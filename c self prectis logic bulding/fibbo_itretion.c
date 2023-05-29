

void main()
{
    int n = 20, i, res = 0, ft = -1, st = 1, temp;
    for (i = 0; i <= n; i++)
    {
        res = ft + st;
        printf("%d ", res);
        ft = st;
        st = res;
    }
}