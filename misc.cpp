#include "misc.h"

misc::misc()
{
    seedLista();
}

void misc::seedLista()
{
    lista.push_back(new Personas("Juan","Perez",15));
    lista.push_back(new Personas("Jose","Castro",2));
    lista.push_back(new Personas("Renan","Zelaya",20));
    lista.push_back(new Personas("Ana","Castillo",45));
    lista.push_back(new Personas("Alberto","Vindel",35));
}
list<Personas*> misc::getLista()
{
    return this->lista;
}
char* misc::listToChar(list<Personas*>l)
{
    list<Personas*> lis = getLista();
    int tamano = 0;
    int cant = 0;
    char camp = ',';
    char reg = ';';

    for (list<Personas*>::iterator it=lis.begin(); it != lis.end(); it++)
    {
        tamano += strlen((*it)->getNombre());
        tamano += strlen((*it)->getApellido());
        tamano += 4;
        cant++;
    }
    char * data = new char[tamano+(cant*2)+4];
    int pos = 0;

    for (list<Personas*>::iterator it=lis.begin(); it != lis.end(); it++)
    {
        int tamNombre = strlen((*it)->getNombre());
        int tamApellido = strlen((*it)->getApellido());

        memcpy((&data[pos]),(*it)->getNombre(),tamNombre);
        memcpy((&data[pos+tamNombre]), &camp, 1);
        pos += tamNombre+1;

        memcpy((&data[pos]),(*it)->getApellido(),tamApellido);
        memcpy((&data[pos+tamApellido]), &camp, 1);
        pos += tamApellido+1;

        int edad = (*it)->getEdad();
        memcpy((&data[pos]),&edad,4);
        pos += 4;

        memcpy((&data[pos]),&reg,1);
        pos+=1;

    }
    return data;
}

Archivo* misc::charToArchivo(char* data)
{
    Archivo * ar = new Archivo("prueba.txt",true);
    ar->abrir();
    ar->escribir(0,data,89);
    ar->cerrar();
    return ar;
}

char* misc::archivoToChar(Archivo* ar)
{
    char * data = ar->leer(0,89);
    return data;
}

list<Personas*> misc::charToList(char* data)
{
    list<Personas*> lis;
    int puntComma = 0;
    for(int x=0; x<89; x++)
    {
        if(data[x]==';')
            puntComma++;
    }
    int pos = 0;
    for(int x=0; x<puntComma; x++,pos++)
    {

    }
    return lis;
}


