#ifndef PERSONAS_H
#define PERSONAS_H


class Personas
{
    public:
        Personas(char* nom, char* ape, int ed);

        int getEdad();
        char* getNombre();
        char* getApellido();

        void setEdad(int ed);
        void setNombre(char * nom);
        void setApellido(char * ap);


    private:
        char * nombre;
        char * apellido;
        int edad;
};

#endif // PERSONAS_H
