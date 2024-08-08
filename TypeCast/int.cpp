#include "iostream"

int8_t a = 89;

int main()
{
    uint8_t b = (uint8_t)a;
    int16_t c = (int16_t)a;
    float d = (float)a;

    std::cout << "uint8_t: " << b << "\n";
    std::cout << "int16_t: " << c << std::endl;
    std::cout << "float: " << d << std::endl;
    return 0;
}