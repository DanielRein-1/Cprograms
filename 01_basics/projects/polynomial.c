#include <stdio.h>
int main(){
    int x = 0;
    printf("Enter value of x: ");
    scanf("%d", &x);

    //int num = 3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) - x*x + 7*(x) - 6;
    int num = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;
    printf("Display two: %d", num);

    return 0;
}