#include "Bloco.h"
#include <allegro5/allegro_image.h>
#define PNG_BLOCO "imagens/Tijolo.png"


Bloco::Bloco()
{
    spright_bloco = al_load_bitmap(PNG_BLOCO);
}

void Bloco::draw_bloco(int l, int h)
{
    al_draw_bitmap(spright_bloco, l*32, h*32, 0);
}

Bloco::~Bloco()
{
    al_destroy_bitmap(spright_bloco);
}
