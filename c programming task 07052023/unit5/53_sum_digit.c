void main()
{
    int num = 12345, rem = 0, rev = 0, sum = 0;

    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num /= 10;
    }
    printf("sum of num is:%d", sum);
}