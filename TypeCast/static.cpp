#include "iostream"
unsigned int a = 2559898657;
uint8_t c = 255;

int main()
{
    // uint8_t b = (uint8_t)a;
    // int16_t c = (int16_t)a;
    // float d = (float)a;
    // std::stringstream ss;
    // ss  << +f << +a << r << e;
    // std::string str = ss.str();

    // // std::string f = std::to_string (f);

    // std::cout << "uint8_t: " << b << "\n";
    // std::cout << "int16_t: " << c << std::endl;
    // std::cout << "float: " << d << std::endl;
    // std::cout << "String: " << str << std::endl;
    int b = static_cast<int>(a);
    long *x = reinterpret_cast<long *>(&a);
    int8_t d = static_cast<int8_t>(c);
    int8_t e =(int8_t)(c);
    std::cout << "unsigned int8_t: " << a << "\n";
    std::cout << "int: " << b << "\n";
    std::cout << "uint8_t: " << c << "\n";
    std::cout << "int8_t: " << d << "\n";
    std::cout << "int8_t: " << e << "\n";

    std::cout << "reinterpret_cast int: " << *x << "\n";
    return 0;
}