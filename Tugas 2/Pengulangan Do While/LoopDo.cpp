#include <iostream>

int main() {
     //Contoh pengulangan do-while 
    int i = 10;
    do {
         std::cout << "Iterasi ke-" << i << std::endl;
        --i;
    } while (i >= 5);

    return 0;
}