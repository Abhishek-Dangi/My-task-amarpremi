

void main()
{
    int P = 0, n = 0, i = 0, print, loop, V;
    float r = 0.10;

a:
    // for (i; i < 10; i++)
    // {
    //     V = 0;
    //     P += 1000;
    //     r += 0.01;
    //     n += 1;
    //     // printf("%d ", P);
    //     // printf("%1.2f ", r);
    //     // printf("%d ", n);
    //     V = P * (1 + r);
    //     goto print;
    // }
    while (i <= 10)
    {
        V = 0;
        P += 1000;
        r += 0.01;
        n += 1;
        // printf("%d ", P);
        // printf("%1.2f ", r);
        // printf("%d ", n);
        V = P * (1 + r);
        i++;
        goto print;
    }

print:

    printf("\nyear  rate  value \n ");
    printf("%d     %1.2f     %d  ", n, r, V);
    if (i < 10)
    {
        goto a;
    }
}