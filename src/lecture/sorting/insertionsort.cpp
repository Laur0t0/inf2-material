#include <iostream>
#include <vector>

int main(){
    std::vector<int> list {42,23,15,103,37,38};

    insertionsort(list);
    for(int element : list){
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

///insert erwartet eine Liste list und eine Position p
///ertauscht das element an stelle p nach links, bis es entweder größer ist als sein linker Nachbar,
///oder bis es ganz links ist

void insert(std::vector<int> list{42,23,15,103,37,38}){
    
}

void insertionsort(){

}
