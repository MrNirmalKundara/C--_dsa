#include <iostream>
#include <cstring>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    // 1. Socket Create
    int server_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (server_fd == -1) {
        std::cerr << "Socket Creation Failed!\n";
        return 1;
    }

    // IP aur Port Configuration
    sockaddr_in address{};
    address.sin_family = AF_INET;         // IPv4
    address.sin_addr.s_addr = INADDR_ANY; // Any Local IP
    address.sin_port = htons(8080);       // Port 8080

    // 2. Bind Socket
    if (bind(server_fd, (struct sockaddr*)&address, sizeof(address)) < 0) {
        std::cerr << "Bind Failed!\n";
        return 1;
    }

    // 3. Listen (Queue Limit = 3)
    if (listen(server_fd, 3) < 0) {
        std::cerr << "Listen Failed!\n";
        return 1;
    }
    std::cout << "Server Port 8080 par listen kar raha hai...\n";

    // 4. Accept Connection
    int new_socket = accept(server_fd, nullptr, nullptr);
    if (new_socket < 0) {
        std::cerr << "Accept Failed!\n";
        return 1;
    }
    std::cout << "Client Connect Ho Gaya!\n";

    // 5. Client se Data Read Karein
    char buffer[1024] = {0};
    read(new_socket, buffer, 1024);
    std::cout << "Client Message: " << buffer << "\n";

    // 6. Client ko Response Bhejein
    const char* message = "Hello Client, Message Receive Ho Gaya!";
    send(new_socket, message, strlen(message), 0);

    // 7. Sockets Close Karein
    close(new_socket);
    close(server_fd);

    return 0;
}