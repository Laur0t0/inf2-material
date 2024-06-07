#include <__format/format_functions.h>
#include <iostream>
#include <istream>

struct Complex{
        double real;
        double img;
    };

Complex add(Complex c1, Complex c2){
    Complex result = {
        c1.real + c2.real,
        c1.img + c2.img
    };
    return result;
}

Complex operator+(Complex c1, Complex c2){
    return add(c1, c2);
}

Complex mult(Complex c1, Complex c2){
    Complex result = {
        c1.real * c2.real - c1.img * c2.img,
        c1.real * c2.img + c2.real * c1.img
    };
    return result;
}

Complex operator*(Complex c1, Complex c2){
    return mult(c1, c2);
}

std::string str(Complex c){
    return std::format("{} + {}j", c.real, c.img);  //Gibt den Realteil und den Imaginärteil aus. Die {} Klaimmern entsprechen einer leeren stelle, die man danach durch eine Variable füllt
};

std::iostream & operator<<(std::iostream & left, Complex c){
    left << str(c);
    return left;
}

int main(){

    Complex c1 = {3, 4}; //c1= 3 + 4j
    Complex c2 = {2.5, -4.75}; //c1= 2,5 + -4,75j
    Complex c3 = c1 + c2;
    Complex c4 = c1 * c2;

    std::cout <<"c1: " << str(c1) << std::endl;
    std::cout <<"c2: " << str(c2) << std::endl;
    std::cout <<"c3 (c1 + c2): " << str(c3) << std::endl;
    std::cout <<"c4 (c1 * c2): " << str(c4) << std::endl;

    return 0;
}