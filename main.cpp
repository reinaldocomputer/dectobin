#include <iostream>
#include <stdlib.h>
#define BITS_OF_ARCH 31
int main(int argc, char *argv[])
{
    if(argc > 1){
        int number = atoi(argv[1]);

        for(int i=BITS_OF_ARCH; i >= 0; i--){
            if(1 & (number >> i)) std::cout << "1";
            else std::cout << "0";
        }
        std::cout << std::endl;

        return 0;
    }
}