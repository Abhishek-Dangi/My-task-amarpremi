

void main()
{
    int h, w, counter = 0;
    printf("enter the height and weight for 10 boys\n");

    for (int i = 0; i <= 3; i++)
    {
        printf("enter height and weight");
        scanf("%d %d", &w, &h);
        if (w < 50 && h > 170)
            counter = counter + 1;
    }
    printf("number of boys with weight <50\n");
    printf("and height >170 %d\n", counter);
}