
// do while loop

void main()
{
    int n = 0, ft = 0, tt, st = 1, lim = 20;
    printf("%d ", ft);
    printf("%d ", st);

    do
    {
        ft = ft + st;
        printf("%d ", ft);
        tt = ft;
        ft = st;
        st = tt;
        n++;
    } while (n <= lim);
}