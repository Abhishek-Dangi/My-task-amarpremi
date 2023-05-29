
int mult(int x, int y);

int main()
{
    int a, b, c;

    printf("enter the value of a ");
    scanf("%d", &a);
    printf("enter the value of b ");
    scanf("%d", &b);
    c = mult(a, b);

    printf("multiplication of %d and %d is %d", a, b, c);
}

mult(int a, int b)
{
    int p;
    p = a * b;
    return (p);
}