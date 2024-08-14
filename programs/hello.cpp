#include <iostream>

#ifdef _WIN32
    #include <windows.h>
#endif

using namespace std;

/***** algorithm *****/
int main() {
    #ifdef _WIN32
        SetConsoleOutputCP( 1252 );
        SetConsoleCP( 1252 );
    #endif

    cout << "Hello World!" << endl;

    return 0;
}
