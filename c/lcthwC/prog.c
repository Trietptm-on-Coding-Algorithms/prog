
#include <stdio.h>

int main(int argc, char *argv[]) {
	puts("HellowWorld.");

	int age = 10;
	int height = 72;
	int areas[] = {10,12,13,14,20};
	char name[] = "Zed";
	char full_name[] = { 'n', 'o', 't' };

	printf("Size of an int%ld\n", sizeof(int));
	printf("size of areas%ld\n", sizeof(areas) / sizeof(int));

	printf("Size of an char%ld\n", sizeof(char));
	printf("size of name %ld\n", sizeof(name) / sizeof(char));

	printf("Size of an full_name%ld\n", sizeof(int));
	printf("size of full_name%ld\n", sizeof(full_name) / sizeof(char));

	printf("%d", areas[88]);

	printf("I am %d years old.\n", age);
	printf("I am %d tall.\n",height);

	return 0;
}
