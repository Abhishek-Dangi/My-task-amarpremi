

void main()
{
    int ar[10] = {12, 3, 4, 2, 3, 23, 23, 12, 3, 4};
    char ch[10] = {'a',
                   'b',
                   'h',
                   'i',
                   's',
                   'h',
                   'e',
                   'k'};
    int i, j, count = 0;

    for (i = 0; i < 10; i++)
    {
        if (ar[i] == 0)
        {
            count++;
        }
        printf("%d \t", ar[i]);
    }
    printf("\n");
    for (i = 0; i < 8; i++)
    {

        printf("%c", ch[i]);
    }
    printf("\narray counter : %d times", count);
}