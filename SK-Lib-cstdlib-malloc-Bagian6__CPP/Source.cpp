#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {

    // mengalokasikan memori dengan ukuran 0
    int* ptr = (int*)malloc(0);

    if (ptr == NULL) {
        cout << "Null pointer";
    } else {
        cout << "Address = " << ptr;
    }

    // membatalkan alokasi memori
    free(ptr);

    _getch();
    return 0;
}