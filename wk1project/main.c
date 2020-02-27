#include <stdio.h>

int main(){
    float x;
    float y;
    float z;
    printf("Enter a number: ");
    scanf("%f", &x);
    printf("Enter another number: ");
    scanf("%f", &y);
    z = (x*x*x)+3+(6*y);
    printf("z: %f\n", z);
    return 0;
}
