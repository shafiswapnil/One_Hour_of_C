#include <stdio.h>

int main()
{
	// Variable and Data Types
	int jersey_number = 10;
	double gpa = 3.82;

	printf("My jersey number is %d\n", jersey_number);
	printf("My GPA is %lf\n", gpa);
	printf("My GPA is %.2lf\n", gpa);

	// Basic Arithmatic
	printf("My GPA is %.2lf\n", gpa - 1);

	double gpa1 = 3.98;
	double gpa2 = 2.99;
	double gpa3 = 3.65;
	double avg = (gpa1 + gpa2 + gpa3) / 3.0;
	// double avg = (gpa1 + gpa2 + gpa3) / 0.0;		// won't work

	printf("Average GPA among 3 students: %.2lf\n", avg);

	return 0;
}