

void main()
{
    int year = 1997;

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("%d year is leap year", year);
    }
    else
        printf("%d year is not leap year", year);
}