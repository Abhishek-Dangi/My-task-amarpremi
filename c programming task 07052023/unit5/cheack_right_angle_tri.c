

void main()
{
    int a, b, c;
    printf("enter the side a =");
    scanf("%d", &a);
    printf("enter the side b =");
    scanf("%d", &b);
    printf("enter the side a =");
    scanf("%d", &c);

    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        printf("these are the  side of right angle tringle ");
    else
        printf("Not right angle tringle ");
}

value of sides 5 12 13