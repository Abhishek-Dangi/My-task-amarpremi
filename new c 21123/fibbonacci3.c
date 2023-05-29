#include <stdio.h>
#include <conio.h>

void main()
{
    int N, FT, ST, NT;
    FT = -1;
    ST = 1;
    NT = FT + ST;
    printf("Enter the limit");
    scanf("%d", &N);
    while (NT <= N)
    {

        printf("\n%d", NT);
        FT = ST;
        ST = NT;
        NT = FT + ST;
    }
}
