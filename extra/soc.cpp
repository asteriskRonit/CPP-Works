#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<string.h>
#define port 8080
int main()
{
    int ser,new_soc,valread;
    struct sockaddr_in address;
    int opt=1;
    int addrlen=sizeof(address);
    char buffer[1024]={0};
    char *hello="hello from server";
    if((ser==socket(AF_INET,SOCK_STREAM,0))==0)
    {
        perror("socket failed");
        exit(EXIT_FAILURE);
    }
    if(setsockopt(ser,SOL_SOCKET,SO_REUSEADDR|SO_REUSEPORT,&opt,sizeof(opt)))
    {
        perror("setsocketopt");
        exit(EXIT_FAILURE);
    }
    address.sin_family=AF_INET;
    address.sin_addr.s_addr=INADDR_ANY;
    address.sin_port=htons( PORT );
    if(bind(ser,(struct sockaddr *)))

}