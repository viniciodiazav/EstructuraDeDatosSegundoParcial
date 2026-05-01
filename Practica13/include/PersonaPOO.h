#ifndef PERSONAPOO_H
#define PERSONAPOO_H


class PersonaPOO
{
    public:
        PersonaPOO();
        PersonaPOO(char* nombre);
        PersonaPOO(char* nombre, char* ap, char* am, char genero, short edad);
        ~PersonaPOO();

        char* GetNombre();
        void SetNombre(char* nombre);

        char* GetAp();
        void SetAp(char* ap);

        char* GetAm();
        void SetAm(char* am);

        char GetGenero();
        void SetGenerp(char genero);

        short GetEdad();
        void SetEdad(short edad);

    protected:

    private:
        void copyChars(char* d, char* o);
        char nombre[30];
        char ap[30];
        char am[30];
        char genero;
        short edad;
};

#endif
