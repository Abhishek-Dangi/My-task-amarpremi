

void main()
{
    int unit, first = 0, temp = 0, chargParse = 0, temp1 = 0;
    char name[20];
    char contact[13];
    float charges;

    printf("enter user consume Name:");
    scanf("%s", &name);
    printf("enter user consume Contact Num:");
    scanf("%s", &contact);
    printf("enter the units user consume:");
    scanf("%d", &unit);
    printf("you are first, enter 0 or 1 ");
    scanf("%d", &first);

    if (unit >= 200 && first == 1 && unit <= 300)
    {
        charges = unit * 0.80;
        // printf("%f", charges);
    }
    if (unit >= 200 && unit <= 300)
    {
        charges = unit * 0.80;
        // printf("%f", charges);
    }
    if (unit >= 100 && unit <= 200)
    {
        charges = unit * 0.90;
        // printf("%f", charges);
    }
    if (unit >= 300)
    {
        charges = unit * 0.80;
        // printf("%f", charges);
    }
    chargParse = charges;
    if (chargParse >= 400)
    {
        temp = chargParse * 15 / 100;
        temp1 = temp + chargParse;
        // printf("%d", temp);
    }
    printf(" name       \t\t%s\n", name);
    printf("contact no.\t\t%s\n", contact);
    printf("charges    \t\t%f\n", charges);
    printf("with 15percent charges    %d", temp1);
    // printf("%s", name);
}