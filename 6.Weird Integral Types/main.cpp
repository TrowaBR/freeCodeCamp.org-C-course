#include <iomanip>
#include <iostream>

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

int main() {
    short int n1 {10};
    short int n2 {20};
    char c1 {40};
    char c2 {50};

    auto r1 = n1 + n2;
    auto r2 = c1 + c2;

    std::cout << "n1: " << n1 << " (" << varData(n1) << ")" << std::endl;
    std::cout << "n2: " << n2 << " (" << varData(n2) << ")" << std::endl;
    std::cout << "c1: " << c1 << " (" << varData(c1) << ")" << std::endl;
    std::cout << "c2: " << c2 << " (" << varData(c2) << ")" << std::endl;
    std::cout << "r1: " << r1 << " (" << varData(r1) << ")" << std::endl;
    std::cout << "r2: " << r2 << " (" << varData(r2) << ")" << std::endl;

    return 0;
}