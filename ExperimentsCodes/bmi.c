
#include <stdio.h>

int main() {
    float w,h,bmi;
    printf("Enter weight and height: ");
    scanf("%f %f", &w, &h);
    bmi = w/(h*h);
    printf("BMI = %.2f\n", bmi);
    return 0;
}
// By Vedans rawat
