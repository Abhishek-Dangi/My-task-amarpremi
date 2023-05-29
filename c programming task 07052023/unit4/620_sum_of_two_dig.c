

void main()
{
    int i, n, sum = 0;
    printf("enter the two digit number:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        if (n >= 0)
        {
            sum += n;
        }
    }
    printf("%d", sum);
}