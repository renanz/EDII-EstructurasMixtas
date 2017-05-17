#include "Personas.h"

Personas::Personas(char* nom, char* ape, int ed)
{
    this->nombre = nom;
    this->apellido = ape;
    this->edad = ed;
}

int Personas::getEdad()
{
    return this->edad;
}

char * Personas::getNombre()
{
    return this->nombre;
}

char * Personas::getApellido()
{
    return this->apellido;
}

void Personas::setEdad(int ed)
{
    this->edad = ed;
}

void Personas::setNombre(char * nom)
{
    this->nombre = nom;
}

void Personas::setApellido(char * ap)
{
    this->apellido = ap;
}
