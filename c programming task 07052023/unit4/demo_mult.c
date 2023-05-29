
void main()
{
    int num, num1, rem, fd, sd, sum = 0, temp;
    printf("enter the two digt num\n");
    scanf("%d", &num);
    printf("enter the two digt num1\n");
    scanf("%d", &num1);
    temp = num;

    rem = num1 % 10;
    num1 /= 10;
    fd = temp * rem;
    sd = temp * num1;
    sum = fd + sd;

    printf("sum %d\n", sum);
}
