

void main()
{
    int x = 0;
    char T;
    printf("enter the x and condition S C T");
    scanf("%d %c", &x, &T);
    // printf("enter the condition: S C T");
    // scanf("%c", &T);
    float s;
    // s = sin(x);
    // printf("%f ", s);
    // printf("%c", T);

    switch (T)
    {
    case 'S':
    {
        s = sin(x);
        printf("sin %f ", s);
        break;
    }
    case 'C':
    {
        s = cos(x);
        printf("cos %f ", s);
        break;
    }
    case 'T':
    {
        s = tan(x);
        printf("tan %f ", s);
        break;
    }

    default:
        printf("enter valid input");
        break;
    }
}