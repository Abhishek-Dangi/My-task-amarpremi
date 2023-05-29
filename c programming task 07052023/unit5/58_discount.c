
void main()
{
    int price, price2, dis;
    float temp = 0, temp2 = 0;
    printf("enter the price of mill colath and handloom items");
    scanf("%d %d", &price, &price2);
    if (price <= 100)
    {
        price = price - 0;
    }
    if (price >= 101 && price <= 200)
    {
        // dis = 5 % ;
        temp = (price * 5) / 100;
        price = price - temp;
        // printf("price %d", price);
    }
    if (price >= 201 && price <= 300)
    {
        temp = (price * 7.5) / 100;
        price = price - temp;
        // printf("price %d", price);
    }
    if (price >= 300)
    {
        temp = (price * 10.0) / 100;
        price = price - temp;
        // printf("price %d", price);
    }
    if (price2 <= 100)
    {
        temp2 = (price2 * 5) / 100;
        price2 = price2 - temp2;
    }
    if (price2 >= 101 && price2 <= 200)
    {
        // dis = 5 % ;
        temp2 = (price2 * 7.5) / 100;
        price2 = price2 - temp2;
        // printf("price %d", price);
    }
    if (price2 >= 201 && price2 <= 300)
    {
        temp2 = (price2 * 10.0) / 100;
        price2 = price2 - temp2;
        // printf("price %d", price);
    }
    if (price2 >= 300)
    {
        temp2 = (price2 * 15.0) / 100;
        price2 = price2 - temp2;
        // printf("price %d", price);
    }
    printf("mill cloth net price %d\n", price);
    printf("Handloom item net price %d\n", price2);
}
