#include <stdio.h>
#include <stdlib.h>

struct socket{
	char socket_id[100];
	char socket_type[100];
	char host_id[100];
	char dest_id[100];
	int port_no;
	char status;
};

void set_socket(struct socket *s){
	printf("Enter the socket id: ");
	scanf("%[^\n]%*c", s->socket_id);
	printf("\nEnter the socket type: ");
	scanf("%[^\n]%*c", s->socket_type);
	printf("\nEnter the host id: ");
	scanf("%[^\n]%*c", s->host_id);
	printf("\nEnter the destination id: ");
	scanf("%[^\n]%*c", s->dest_id);
	printf("\nEnter the port number: ");
	scanf("%d", &s->port_no);
	printf("\nEnter the status: ");
	scanf(" %c", &s->status);
}

void get_socket(struct socket s){
	printf("\n\nSocket details are:");
	printf("\nSocket id: %s", s.socket_id);
	printf("\nSocket type: %s", s.socket_type);
	printf("\nHost Id: %s", s.host_id);
	printf("\nDestination Id: %s", s.dest_id);
	printf("\nPort Number: %d", s.port_no);
	printf("\nStatus: %c\n", s.status);
}

int main(){
	struct socket s;
	set_socket(&s);
	get_socket(s);
}
