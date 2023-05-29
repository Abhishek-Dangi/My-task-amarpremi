
void main()
{
    int num, count = 0, temp = 0;
    printf("enter the value\n");
    for (int i = 100; i <= 200; i++)
    {
        // printf("give number:\n");
        // scanf("%d", &num);
        // if (num > 100 && num < 200)
        // {
        if (i % 7 == 0)
        {
            temp += i;
            // count = count + 1;

            // printf("%d", temp);
        }
        // }
    }
    printf("sum of divisible by 7=%d", temp);
}