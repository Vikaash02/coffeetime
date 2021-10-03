#include <iostream>

int main() {
    std::cout << "The size of char is " << sizeof(char) << " byte." << std::endl;
    std::cout << "The size of char16_t is " << sizeof(char16_t) << " bytes." << std::endl;
    std::cout << "The size of char32_t is " << sizeof(char32_t) << " bytes." << std::endl;
    std::cout << "The size of wchar_t is " << sizeof(wchar_t) << " bytes." << std::endl;    

    std::cout << "The size of signed char is " << sizeof(signed char) << " byte." << std::endl;
    std::cout << "The size of signed int is " << sizeof(signed int) << " bytes." << std::endl;
    std::cout << "The size of signed short int is " << sizeof(signed short int) << " bytes." << std::endl;
    std::cout << "The size of signed long int is " << sizeof(signed long int) << " bytes." << std::endl;
    std::cout << "The size of signed long long int is " << sizeof(signed long long int) << " bytes." << std::endl;

    std::cout << "The size of unsigned char is " << sizeof(unsigned char) << " byte." << std::endl;
    std::cout << "The size of unsigned int is " << sizeof(unsigned int) << " bytes." << std::endl;
    std::cout << "The size of unsigned short int is " << sizeof(unsigned short int) << " bytes." << std::endl;
    std::cout << "The size of unsigned long int is " << sizeof(unsigned long int) << " bytes." << std::endl;
    std::cout << "The size of unsigned long long int is " << sizeof(unsigned long long int) << " bytes." << std::endl;

    std::cout << "The size of float is " << sizeof(float) << " bytes." << std::endl;
    std::cout << "The size of double is " << sizeof(double) << " bytes." << std::endl;
    std::cout << "The size of long double is " << sizeof(long double) << " bytes." << std::endl;
    
    std::cout << "The size of bool is " << sizeof(bool) << " byte." << std::endl;

    return 0;
}
