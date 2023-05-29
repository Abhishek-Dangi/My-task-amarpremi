void main()
{
    char name1[10], name2[10], name3[10];
    printf("Enter first name: ");
    scanf("%s", name1);
    printf("Enter second name: ");
    scanf("%s", name2);
    printf("Enter last name: ");
    scanf("%s", name3);
    // printf("\nYour name is %s\n", name1);
    printf("\nYour name is %s %1.1s.%s\n", name1, name2, name3);
    printf("Your name is %1.1s.%1.1s.%s\n", name1, name2, name3);
    printf("Your name is %s %1.1s.%1.1s.\n", name3, name1, name2);
}