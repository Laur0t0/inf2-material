#include <vector>
#include <iostream>

///Erwartet eine Liste und einen Wert x
///Liefert die Position von x in List
///Liefert die Länge von List, falls x nicht in list vorkommt

size_t find(std::vector<int>list, int x){
    int counter = 0;
    for (int i = 0; i < list.size();i++){
        counter++;
        if (list[i] == x){
            std::cout << "find Anzahl Schritte: " << counter << std::endl;
            return i;
        }
    }
    return list.size();
}

int main(){
    std::vector<int>list = {10,25,35,42,105,270,320};

    std::cout << find(list, 35) << std::endl;

    return 0; 
}