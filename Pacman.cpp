#include "Pacman.h"

#define SPRITE_PACMAN "imagens/pacman.png"
#define VELOCIDADE_PACMAN 3.0f

Pacman::Pacman()
{
    sprite_pacman = al_load_bitmap(SPRITE_PACMAN);
    x = 0;
    y = 0;
    velocidade = VELOCIDADE_PACMAN;
}

void Pacman::atualizar()
{
    // Atualizar a lógica do Pacman aqui
}

void Pacman::desenhar()
{
    al_draw_bitmap(sprite_pacman, x, y, 0);
}

void Pacman::moverCima()
{
    y -= velocidade;
}

void Pacman::moverBaixo()
{
    y += velocidade;
}

void Pacman::moverEsquerda()
{
    x -= velocidade;
}

void Pacman::moverDireita()
{
    x += velocidade;
}
