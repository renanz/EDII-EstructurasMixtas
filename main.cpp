#include <iostream>
#include "misc.h"

using namespace std;

int main()
{
    misc f;

    char* h = f.listToChar(f.getLista());
    for(int x=0; x<89;x++)
    {
        cout<<h[x];
    }cout<<endl<<endl;
    Archivo* ar = f.charToArchivo(h);
    char* h2 = f.archivoToChar(ar);
    for(int x=0; x<89;x++)
    {
        cout<<h2[x];
    }cout<<endl<<endl;

    f.charToList(h2);

    return 0;
}
