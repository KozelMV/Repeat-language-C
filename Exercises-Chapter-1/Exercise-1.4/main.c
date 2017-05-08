#include <stdio.h>
#include <stdio.h>
/* печать таблицы температур по Фаренгейту и Цельсию для
fahr = 0, 20 ... 300; вариант с плавающей точкой */
main() {
float fahr, celsius;
int lower, upper, step;
lower = 0; /* нижняя граница таблицы температур */
upper = 300; /* верхняя граница */
step = 20; /* шаг */
fahr = lower;
printf("%s\n", "celsium | fahr");
printf("%s\n", "--------------");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf ("%6.1f %s %3.0f\n", celsius," | ",fahr);
		fahr = fahr + step;
	}
}