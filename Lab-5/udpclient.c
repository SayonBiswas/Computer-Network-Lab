#include <stdio.h>
#include <netinet/in.h>
#include <string.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <unistd.h>

/*
Name: Sayon Biswas
Sic: 24BCSE96, Roll No.: 26
*/

int main(int argc, char *argv[]){
	int sockfd;
	char buf[1024];
	struct sockaddr_in server;
	sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	if(sockfd < 0){
		perror("\nError in opening socket...");
		exit(1);
	}
	server.sin_family = AF_INET;
	server.sin_addr.s_addr = inet_addr(argv[1]);
	server.sin_port = htons(atoi(argv[2]));
	while(1){
		printf("Enter message: ");
		scanf(" %[^\n]", buf);
		sendto(sockfd, buf, sizeof(buf), 0, (struct sockaddr *)&server, sizeof(server));
		if(strcmp(buf, "bye") == 0)
			break;
	}
	close(sockfd);
	return 0;
}
