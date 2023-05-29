

void main()
{
    int n = 153, temp, rem, sum = 0;
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = (rem * rem * rem) + sum;
        // printf("%d ", sum);
        n /= 10;
    }
    if (temp == sum)
    {
        printf("armg %d ", sum);
    }
    else
        printf(" not arg%d ", sum);
}