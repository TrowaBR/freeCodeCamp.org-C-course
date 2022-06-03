#include <iostream>
#include <cstring>

void outStrlen() {
    // Size of a string
    const char msg1[] {"The sky is blue."};
    const char *msg2 {"The sky is blue."};
    std::cout << "std::strlen(msg1): " << std::strlen(msg1) << " | Size: " << sizeof(msg1) << std::endl; // Number of characters + null terminator
    std::cout << "std::strlen(msg2): " << std::strlen(msg2) << " | Size: " << sizeof(msg2) << std::endl; // Size of a pointer
}

void outStrcmp() {
    // Comparison of strings (-1 = is prior, 0 = is equal, 1 = is post)
    const char *data1 {"Alabama"};
    const char *data2 {"Blabama"};
    const char *data3 {"Alabamb"};
    size_t n {3};
    std::cout << "std::strcmp(\"" << data1 << "\",\"" << data2 << "\"): " << std::strcmp(data1,data1) << std::endl;
    std::cout << "std::strcmp(\"" << data1 << "\",\"" << data2 << "\"): " << std::strcmp(data1,data2) << std::endl;
    std::cout << "std::strcmp(\"" << data1 << "\",\"" << data3 << "\"): " << std::strcmp(data1,data3) << std::endl;
    std::cout << "std::strcmp(\"" << data2 << "\",\"" << data3 << "\"): " << std::strcmp(data2,data3) << std::endl;

    // strncmp: Validate just N characters
    std::cout << "std::strncmp(\"" << data1 << "\",\"" << data3 << "\"," << n << "): " << std::strncmp(data1,data3,n) << std::endl;
}

void outStrchr() {
    // First occurrence (as pointer)
    const char str[] {"Try not. Do or do not. There is no try."};
    char target {'T'};
    const char *p_start {str};
    const char *p_letter {str};
    int iterations {};

    std::cout << "Searching for '" << target << "' on message \"" << str << "\":" << std::endl;
    while ((p_letter = std::strchr(p_letter, target))) { // while "strchr" returned the pointer to the next letter
        std::cout << "Found at index: " << p_letter - p_start << std::endl;

        ++p_letter;
        ++iterations;
    }
    std::cout << iterations << " occurrences found." << std::endl;

    // strrchr: Last occurrence (as pointer)
    const char str2[] {"/home/user/hello.cpp"};
    char target2 {'/'};
    char *p_letter2 {std::strrchr(str2, target2)};

    if (p_letter2) {
        std::cout << p_letter2+1 << std::endl; // +1 to ignore "/"
    }
}

void outStrcat() {
    // Concatenation
    // WARN! Destination needs to have enough space
    char dest[50] {"Hello "};
    char src[50] {"World!"};

    std::strcat(dest, src);
    std::strcat(dest, " Goodbye World!");
    std::cout << "dest(strcat): " << dest << std::endl;

    // strncat: Limited concatenation
    std::strncat(dest, "1234567890", 5);
    std::cout << "dest(strncat): " << dest << std::endl;
}

void outStrcpy() {
    char src[50] {"C++ is a multipurpose programming language."};
    char *dest = new char[std::strlen(src)+1]; // +1 to add null terminator

    std::strcpy(dest,src);
    std::cout << "dest: " << dest << " (sizeof: " << sizeof(dest) << " | strlen: " << std::strlen(dest) << ")" << std::endl;

    char dest2[] {"Multipurpose"};
    std::strncpy(dest2,src,4);
    std::cout << "dest2: " << dest2 << " (sizeof: " << sizeof(dest2) << " | strlen: " << std::strlen(dest2) << ")" << std::endl;
}

int main() {
    //outStrlen();
    //outStrcmp();
    //outStrchr();
    //outStrcat();
    outStrcpy();

    return 0;
}