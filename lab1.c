#include <conio.h>
#include <stdio.h>
#include <math.h>

int main() {
	double x, s1, s2, s3, s4, y;
	printf("vvedite X:");
	scanf_s("%lf", &x); // Ввод Х
	s1 = fabs(3 * x);
	s2 = sin(s1);
	s3 = 2 * x + s2;
	s4 = s3 / 3.56;
	y = sqrt(s4);

	printf("iskomoe = %lf", y); // Вывод Х
	
	return 0;
}


