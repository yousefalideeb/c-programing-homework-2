#include <stdio.h>

int main()
{
int length,width;	
printf("Enter the length of the rectangle: ");
scanf("%d", &length);
printf("Enter the width of the rectangle: ");
scanf("%d", &width);

int area = length * width;
int perimeter = 2 * (length + width);

printf("The area of the rectangle is: %d\n", area);
printf("The perimeter of the rectangle is: %d\n", perimeter);

return 0;
}


