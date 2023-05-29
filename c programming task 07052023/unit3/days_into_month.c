

void main()
{
    int days, months;
    printf("enter the days:");
    scanf("%d", &days);
    months = days / 30;
    days = days % 30;
    printf("months =: %d and days = %d", months, days);
}