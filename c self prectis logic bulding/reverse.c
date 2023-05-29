

void main()
{
    int n = 12345, temp = 0, rem;
    while (n > 0)
    {
        rem = n % 10;
        temp = (temp * 10) + rem;
        n /= 10;
        // printf("%d ", temp);
    }
    printf("%d ", temp);
}