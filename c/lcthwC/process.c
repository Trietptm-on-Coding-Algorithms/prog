
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
	FILE* f = fopen("/dev/null", "w");
	if (f == 0) {
		printf("Error opening devnull");
		return 1;
	}


	fprintf(f, "%d %p", argc, argv);

	pid_t p = getpid();
	pid_t pp = getppid();


	printf("Parent: %d \nChild: %d\n", p, pp);


	return 0;

	
}
