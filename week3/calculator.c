#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2, n3;
	char c;
	printf("Input number: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("Input operator: ");
	scanf(" %c", &c);

	switch (c) {
	case '*':
		printf("%d * %d * %d = %d\n", n1, n2, n3, n1 * n2 * n3);
		break;
	case '+':
		printf("%d + %d + %d = %d\n", n1, n2, n3, n1 + n2 + n3);
		break;
	case '-':
		printf("%d - %d - %d = %d\n", n1, n2, n3, n1 - n2 - n3);
		break;
	case '/':
		printf("%d / %d / %d = %d\n", n1, n2, n3, n1 / n2 / n3);
	}

	return 0;
}
