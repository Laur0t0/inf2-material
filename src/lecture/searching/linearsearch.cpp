#include <vector>

///Erwartet eine Liste und einen Wert x
///Liefert die Position von x in List
///Liefert die Länge von List, falls x nicht in list vorkommt

size_t find(std::vector<int>list, int x){
    for (int i = 0; i < list.size();i++){
        if (list[i] == x){
            return i;
    }
    }
    return list.size();
}