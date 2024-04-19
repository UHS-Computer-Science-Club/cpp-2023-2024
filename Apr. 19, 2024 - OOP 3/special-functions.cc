#include <iostream>
class MessagePrinter {
public:
    MessagePrinter() {
        std::cout << "Creating MessagePrinter\n";
    }

    ~MessagePrinter() {
        std::cout << "Deleting MessagePrinter\n";
    }

    MessagePrinter(const MessagePrinter& rhs) {
        std::cout << "Copying MessagePrinter...\n";
    }

    MessagePrinter& operator=(const MessagePrinter& rhs) {
        std::cout << "Assigning MessagePrinter...\n";
    }

    void print_message() {
        std::cout << "Printing a message...\n";
    }
};

int main() {
    MessagePrinter msg_printer {};
    msg_printer.print_message();
}