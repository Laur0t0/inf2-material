#include <vector>
#include <iostream>

int main(){

    // int i = 38;

    // for (int i = 1; i <= 10; i++){

    //     std::cout << i << " "; //mit leerzeichen zwischen den zahlen
    //     //std::cout << i << "\n"; //mit leerer zeile zwischen den zahlen, 1. Variante
    //     //std::cout << i << std::endl; //mit leerer zeile zwischen den zahlen, 2. Variante

    // }

    int j = 1;

    std::vector<int> list = {42,23,53,38}; //dynamisches Array
    //int list2[] = {42,23,53,38};                         //normales Array

    for (int j = 0; j < list.size(); j++){
        std::cout << list[j] << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;

    list.push_back(104);

    //Ausgabe mit Range Loop
    for (auto el : list){
        std::cout << el << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;

    return 0;
}