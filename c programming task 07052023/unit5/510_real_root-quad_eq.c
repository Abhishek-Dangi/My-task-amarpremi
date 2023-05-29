

void main()
{
    int x1, x2, a, b, c, root_value = 0;
    float root = 0;
    a = 10;
    b = 20;
    c = 30;

    root_value = (b * b) - +(4 * (a * c));
    root = sqrt(root_value);
    x1 = -b + (root / 2 * a);
    printf("%d ", root_value);
    printf("%f ", root);
    printf("%d ", x1);
}

// not working
// page 150 question 5.10