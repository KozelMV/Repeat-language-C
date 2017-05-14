#include <stdio.h>
/* печать таблицы температур по Фаренгейту и Цельсию для
fahr = 0, 20 ... 300; вариант с плавающей точкой */
main() {
	void convTemp(int ,int, int);
	
int lower, upper, step;
lower = 0; /* нижняя граница таблицы температур */
upper = 300; /* верхняя граница */
step = 20; /* шаг */

	convTemp(lower, upper, step);
}

void convTemp(int lower,int upper, int step) {
	float celsius, fahr;
	fahr = lower;
	printf("%s\n", "fahr | celsium");
	printf("%s\n", "--------------");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf ("%3.0f %s %6.1f\n", fahr," | ",celsius);
		fahr = fahr + step;
	}
}