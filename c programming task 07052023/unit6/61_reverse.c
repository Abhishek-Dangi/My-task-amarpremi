

int main()
{
    int num = 1234, rev = 0, rem = 0, sum, temp;
    // printf("enter the number");
    // scanf("%d", &num);

    while (num > 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }
    printf("%d", rev);
}