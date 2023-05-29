
#define clomax 10
#define rowmax 12
void main()
{
    int row, column, y;
    row = 1;
    printf("multication\n");

    do
    {
        column = 1;
        do
        {
            y = row * column;
            printf("%4d", y);
            column++;
        } while (column <= clomax);

        row++;
        printf("\n");

    } while (row <= rowmax);
}