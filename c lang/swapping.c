

void main()
{
    int a = 0, b = 0, c;

    printf("Enter the value of a ");
    scanf("%d", &a);
    printf("Enter the value of b");
    scanf("%d", &b);

    printf("before swapping\n");
    printf("value of a is %d\n", a);
    printf("value of b is %d\n", b);

    c = a;
    a = b;
    b = c;

    printf("After swapping\n");
    printf("value of a is %d\n", a);
    printf("value of b is %d\n", b);
}
