#include <iostream>
#include <cctype>

void charManipulation() {
    std::cout << std::boolalpha;
    std::cout << "std::isalnum('C'): " << std::isalnum('C') << " (" << ((std::isalnum('C')) ? true : false) << ")" << std::endl;
    std::cout << "std::isalnum('^'): " << std::isalnum('^') << " (" << ((std::isalnum('^')) ? true : false) << ")" << std::endl;
    std::cout << "std::isalnum('7'): " << std::isalnum('7') << " (" << ((std::isalnum('7')) ? true : false) << ")" << std::endl;

    char message[] {"Mr Hamilton owns 221 cows. Thats a lot of cows! The kid exclamed."};
    int blank_count{};
    int digit_count{};
    for (char letter : message) {
        if (std::isblank(letter))
            ++blank_count;

        if (std::isdigit(letter))
            ++digit_count;
    }
    std::cout << "message: " << message << " (" << digit_count << " digits | " << blank_count << " blank characters)" << std::endl;

    const int message_size {std::size(message)};
    char msg_upper[message_size]{};
    char msg_lower[message_size]{};

    for (size_t i{}; i < message_size; ++i) {
        msg_upper[i] = std::toupper(message[i]);
        msg_lower[i] = std::tolower(message[i]);
    }
    std::cout << "msg_upper: " << msg_upper << std::endl;
    std::cout << "msg_lower: " << msg_lower << std::endl;
}

int main() {
    charManipulation();

    return 0;
}