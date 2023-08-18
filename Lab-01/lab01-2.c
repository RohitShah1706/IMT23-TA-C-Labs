#include<stdio.h>
#include<math.h>

int main() {
    int x;
    scanf("%d", &x);

    // print the volume of a cube with side units
    printf("Volume of a cube: %d\n", x * x * x);

    // print the volume of a right circular cone with height x units and base radius x units
    printf("Volume of a right circular cone: %f\n", (M_PI * x * x * x) / 3);

    // print the volume of a sphere with radius x units
    printf("Volume of a sphere: %f\n", (4 * M_PI * x * x * x) / 3);

    return 0;
}