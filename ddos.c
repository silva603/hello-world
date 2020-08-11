#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>

int main(void){

  int ownsocket;
  int conn;
  
  struct sockaddr_in target;
  
  while(1){
      ownsocket = socket(AF_INET,SOCK_STREAM,0);
      target.sin_family = AF_INET;
      target.sin_port = htons(80);
      target.sin_addr.s_addr = inet_addr("192.168.0.1");
  
      conn = connect(meusocket, (struct sockaddr *)&alvo, sizeof alvo);
  }
  
}
