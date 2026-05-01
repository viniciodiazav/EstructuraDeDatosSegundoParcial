#ifndef AUTOPOO_H
#define AUTOPOO_H


class AutoPOO
{
    public:
        AutoPOO();
        AutoPOO(float precio, int anio);
        ~AutoPOO();

        float GetPrecio();
        void SetPrecio(float precio);

        int GetAnio();
        void SetAnio(int anio);

    protected:

    private:
        float precio;
        int anio;
        AutoPOO *aPOO;
};

#endif
