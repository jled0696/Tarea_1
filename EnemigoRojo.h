#ifndef ENEMIGOROJO_H
#define ENEMIGOROJO_H

#include "Enemigo.h"

class EnemigoRojo : public Enemigo
{
    public:
        EnemigoRojo(SDL_Renderer* renderer);
        virtual ~EnemigoRojo();
        void logica();
    protected:
    private:
};

#endif // ENEMIGOROJO_H
