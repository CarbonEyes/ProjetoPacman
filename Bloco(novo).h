#ifndef BLOCO_H
#define BLOCO_H
#include <allegro5/allegro5.h>

class Bloco
{
private:
    ALLEGRO_BITMAP* spright_bloco;
public:
    Bloco();
    ~Bloco();
    void draw_bloco(int l, int h);
};

#endif
