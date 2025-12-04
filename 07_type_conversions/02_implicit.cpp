#include <iostream>
int main() {

    // int x = 3.14;  // decimal part is truncated → x becomes 3
    double x = 3.14; // decimal part is preserved → x stays 3.14

    std::cout << x;

    return 0;
}
