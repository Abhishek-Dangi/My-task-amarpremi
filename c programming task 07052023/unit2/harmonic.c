

void main()
{
    int i, n;

    float s = 0.0;
    printf("Input value");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i < n)
        {
            printf("1/%d +", i);
            s += 1 / (float)i;
        }
        if (i == n)
        {
            printf("1/%d", i);
            s += 1 / (float)i;
        }
    }
    printf("\n sum of series %d terms: %f", n, s);
}