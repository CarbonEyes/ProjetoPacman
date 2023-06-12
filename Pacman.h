#ifndef PACMAN_H
#define PACMAN_H

#include <allegro5/allegro.h>

class Pacman
{
private:
    ALLEGRO_BITMAP* sprite_pacman;
    float x;
    float y;
    float velocidade;

public:
    Pacman();
    void atualizar();
    void desenhar();
    void moverCima();
    void moverBaixo();
    void moverEsquerda();
    void moverDireita();
};

#endif
