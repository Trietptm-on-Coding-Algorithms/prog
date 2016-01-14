
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>


int main(int argc, char* argv[]) {
	int i;
	for (i =0;i< argc; i++) {
		printf("%s\n", argv[i]);
	}
	struct addrinfo hints;

	memset(&hints, 0, sizeof hints);
	hints.ai_family = AF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_flags = AI_PASSIVE;
		 
	struct addrinfo *servinfo;

	int status = getaddrinfo("www.google.com", "http", &hints, &servinfo);
	printf("status: %d\n", status);

	freeaddrinfo(servinfo);
	return 0;
}

void testHton() {
	printf("aha");
}
