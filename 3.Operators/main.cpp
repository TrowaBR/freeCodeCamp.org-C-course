#include <iostream>

void assignVar() {
    unsigned int n1 {123};
    int n2;

    std::cout << "n1: " << n1 << std::endl;

    n1 = 55; // Assign new value
    std::cout << "n1: " << n1 << std::endl;

    n1 = -22;
    n2 = n1;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
}

void outOperators() {
    // Addition
    int n1 {7};
    int n2 {2};

    std::cout << n1 << " + " << n2 << " = " << n1 + n2 << std::endl;
    std::cout << n1 << " - " << n2 << " = " << n1 - n2 << std::endl;
    std::cout << n1 << " * " << n2 << " = " << n1 * n2 << std::endl;
    std::cout << n1 << " / " << n2 << " = " << n1 / n2 << std::endl;
    std::cout << n1 << " % " << n2 << " = " << n1 % n2 << std::endl; // Modulus
}

void outExpressions() {
    int a {6};
    int b {3};
    int c {8};
    int d {9};
    int e {3};
    int f {2};
    int g {5};

    std::cout << "Expression 1: " << a + (b * c) - (d / e) - f + g << std::endl; // 30
    std::cout << "Expression 2: " << ((a / b) * c)  + d - e + f    << std::endl; // 24
}

void outIncDec() {
    int n1 {5};
    int n2 {3};

    std::cout << "n1++: " << n1++ << std::endl; // 5 (n1+1)
    std::cout << "n1  : " << n1   << std::endl; // 6
    std::cout << "n1--: " << n1-- << std::endl; // 6 (n1-1)
    std::cout << "n1  : " << n1   << std::endl; // 5

    std::cout << "++n2: " << ++n2 << std::endl; // (n2+1) 4
    std::cout << "  n2: " <<   n2 << std::endl; // 4
    std::cout << "--n2: " << --n2 << std::endl; // (n2-1) 3
    std::cout << "  n2: " <<   n2 << std::endl; // 3
}

void coumpoundOperators() {
    int n1 {45};
    std::cout << "n1: " << n1 << std::endl; // 45
    n1 += 5;
    std::cout << "n1 += 5: " << n1 << std::endl; // 50
    n1 -= 5;
    std::cout << "n1 -= 5: " << n1 << std::endl; // 45
    n1 *= 2;
    std::cout << "n1 *= 2: " << n1 << std::endl; // 90
    n1 /= 3;
    std::cout << "n1 /= 3: " << n1 << std::endl; // 30
    n1 %= 11;
    std::cout << "n1 %= 11: " << n1 << std::endl; // 8
}

void relationalOperators() {
    int n1 {45};
    int n2 {60};

    std::cout << std::boolalpha;
    std::cout << "n1 <  n2: " << (n1 <  n2) << std::endl;
    std::cout << "n1 <= n2: " << (n1 <= n2) << std::endl;
    std::cout << "n1 >  n2: " << (n1 >  n2) << std::endl;
    std::cout << "n1 >= n2: " << (n1 >= n2) << std::endl;
    std::cout << "n1 == n2: " << (n1 == n2) << std::endl;
    std::cout << "n1 != n2: " << (n1 != n2) << std::endl;
    std::cout << std::noboolalpha;
}

void logicalOperators() {

    std::cout << std::boolalpha;
    bool a {true};
    bool b {false};
    bool c {true};

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    std::cout << "a && b: " << (a && b) << std::endl;
    std::cout << "a && c: " << (a && c) << std::endl;
    std::cout << "a && b && c: " << (a && b && c) << std::endl;

    std::cout << "a || b: " << (a || b) << std::endl;
    std::cout << "a || c: " << (a || c) << std::endl;
    std::cout << "a || b || c: " << (a || b || c) << std::endl;

    std::cout << "!a: " << !a << std::endl;
    std::cout << "!b: " << !b << std::endl;
    std::cout << "!c: " << !c << std::endl;
    std::cout << std::noboolalpha;
}

int main() {
    assignVar();
    outOperators();
    outExpressions();
    outIncDec();
    coumpoundOperators();
    relationalOperators();
    logicalOperators();

    return 0;
}