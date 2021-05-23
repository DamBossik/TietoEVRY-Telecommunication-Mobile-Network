#include "Wrapper.hpp"
#include <iostream>

int main(){

    wrapper::Wrapper test;
    test.sleep(2000);
    std::cout << "Hello there" << std::endl;
    test.sleep(2000);
    std::cout << "How are you?" << std::endl;

}