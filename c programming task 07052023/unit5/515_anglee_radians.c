

void main()
{
    double x = 0;
    char T;
    printf("enter the x and condition S C T");
    scanf("%ld %c", &x, &T);
    // printf("enter the condition: S C T");
    // scanf("%c", &T);
    float s;
    // s = sin(x);
    // printf("%f ", s);
    // printf("%c", T);
    if (T == 'S')
    {
        s = sin(x);
        printf("%f ", s);
    }
    if (T == 'C')
    {
        s = cos(x);
        printf("%f ", s);
    }
    if (T == 'T')
    {
        s = tan(x);
        printf("%f ", s);
    }
    // else
    //     printf("please valid condition");
}