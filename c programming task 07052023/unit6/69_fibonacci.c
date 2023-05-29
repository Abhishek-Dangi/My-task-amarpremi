

void main()
{
    int ft = -1, st = 1, tt = 0, i = 0, n = 20, print, loop;

loop:

    while (i <= n)
    {
        ft = ft + st;
        printf("%d ", ft);
        tt = ft;
        ft = st;
        st = tt;
        i++;
        if (st == 144)
        {
            break;
        }
    }
}