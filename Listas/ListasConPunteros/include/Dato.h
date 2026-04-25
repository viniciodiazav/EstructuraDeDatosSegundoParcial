#ifndef DATO_H
#define DATO_H


class Dato
{
    public:
        Dato(int n);
        ~Dato();

        int GetDato();
        Dato* GetSiguiente();
        Dato* GetAnterior();

        void SetSiguiente(Dato* siguiente);
        void SetAnterior(Dato* anterior);

    protected:

    private:
        int n;
        Dato* siguiente;
        Dato* anterior;
};

#endif
