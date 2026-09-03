#include <stdio.h>
int main(void){
    int length, width, area, perimeter;
    length = 10;
    width = 5;
    area = length * width;
    perimeter = 2*(length + width);
printf("Length: %d\n Widith: %d\n Area: %d\n Perimeter: %d\n", length, width, area, perimeter);
    return 0;
}