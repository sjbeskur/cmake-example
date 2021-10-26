#include <iostream>
#include <string>
#include "math/add.h"
#include "math/div.h"
#include "print/print.h"

int main(){
    float first_no, second_no, result_add, result_div;
    std::cout << "Enter first number\t";
    std::cin >> first_no;
    std::cout << "Enter first number\t";
    std::cin >> second_no;

    print_results("Addition", add(first_no, second_no));
    print_results("Division", div(first_no, second_no));
    return 0;
}

// To compile w/o cmake compiler
// > g++ main.cpp add.h div.h print.h add.cpp div.cpp print.cpp  -o calculator