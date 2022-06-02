#include <iomanip>
#include <iostream>

void outIntTypes() {
    // Data types
    std::cout << "Decimal: "     << 15         << std::endl;
    std::cout << "Octal: "       << 017        << std::endl;
    std::cout << "Hexadecimal: " << 0x0f       << std::endl;
    std::cout << "Binary: "      << 0b00001111 << std::endl;
}

template <typename T>
constexpr auto type_name() {
  std::string_view name, prefix, suffix;
#ifdef __clang__
  name = __PRETTY_FUNCTION__;
  prefix = "auto type_name() [T = ";
  suffix = "]";
#elif defined(__GNUC__)
  name = __PRETTY_FUNCTION__;
  prefix = "constexpr auto type_name() [with T = ";
  suffix = "]";
#elif defined(_MSC_VER)
  name = __FUNCSIG__;
  prefix = "auto __cdecl type_name<";
  suffix = ">(void)";
#endif
  name.remove_prefix(prefix.size());
  name.remove_suffix(suffix.size());
  return name;
}

std::string varData(auto value) {
    std::stringstream ss;
    ss << sizeof(value) << " bytes | " << type_name<decltype(value)>();

    if (std::is_same_v<decltype(value), char>) {
        ss << " | ord " << static_cast<int>(value);
    }
    return ss.str();
}

void intInit() {
    int n1;     // No initialization
    int n2 {};  // Initialize with zero
    int n3 {5}; // Initialize with 5
    int n4 = 5; // Assign 5 after declaring, trunc data
    int n5 (5); // Function initialize with 5, trunc data

    std::cout << "n5: " << n5 << " (" << varData(n5) << ")" << std::endl;
}

void intModifiers() {

    // Signed (implicit) and unsigned
    unsigned int n1 = {10};
    signed   int n2 = {-300};

    std::cout << "n1: " << n1 << " (" << varData(n1) << ")" << std::endl;
    std::cout << "n2: " << n2 << " (" << varData(n2) << ")" << std::endl;

    // Short
    short unsigned int n3 = {10};
    short signed   int n4 = {-300};

    std::cout << "n3: " << n3 << " (" << varData(n3) << ")" << std::endl;
    std::cout << "n4: " << n4 << " (" << varData(n4) << ")" << std::endl;

    // Long
    long unsigned int n5 = {10};
    long signed   int n6 = {-300};

    std::cout << "n5: " << n5 << " (" << varData(n5) << ")" << std::endl;
    std::cout << "n6: " << n6 << " (" << varData(n6) << ")" << std::endl;

    // Long long
    long long unsigned int n7 = {10};
    long long signed   int n8 = {-300};

    std::cout << "n7: " << n7 << " (" << varData(n7) << ")" << std::endl;
    std::cout << "n8: " << n8 << " (" << varData(n8) << ")" << std::endl;
}

void outFloatTypes() {
    float       n1 {1.12345678901234567890f};
    double      n2 {1.12345678901234567890};
    long double n3 {1.12345678901234567890L};
    double      n4 {3.498e-11};

    std::cout << std::setprecision(20);
    std::cout << "n1: " << n1 << " (" << varData(n1) << ")" << std::endl;
    std::cout << "n2: " << n2 << " (" << varData(n2) << ")" << std::endl;
    std::cout << "n3: " << n3 << " (" << varData(n3) << ")" << std::endl;
    std::cout << "n4: " << n4 << " (" << varData(n4) << ")" << std::endl;
}

void outFloatDivision() {
    double n1 {5.6};
    double n2 {};

    // +Infinity
    double n3 {n1/n2};
    std::cout << n1 << " / " << n2 << " = " << n3 << " || " << n3 << " + " << n1 << " = " << n3+n1 << std::endl;

    // NaN
    double n4 {n2/n2};
    std::cout << n1 << " / " << n2 << " = " << n4 << " || " << n4 << " + " << n1 << " = " << n4+n1 << std::endl;
}

void outBool() {
    bool red_light {true};

    if (red_light == true) {
        std::cout << "Stop!" << std::endl;
    } else {
        std::cout << "Go!" << std::endl;
    }

    std::cout << std::boolalpha;
    std::cout << "red_light: " << red_light << " (" << varData(red_light) << ")" << std::endl;
    std::cout << std::noboolalpha;
}

void outChar() {
    char c1 {'a'};
    char c2 {65};

    std::cout << "c1: " << c1 << " (" << varData(c1) << ")" << std::endl;
    std::cout << "c2: " << c2 << " (" << varData(c2) << ")" << std::endl;
}

void outAuto() {
    auto v1 {12};
    auto v2 {13.0};
    auto v3 {14.0f};
    auto v4 {15.0L};
    auto v5 {'e'};

    // Int modifier suffixes
    auto v6 {123u};  // unsigned
    auto v7 {123ul}; // unsigned long
    auto v8 {123ll}; // long long

    std::cout << "v1: " << v1 << " (" << varData(v1) << ")" << std::endl;
    std::cout << "v2: " << v2 << " (" << varData(v2) << ")" << std::endl;
    std::cout << "v3: " << v3 << " (" << varData(v3) << ")" << std::endl;
    std::cout << "v4: " << v4 << " (" << varData(v4) << ")" << std::endl;
    std::cout << "v5: " << v5 << " (" << varData(v5) << ")" << std::endl;
    std::cout << "v6: " << v6 << " (" << varData(v6) << ")" << std::endl;
    std::cout << "v7: " << v7 << " (" << varData(v7) << ")" << std::endl;
    std::cout << "v8: " << v8 << " (" << varData(v8) << ")" << std::endl;
}

int main() {
    outIntTypes();
    intInit();
    intModifiers();
    outFloatTypes();
    outFloatDivision();
    outBool();
    outChar();
    outAuto();

    return 0;
}