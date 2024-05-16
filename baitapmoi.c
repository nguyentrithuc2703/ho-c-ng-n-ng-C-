#include<stdio.h>
#include<conio.h>
#include<math.h>

#define pi 3.1416;

int main() {
    float r, cv, dt;
    
    printf("Nhap ban kinh r: ");
    scanf("%f", &r);

    cv = 2 * pi * r;
    dt = pi * r * r;

    printf("Chu vi cua hinh tron la: %f", cv);
    printf("\nDien tich cua hinh tron la: %f", dt);

    return 0;
}
