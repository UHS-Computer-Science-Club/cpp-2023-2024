#include <iostream>
class MessagePrinter {
public:
    MessagePrinter() {
        std::cout << "Creating MessagePrinter\n";
    }

    ~MessagePrinter() {
        std::cout << "Deleting MessagePrinter\n";
    }

    void print_message() {
        std::cout << "a message\n";
    }

    void print_message(int a) {
        std::cout << "a message: " << a << '\n';
    }
};

int main() {
    MessagePrinter msg_printer {};
    msg_printer.print_message();
}