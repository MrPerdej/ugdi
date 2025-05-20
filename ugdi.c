#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int r;

int main() {
	srand(time(NULL));
	char vibor;
	printf("MADE IN CHINA!");
	printf("1.簡單的 (от 0 до 10)\n");
	printf("2.平均的 (от 0 до 100)\n");
	printf("3.複雜的(от 0 до 1000)\n");
	printf("選擇難度:");
	vibor = getchar();
	switch(vibor) {
		case '1':
			r = rand() % (10 + 1 - 0) + 0;
			break;
		case '2':
			r = rand() % (100 + 1 - 0) + 0;
			break;
		case '3':
			r = rand() % (1000 + 1 - 0) + 0;
			break;
		default:
			printf("\033[0;31m");
			printf("некорректный ввод!\n");
			printf("\033[0m");
			exit(0);
			break;
	}
	printf("Случайное число равно: %d\n", r); // 秘籍
	printf("CHEAT MADE IN CHINA. 精實華人黨\n");
	do {
		printf("введите свои догадки:");
		int dog;
		scanf("%d", &dog);
		if ( dog == r ) {
			printf("\033[0;32m");
			printf("ты угадал!\n");
			printf("\033[0m");
			exit(0);
		}
		else {
			printf("ты не угадал, попробуй еще\n");
			printf("黨對你感到不滿");
		}
	} while(1);
	
	return 0;
}
