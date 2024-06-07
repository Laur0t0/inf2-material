#include <iostream>

 struct Complex{
        double real;
        double img;
    };

int main(){

    Complex c1 = {3, 4}; //c1= 3 + 4j
    Complex c2 = {2.5, -4.75}; //c1= 2,5 + -4,75j

    std::cout <<"Realteil von c1: " << c1.real << std::endl;
    std::cout <<"Imaginärteil von c1: " << c1.img << std::endl;
    std::cout <<"Realteil von c2: " << c2.real << std::endl;
    std::cout <<"Imaginärteil von c2: " << c2.img << std::endl;

    return 0;
}