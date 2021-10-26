#include <stdio.h>

int main()
{
    int shape;
    float base, height, area, r, s, a, breadth, length, width, base1, base2, aup, bdown,D1,D2;
    printf("ENTER THE SHAPE FROM(1-10) TO FIND AREA :-\n,");
    printf("(1)-->For Triangle:\n");
    printf("(2)-->For circle:\n");
    printf("(3)-->For cylinder:\n");
    printf("(4)-->For Pentagon:\n");
    printf("(5)-->For Square:\n");
    printf("(6)-->For Prism:\n");
    printf("(7)-->For Rectangle:\n");
    printf("(8)-->For Trapezoid\n:");
    printf("(9)-->For Trapezium\n:");
    printf("(10)-->For Rhombus:\n");
    scanf("%d", &shape);
    switch (shape)
    {
    case 1:
        printf("Enter base and height of the Triangle:\n");
        scanf("%f%f", &base, &height);
        area = 0.5 * base * height;
        printf("The Area of Triangle is %f", area);
        printf("cm2");
        break;
    case 2:
        printf("Enter  Radius of the circle:\n");
        scanf("%f", &r);
        area = 3.14 * r * r;
        printf("The Area of Circle is %f", area);
        printf("cm2");
        break;
    case 3:
        printf("Enter  Radius and Height of cylinder:\n");
        scanf("%f%f", &r, &height);
        area = 2 * 3.14 * r * (r + height);
        printf("The Area of Cylinder is %f", area);
        printf("cm2");
        break;
    case 4:
        printf("Enter side(s) and apothem length(a) of the Pentagon:\n");
        scanf("%f%f", &s, &a);
        area = 2.5 * s * a;
        printf("The Area of pentagon is %f", area);
        printf("cm2");
        break;
    case 5:
        printf("Enter Edge length of Square(s):\n");
        scanf("%f", &s);
        area = s * s;
        printf("The Area of Square is %f", area);
        printf("cm2");
        break;
    case 6:
        printf("Enter length(l) & breadth(b) & height(h) of the Prism:\n");
        scanf("%f%f%f", &length, &breadth, &height);
        area = 2 * length * breadth + 2 * length + breadth * height;
        printf("The Area of Prism is %f", area);
        printf("cm2");
        break;

    case 7:
        printf("Enter length(l) and width(w) of the Rectangle:\n");
        scanf("%f%f", &length, &width);
        area = length * width;
        printf("The Area of Rectangle is %f", area);
        printf("cm2");
        break;

    case 8:
        printf("Enter height(h) & base1(b1) & base2(b2) of the Trapezoid:\n");
        scanf("%f%f%f", &height, &base1, &base2);
        area = height * (base1 + base2) / 2;
        printf("The Area of Trapezoid is %f", area);
        printf("cm2");
        break;

    case 9:
        printf("Enter height(h) & side(a)up & side(b)down of Trapezium:\n");
        scanf("%f%f%f", &height, &aup, &bdown);
        area = 0.5 * height * aup + bdown;
        printf("The Area of Trapezium is %f", area);
        printf("cm2");
        break;

    case 10:
        printf("Enter Diagonal1(D1) and Diagonal2(D2) of the Rhombus:\n");
        scanf("%f%f", &D1, &D2);
        area = 0.5*D1*D2;
        printf("The Area of Trapezium is %f", area);
        printf("cm2");
        break;

    default:
        printf("No shape exists of the number %d sorry!!\n", shape);
        break;
    }

    return 0;
}