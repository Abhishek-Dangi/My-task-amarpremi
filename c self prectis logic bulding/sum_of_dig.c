

void main()
{
    int n = 123456, rem, s, temp;

    s = sum_dig(n);
    printf("%d ", s);
}

int sum_dig(n)
{
    int rem, sum = 0;
    while (n > 0)
    {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }
    return (sum);
}