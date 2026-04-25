#ifndef DATO_H
#define DATO_H


class Dato
{
    public:
        Dato(int n);
        ~Dato();

        int GetDato();
        Dato* GetSiguiente();

        void SetSiguiente(Dato* siguiente);

    protected:

    private:
        int n;
        Dato* siguiente;
};

#endif
