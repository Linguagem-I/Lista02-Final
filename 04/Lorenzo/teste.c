#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159
#define MAX(a,b) ((a) > (b) ? (a) : (b))

float area (float r){
	float a = PI * r * r;
	return a;
}

int main(){
	float x, y, c, v;
	y = 5;
	x = area(y);

	v = 4.5;
	c = MAX (v, 3.0);
	printf("Area: %.2f - MAX %.2f\n", x, c);
}