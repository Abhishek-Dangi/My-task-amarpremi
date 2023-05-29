

void main()
{
    int n = 20, i, j, count = 0;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            // printf(" %d ", j);
            count = count + 1;
            printf("%d ", count);
        }
        printf("\n");
    }
}