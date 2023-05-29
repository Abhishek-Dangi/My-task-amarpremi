

void main()
{
    int num = 12345, n, i, temp, rem, sum;
    for (i = 1; i <= 10; i++)
    {
        if (num > 0)
        {
            rem = num % 10;
            sum = (sum * 10) + rem;
            num /= 10;
        }
    }
    printf("%d ", sum);
}