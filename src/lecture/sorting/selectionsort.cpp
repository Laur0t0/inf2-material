#include <cstddef>
#include <iostream>
#include <ostream>
#include <vector>

//"Vorausdeklaration" der verwendeten Funktionen
size_t smallestPos(std::vector<int> list, size_t start);
void selectionsort(std::vector<int> list);


int main(){
    std::vector<int> list {42,23,15,103,37,38};

    std::cout <<smallestPos(list, 0) << std::endl;
}

///smallestPos erwartet eine Liste und einen startposition start
///liefert die positiondes kleinsten Elements hinter start der liste

size_t smallestPos(std::vector<int> list, size_t start){
    size_t result = start;

    for (size_t pos = start; pos < list.size(); pos++) {
        if (list[pos] < list[result]){
            result = pos;
        }
    }
    return result;

}

///selectionsort sortiert eine liste, indem sie für jede Position in der liste 
///einmal smallestPos mit p aufruft und das element an der stellep mit diesem ergebnis vertauscht

void selectionsort(std::vector<int> list){
    for (size_t p = 0; p < list.size();p++){
        size_t sp = smallestPos(list, p);
        std::swap(list[p], list[sp]);
    }
}