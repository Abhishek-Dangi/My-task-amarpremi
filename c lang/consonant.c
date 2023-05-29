

void main()
{
    char ch;
    // int ch;
    printf("Enter the Character\n");
    scanf("%c", &ch);
    printf("value of input is %c \n", ch);

    if (ch == "A" || ch == "E" || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("char is Vowel");
    }
    else
    {
        printf("char is consonant");
    }
}