#include <stdio.h>
#include <string.h>

int main(void) {

	int i;
	const int diff = 'a' - 'A';
	char str[100];
	printf("input >");
	fgets(str, sizeof(str), stdin);

	for (i = 0; i < strlen(str); i++) {

		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + diff;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - diff;

	}
	printf("output >");
	puts(str);

}