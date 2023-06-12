#ifndef DINERO_H
#define DINERO_H
#include <allegro5/allegro.h>

class Dinero
{
private:
    ALLEGRO_BITMAP* png_dinero;
public:
    Dinero();
    ~Dinero();
    void draw_dinero(int l, int h);
};

#endif
