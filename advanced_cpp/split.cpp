#include "split.h"
#include <iostream>

void Example::printMessage(){
    std::cout<<"Hello from code splitting! \n";
}
Example::Example(){
    std::cout<<"Example has been initiated! \n";
}

int main(){
    Example ex;

    ex.printMessage();

}