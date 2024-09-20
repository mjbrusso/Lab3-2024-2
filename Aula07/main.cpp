#include "dog.hpp"
#include "cat.hpp"
#include "pet.hpp"

using namespace lab3;

int main(){
    dog d1("Ozzy");
    d1.speak();

    pet p("Pantufa");
    p.speak();

    cat m("Meowth");
    m.speak();
}


// #include "pet.hpp"
// int main(){
//     pet bichano("Bob");
//     bichano.speak();

//     pet *p = new pet("Anne");
//     p->speak();
//     delete p;
// }