#define _POSIX_C_SOURCE 201112L
#include <sys/types.h>

#include <sys/socket.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>

void showIp() {

	struct addrinfo hints;
        struct addrinfo	*res;
        struct addrinfo *p;
	int status;
	char ipstr[INET6_ADDRSTRLEN];
	char *address = "google.com";



	memset(&hints, 0, sizeof hints);
	hints.ai_family = AF_UNSPEC; //AF_INETor AF_INET6 to force version
	hints.ai_socktype = SOCK_STREAM;

	if ( (status = getaddrinfo(address, NULL, &hints, &res)) != 0) {
		fprintf(stderr, "getaddrinfo: %s\n", gai_strerror(status));
		return;
	}

	printf("Ip addresses for %s:\n\n", address);

	for(p = res; p != NULL; p = p->ai_next) {
		void *addr;
		char *ipver;

		if(p->ai_family == AF_INET) {
			//IPv4
			struct sockaddr_in *ipv4 = (struct sockaddr_in *)p->ai_addr;
			addr = &(ipv4->sin_addr);
			ipver = "IPv6";
		} else if (p->ai_family == AF_INET6) {
			struct sockaddr_in6 * ipv6 = (struct sockaddr_in6 *)p->ai_addr;
			addr = &(ipv6->sin6_addr);
			ipver = "IPv6";
		} else {
			printf("Error");
		}

		inet_ntop(p->ai_family, addr, ipstr, sizeof ipstr);
		printf("  %s: %s\n", ipver, ipstr);
	}

	freeaddrinfo(res); // free the linked list

}
	






