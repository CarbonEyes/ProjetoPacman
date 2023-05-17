#include "Dinero.h"
#define PNG_DINERO "imagnes/Moeda.png"

Dinero::Dinero()
{
    png_dinero = al_load_bitmap(PNG_DINERO);
}

void Dinero::draw_dinero(int l, int h)
{
    al_draw_bitmap(png_dinero, l*6, h *6, 0);
}

Dinero::~Dinero()
{
    al_destroy_bitmap(png_dinero);
}