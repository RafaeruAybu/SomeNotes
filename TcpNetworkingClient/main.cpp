#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>
#include <string>

int main()
{
    std::cout << "Hello world!" << std::endl;

    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock == -1)
    {
        return 1;
    }

    int port = 54000;
    std::string ipAddress = "127.0.0.1";
    sockaddr_in hint;
    hint.sin_family = AF_INET;
    hint.sin_port = htons(port);
    inet_pton(AF_INET, ipAddress.c_str(), &hint.sin_addr);
    
    int connectRes = connect(sock, (sockaddr*)&hint, sizeof(hint));
    if(connectRes == -1)
    {
        return 1;
    }
    
    char buf[4096];
    std::string userInput;
    
    do {
        std::cout << "> ";
        getline(std::cin, userInput);

        int sendRes = send(sock, userInput.c_str(), userInput.size() + 1, 0);

        memset(buf, 0, 4096);
        int bytesReceived = recv(sock, buf, 4096, 0);

        std::cout << "SERVER> " << std::string(buf, bytesReceived) << "\r\n";
    } while(true);
    
    close(sock);

    return 0;
}