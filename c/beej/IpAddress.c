#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>

struct addrinfo* getAddrinfoForUrl(char* url);

void printOutIpAddresses(struct addrinfo* ipInfo);

void printIpAddress(char* url) {
	if (url == NULL) {
		printf("Cannot search for IP on null string");
	}

	struct addrinfo addressInfo* = getAddrinfoForUrl(url);

	if (addressInfo == NULL) {
		printf("Error while finding ip");
		return;
	}



	printf("IP addresses for %s: \n\n", argv[1]);

	printOutIpAddress(addressInfo);



	freeaddrinfo(res);

	return 0;
}

struct addrinfo* getAddrinfoForUrl(char* url) {
	struct addrinfo hints, *res, *p;

	//Zero out to prevent funny stuff
	memset(&hints, 0, sizeof hints);

	//Setup hints
	hints.ai_family = AF_UNSPEC; //AF_INET, AF_INET6, AF_UNSPEC {Select ip address types}
	hints.ai_socktype = SOCK_STREAM;

	if ((status = getaddrinfo(argv[1], NULL, &hints, &res)) != 0) {
		fprintf(stderr, "getaddrinfo: %s\n", gai_strerror(status));
		return NULL;
	}
}





void printOutIpAddresses(struct addrinfo* ipInfo) {
	struct addrinfo *res, *p;


	for(p = res; p != NULL; p = p->ai_next) {
		void *addr;
		char *ipver;

		//Check for ip address family
		if (p->ai_family == AF_INET) {
			struct sockaddr_in *ipv4 = (struct sockaddr_in *) p->ai_addr;
			addr = &(ipv4->sin_addr);
			ipver = "IPv4";
		} else {
			struct sockaddr_in6 *ipv6 = (struct sockaddr_in6*)p->ai_addr;
			addr = &(ipv6->sin6_addr);
			ipver = "IPv6";
		}

		inet_ntop(p->ai_family, addr, ipstr, sizeof ipstr);
		printf(" %s: %s\n", ipver, ipstr);
	}
}
