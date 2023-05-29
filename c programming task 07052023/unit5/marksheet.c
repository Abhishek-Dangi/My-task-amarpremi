
void main()
{
    int maths, phy, chem, tmark, math_phy;
    printf("enter the marks");
    scanf("%d %d %d", &maths, &phy, &chem);
    tmark = maths + phy + chem;
    math_phy = maths + phy;
    if (maths >= 60 && phy >= 50 && chem >= 40 && tmark >= 200 && math_phy >= 150)
    {
        printf("you are eligible for this course\n");
        printf("you have maximum marks in all three subject %d:\n", tmark);
        printf("you have maximum marks in maths and phy %d:\n", math_phy);
    }
}