#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);

	int discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        // Two real roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two real roots:\n");
		// %lf is used for double datatype
        printf("Root 1: %lf\n", root1);
        printf("Root 2: %lf\n", root2);
    } else if (discriminant == 0) {
        // One real root
        double root = -b / (2 * a);
        printf("One real root:\n");
        printf("Root: %lf\n", root);
    } else {
        // No real roots
        printf("No real roots exist.\n");
    }
	return 0;
}
