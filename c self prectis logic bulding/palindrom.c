

void main()
{
    int n = 12345, i, rem, sum = 0, temp;
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = (sum * 10) + rem;
        n /= 10;
    }
    if (temp == sum)
        printf("palindorm %d", sum);
    else
        printf("not palindorm %d", sum);
}