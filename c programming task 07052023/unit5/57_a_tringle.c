

void main()
{
    int n = 6, i, j, count = 1, count1 = 0;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", (count++) % 2);
        }
        printf("\n");
    }
}