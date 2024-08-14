#include "iostream"
#include "sstream"
#include "string"

int8_t a = -128;
int8_t f = 127;
int16_t r = 32000;
int32_t e = 43947322;

int main()
{
    uint8_t b = (uint8_t)a;
    int16_t c = (int16_t)a;
    float d = (float)a;
    std::stringstream ss;
    ss  << +f << +a << r << e;
    std::string str = ss.str();

    // std::string f = std::to_string (f);

    std::cout << "uint8_t: " << b << "\n";
    std::cout << "int16_t: " << c << std::endl;
    std::cout << "float: " << d << std::endl;
    std::cout << "String: " << str << std::endl;
    return 0;
}