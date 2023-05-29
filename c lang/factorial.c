

void main()
{
    int n = 0, i, factorial = 1;

    printf("Enter the value of n ");
    scanf("%d", &n);

    printf("value of n is %d\n", n);

    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("factorial of n is %d\n", factorial);
}