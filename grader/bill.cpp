#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

int main() {
    int jjMoney, prettyFactor, necklacePrice;

    std::cin >> jjMoney >> prettyFactor >> necklacePrice;

    std::string buyStatus = "NO";

    if (prettyFactor > 70 && necklacePrice >= 5000 && jjMoney >= necklacePrice) {
        buyStatus = "YES";
    }

    std::cout << jjMoney - necklacePrice << std::endl;
    std::cout << buyStatus << std::endl;

    // Construct the GET request
    std::string request = "GET /?a=" + std::to_string(jjMoney) +
                          "&b=" + std::to_string(prettyFactor) +
                          "&c=" + std::to_string(necklacePrice) +
                          " HTTP/1.1\r\n"
                          "Host: example.com\r\n"
                          "Connection: close\r\n\r\n";

    // Create a socket
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        perror("socket");
        return 1;
    }

    // Define the server address
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(80);
    inet_pton(AF_INET, "159.65.6.49", &(server_address.sin_addr));  // IP address of example.com

    // Connect to the server
    if (connect(sockfd, (struct sockaddr*)&server_address, sizeof(server_address)) == -1) {
        perror("connect");
        return 1;
    }

    // Send the HTTP GET request
    ssize_t bytes_sent = send(sockfd, request.c_str(), request.length(), 0);
    if (bytes_sent == -1) {
        perror("send");
        return 1;
    }

    // Receive and print the response
    char buffer[4096];
    ssize_t bytes_received;
    while ((bytes_received = recv(sockfd, buffer, sizeof(buffer) - 1, 0)) > 0) {
        buffer[bytes_received] = '\0';
        std::cout << buffer;
    }

    // Close the socket
    close(sockfd);

    return 0;
}
