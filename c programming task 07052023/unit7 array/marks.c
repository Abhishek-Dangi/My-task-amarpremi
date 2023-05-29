

void main()
{
    int student[5], i;
    float sum = 0, total = 0;

    printf("enter the number:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &student[i]);
    }
    for (i = 0; i < 5; i++)
    {
        total = total + student[i];
    }
    printf("%1.2f ", total);
}