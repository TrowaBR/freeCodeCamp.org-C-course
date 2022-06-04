#include <iostream>
#include <string>

void max_str(const std::string &input1, const std::string &input2, std::string &output);
void max_int(const int input1, const int input2, int &output);
void max_double(const double input1, const double input2, double &output);

int main() {
    std::string str1 {"Alabama"};
    std::string str2 {"Bellevue"};
    std::string out_str;
    int out_int;
    double out_double;

    max_str(str1, str2, out_str);
    max_int(45, 23, out_int);
    max_double(45.8, 76.9, out_double);

    std::cout << "out_str: " << out_str << std::endl;
    std::cout << "out_int: " << out_int << std::endl;
    std::cout << "out_double: " << out_double << std::endl;

    return 0;
}

void max_str(const std::string &input1, const std::string &input2, std::string &output) {
    if (input1 > input2) {
        output = input1;
    } else {
        output = input2;
    }
}

void max_int(const int input1, const int input2, int &output) {
    if (input1 > input2) {
        output = input1;
    } else {
        output = input2;
    }
}

void max_double(const double input1, const double input2, double &output) {
    if (input1 > input2) {
        output = input1;
    } else {
        output = input2;
    }
}