#include <stdio.h>
#include <math.h>
//include pi 
#define PI 3.14159

double calculateDistance();
double calculatePerimeter();
double calculateLength();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

int main(int argc, char **argv)
{
    //call multiple functions
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}

//function to calculate distance
double calculateDistance()
{
    double x1, y1, x2, y2, distance;

    printf("Enter the x-coordinate of point 1: ");
    x1 = askForUserInput();

    printf("Enter the y-coordinate of point 1: ");
    y1 = askForUserInput();

    printf("Enter the x-coordinate of point 2: ");
    x2 = askForUserInput();

    printf("Enter the y-coordinate of point 2: ");
    y2 = askForUserInput();

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    //output coordinates and distance
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}

//function to calculate perimeter given width and height
double calculatePerimeter()
{
    double x1, y1, x2, y2, width, height, perimeter;
    
    printf("\nEnter the x-coordinate of point 1: ");
    x1 = askForUserInput();
    
    printf("Enter the y-coordinate of point 1: ");
    y1 = askForUserInput();
    
    printf("Enter the x-coordinate of point 2: ");
    x2 = askForUserInput();
    
    printf("Enter the y-coordinate of point 2: ");
    y2 = askForUserInput();
    
    width = calculateLength(x2,x1);
    height = calculateLength(y2,y1);
    
    perimeter = 2 * (width + height);

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

    return 2.0;
}

double calculateArea()
{
    double x1, x2, y1, y2, width, height, area;
    
    printf("\nEnter the x-coordinate of point 1: ");
    x1 = askForUserInput();
    
    printf("Enter the y-coordinate of point 1: ");
    y1 = askForUserInput();
    
    printf("Enter the x-coordinate of point 2: ");
    x2 = askForUserInput();
    
    printf("Enter the y-coordinate of point 2: ");
    y2 = askForUserInput();
    
    width = calculateLength(x2,x1);
    height = calculateLength(y2,y1);
    
    area = (width*height);
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The area of the city encompassed by your request is %.2f\n", area);

    return 2.0;
}

double calculateWidth()
{
    double x1, x2, y1, y2, width;
    
    printf("\nEnter the x-coordinate of point 1: ");
    x1 = askForUserInput();

    printf("Enter the y-coordinate of point 1: ");
    y1 = askForUserInput();

    printf("Enter the x-coordinate of point 2: ");
    x2 = askForUserInput();

    printf("Enter the y-coordinate of point 2: ");
    y2 = askForUserInput();

    width = fabs(x2 - x1);

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The width of the city encompassed by your request is %.2f\n", width);

    return 2.0;
}

//function to calculate length 
double calculateLength(double a, double b)
{
    double calculateLength = fabs(a - b);

    return calculateLength;
}

double calculateHeight()
{
    double x1, x2, y1, y2, height;
    
    printf("\nEnter the x-coordinate of point 1: ");
    x1 = askForUserInput();

    printf("Enter the y-coordinate of point 1: ");
    y1 = askForUserInput();

    printf("Enter the x-coordinate of point 2: ");
    x2 = askForUserInput();

    printf("Enter the y-coordinate of point 2: ");
    y2 = askForUserInput();
    //calculate height
    height = fabs(y2 - y1);

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);

    return 2.0;
}

//function to ask user for imput and return
double askForUserInput()
{
    double value;
    scanf("%lf", &value);
    return value;
}


