#include <iostream>
#include <iomanip>

void textFormatting() {
    // Line break
    std::cout << "Line" << std::endl;
    std::cout << "Break" << std::endl;

    // Line break
    std::cout << "Hello\n";
    std::cout << "World\n";
    std::cout << std::flush; // Forces output of cache
}

void tableFormatting() {
    // Spacing
    std::cout << std::setw(10) << "Package" << std::setw(10) << "Command" << std::setw(10) << "Sequence" << std::endl; // Set width

    std::cout << std::left; // Align to the left
    std::cout << std::setw(10) << "std"  << std::setw(10) << "left" << std::setw(5) << 1 << std::endl;

    std::cout << std::internal; // Internal align
    std::cout << std::setw(10) << "std"  << std::setw(10) << "internal" << std::setw(5) << 2 << std::endl;

    std::cout << std::showpos; // Show positive symbol
    std::cout << std::setw(10) << "std"  << std::setw(10) << "showpos" << std::setw(5) << 3 << std::endl;
    std::cout << std::noshowpos;

    std::cout << std::setfill('.'); // Change fill character
    std::cout << std::setw(10) << "std" << std::setw(10) << "setfill" << std::setw(5) << 4 << std::endl;
}

void numberFormatting() {
    int n1 {717171};

    std::cout << "n1 (dec): " << std::dec << n1 << std::endl; // Shows in decimal
    std::cout << "n1 (hex): " << std::hex << n1 << std::endl; // Shows in hexadecimal
    std::cout << "n1 (oct): " << std::oct << n1 << std::endl; // Shows in octal

    std::cout << std::showbase; // Show type of number formats
    std::cout << "n1 (showbase-dec): " << std::dec << n1 << std::endl; // No change
    std::cout << "n1 (showbase-hex): " << std::hex << n1 << std::endl; // 0x
    std::cout << "n1 (showbase-oct): " << std::oct << n1 << std::endl; // 0

    std::cout << std::uppercase; // Show values in upper case
    std::cout << "n1 (upper-hex): " << std::hex << n1 << std::endl; // 0X
    std::cout << std::noshowbase;
    std::cout << std::dec;

    double a {3.1415926535897932384626433832795};
    double b {2006.0};
    double c {1.34e-10};

    std::cout << std::fixed; // Force a fixed format
    std::cout << "Fixed format:" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout.unsetf(std::ios::fixed); // Remove fixed

    std::cout << std::scientific; // Force scientific format
    std::cout << "Scientific format:" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout.unsetf(std::ios::scientific); // Remove scientific

    std::cout << std::showpoint; // Show decimal point
    std::cout << "b (showpoint): " << b << std::endl;
    std::cout << std::noshowpoint;
}

int main() {
    textFormatting();
    tableFormatting();
    numberFormatting();

    return 0;
}