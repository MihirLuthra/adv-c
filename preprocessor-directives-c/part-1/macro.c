#include <stdio.h>

#define PI 3.14

#define AREA_OF_CIRCLE(r) (r * r * PI)

int main(int argc, char *argv[])
{
	double area_of_circle, radius;

	radius = 5;

	area_of_circle = AREA_OF_CIRCLE(radius);

	printf("Area of circle with radius %.2lf = %.2lf\n", radius, area_of_circle);

	return 0;
}
