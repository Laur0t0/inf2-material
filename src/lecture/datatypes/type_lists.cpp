#include <iostream>

struct Element{
    int key;
    Element* next;
    Element* prev;

    void append(int key_){
        Element* last = this->prev;
        Element* e = new Element{key_, this , last};
        this->prev = e;
        last->next = e;
    }

    void print(){
        for (Element* current = this->next; current != this; current = current->next){
            std::cout << current->key << std::endl;
        }
    }

    int get_key(size_t pos){
        size_t current_pos = 0;
        for (Element* current = this->next; current != this; current = current->next){
            if (current_pos == pos){
                return current->key;
            }
            current_pos++;
        }
        return -1;
    }

};

int main(){

    //leere Liste erzeugen
    Element* anchor = new Element{0, anchor, anchor};
    anchor->next = anchor;
    anchor->prev = anchor;

/*
    {
        //ein Element ahängen
        Element* last = anchor->prev;
        Element* e = new Element{42, anchor , last};
        anchor->prev = e;
        last->next = e;
    }
*/
    anchor -> append(42);
/*
    {
        //ein zweites Element anhängen
        Element* last = anchor->prev;
        Element* e = new Element{23, anchor , last};
        last->next = e;
        anchor->prev = e;
    }
*/
    anchor -> append(23);

    //ein drittes Element anhängen
    anchor -> append(38);

    //Die Liste länger machen
    

/*
    //die Liste durchlaufen und die Schlüssel ausgeben
    for(Element* current = anchor->next; current != anchor; current = current->next){
        std::cout << current->key << std::endl;
    }
*/
    anchor->print();

    std::cout << &anchor << std::endl;
}