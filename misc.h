#ifndef MISC_H
#define MISC_H
#include "Personas.h"
#include "Archivo.h"
#include <list>
#include <string.h>


class misc
{
    public:
        misc();

        void seedLista();
        char* listToChar (list<Personas*> l);
        Archivo* charToArchivo(char* data);
        char* archivoToChar(Archivo* ar);
        list<Personas*> charToList(char* data);

        list<Personas*> getLista();
    private:
        list<Personas*> lista;
};

#endif // MISC_H
