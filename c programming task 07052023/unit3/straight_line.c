

void main()
{
    int purchase, salvage, years, depre;

    printf("enter the purchase salvage and year");
    scanf("%d %d %d", &purchase, &salvage, &years);

    depre = (purchase - salvage) / years;
    printf("depreciation : %d", depre);
}