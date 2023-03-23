#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char name[20];
	printf("Long ago in a distant land...\n"
		"Haku, the shapeshifting master of appsec, unleashed an UNHACKABLE binary.\n"
		"But a foolish samurai warrior, wielding a magic terminal, stepped forth to oppose him.\n"
		"Their name was...\n"
		"...er, what was it again? ");

	scanf("%s", &name);

	printf("\nI knew that %s, Anyway... With their weapon in hand,"
	       "\nthe samurai sprung forth, and with a wide swing of their sword...\n", name);
	return 0;
}
