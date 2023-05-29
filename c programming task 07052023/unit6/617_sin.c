

void main()
{
    int i;
    float x;
    for (i = 1; i <= 180; i++)
    {
        if (i % 15 == 0)
        {
            x = sin(i);
            printf("%f\n", x);
        }
    }
}