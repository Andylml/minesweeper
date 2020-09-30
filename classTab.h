#include <iostream>
#include <stdlib.h>
class tablero
{
    private:
        int n;
        int** tab; 
    public:
        tablero(int n);
        int getSize();   
        void imprimetab(); 
        void bomberman(int r, int c);
        void filltab(int r, int c, int valor);
        int recibevalor(int r, int c);
};
