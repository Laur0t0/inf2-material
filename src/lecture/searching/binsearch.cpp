#include <vector>
#include <iostream>

///Erwartet eine Liste und einen Wert x
///Liefert die Position von x in List
///Liefert die Länge von List, falls x nicht in list vorkommt
///Führt eine binäre Suche aus, die Liste muss also sortiert sein

size_t find(std::vector<int>list, int x){

    //Marker für Anfang und Ende der noch zu durchsuchenden Liste
    int begin = 0;
    int end = list.size();
    int counter = 0;

    while(begin != end){

        int mitte = begin + (end-begin) / 2;
        counter++;
         //Prüfen, ob x in der Mitte steht
        if(list[mitte] == x){
            std::cout << "find Anzahl Schritte: " << counter << std::endl;
            return mitte;
        }

        if(x < list[mitte]){
             //Im linken Teil weitersuchen
            end = mitte;
        }else{
            //Im rechten Teil weitersuchen
            begin = mitte + 1;
        } 
    }
    std::cout << "find Anzahl Schritte: " << counter << std::endl;

    return list.size();
}

int main(){
    std::vector<int>list = {10,25,35,42,105,270,320};

    std::cout << find(list, 35) << std::endl;

    return 0; 
}