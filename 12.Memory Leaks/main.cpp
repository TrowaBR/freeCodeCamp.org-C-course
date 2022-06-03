#include <iostream>

int main() {
    int num1 {40};
    int *p_num1 { new int {1} };
    p_num1 = new int {2}; // "new int {1}" leaked
    p_num1 = &num1;       // "new int {2}" leaked

    {
        int *p_num1 { new int {3} };
    } // "new int {3}" leaked

    return 0;
}