/* Perimeter Calculation
Fall 2018
Mikita Popel */
#include <stdio.h>
#include <math.h>

// This program calculates the perimeter of a fence when given the locations of the coordinates
int main(void) {
	float x1, x2, x3, x4, y1, y2, y3, y4, perimPaddock;
	printf("Proj. #2 - Mikita Popel\n");
	printf("Enter 2 values representing (x,y) coordinates for each point.\npoint #1: ");
	scanf("%f%f", &x1, &y1);
	printf("  [point #1 is (%.3f, %.3f)]", x1, y1);
	printf("\npoint #2: ");
	scanf("%f%f", &x2, &y2);
	printf("  [point #2 is (%.3f, %.3f)]", x2, y2);
	printf("\npoint #3: ");
	scanf("%f%f", &x3, &y3);
	printf("  [point #3 is (%.3f, %.3f)]", x3, y3);
	printf("\npoint #4: ");
	scanf("%f%f", &x4, &y4);
	printf("  [point #4 is (%.3f, %.3f)]", x4, y4);
	perimPaddock = sqrt(pow((x1-x2),2)+pow((y1-y2),2))+sqrt(pow((x2-x3),2)+pow((y2-y3),2))+sqrt(pow((x3-x4),2)+pow((y3-y4),2))+sqrt(pow((x4-x1),2)+pow((y4-y1),2));
	printf("\nperimeter of paddock = %.2f", perimPaddock);
	return 0;
}
