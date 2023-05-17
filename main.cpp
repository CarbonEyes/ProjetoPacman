#include <iostream>
#include <allegro5/allegro5.h>
#include <allegro5/allegro_image.h>
#include "mapa.h"

using namespace std;

int main()
{
    // Inicializar o Allegro
    al_init();
    al_init_image_addon();

    // Criar uma janela
    ALLEGRO_DISPLAY* display = al_create_display(800, 600);
    al_set_window_title(display, "Meu jogo");

    // Carregar imagens
    Bloco bloco_obj;
    Dinero dinero_obj;
    bloco_obj.load_bloco_png();
    dinero_obj.load_dinero_png();

    // Loop do jogo
    bool sair = false;
    while (!sair)
    {
        // Desenhar o mapa
        draw_map();

        // Atualizar a janela
        al_flip_display();
    }

    // Finalizar o Allegro
    al_destroy_display(display);

    return 0;
}
