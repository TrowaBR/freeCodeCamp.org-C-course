#include <iostream>
#include <string>

void outStringInit() {
    std::string str1;                                  // Empty string
    std::string str2 {"Earth. Where the sky is blue"}; // String literal
    std::string str3 {"Hello there", 5};               // Partial literal (for 5 characters)
    std::string str4 {str2, 7};                        // Partial string (from index 7)
    std::string str5 {str2, 7, 5};                     // Partial string (from index 7, for 5 characters)
    std::string str6 (10,'.');                         // Char replication

    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str2: " << str2 << std::endl;
    std::cout << "str3: " << str3 << std::endl;
    std::cout << "str4: " << str4 << std::endl;
    std::cout << "str5: " << str5 << std::endl;
    std::cout << "str6: " << str6 << std::endl;
}

int main() {
    outStringInit();

    return 0;
}