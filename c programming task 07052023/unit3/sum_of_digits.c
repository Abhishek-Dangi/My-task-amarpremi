

void main()
{
    int n, rem, sum = 0;
    printf("enter the num\n");
    scanf("%d", &n);
    while (n)
    {
        rem = n % 10;
        sum += rem;
        n = n / 10;
    }
    printf("%d", sum);
}