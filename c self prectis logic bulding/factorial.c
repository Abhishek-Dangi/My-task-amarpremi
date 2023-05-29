

void main()
{
    int n = 32, i;
    long double fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%lu ", fact);
}