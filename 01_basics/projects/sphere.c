#include <stdio.h>
#define PI (22.0f / 7.0f)
int main(){

float volume, radius;

printf("Enter the radius of the sphere: ");
scanf("%f", &radius);

volume = (4 / 3) * PI * radius * radius * radius;
printf("Volume of a sphere is : %.0f", volume);

    return 0;
}