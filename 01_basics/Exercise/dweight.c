#include <stdio.h>
int main(){
int height = 8;
int length = 12;
int width = 10;

int volume = height * length * width;
//weight = (volume + 165) / 166;
//printf("Dimensional weight (pounds): %d\n", weight);

printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

    return 0;
}