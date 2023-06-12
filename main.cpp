#include <allegro5/allegro5.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_primitives.h>
#include "Pacman.h"
#include "mapa.h"

int main()
{
    // Inicialização do Allegro
    al_init();
    al_init_image_addon();
    al_init_font_addon();
    al_init_ttf_addon();
    al_init_acodec_addon();
    al_install_audio();
    al_install_keyboard();

    // Criação da janela e do display
    ALLEGRO_DISPLAY* janela = al_create_display(MAPA_L*6, MAPA_H*6);
    ALLEGRO_EVENT_QUEUE* fila_eventos = al_create_event_queue();

    // Registro de fontes de eventos
    al_register_event_source(fila_eventos, al_get_keyboard_event_source());
    al_register_event_source(fila_eventos, al_get_display_event_source(janela));

    // Criação do objeto Pacman
    Pacman pacman;

    // Loop principal do jogo
    bool sair = false;
    while (!sair)
    {
        // Processamento de eventos
        ALLEGRO_EVENT evento;
        al_wait_for_event(fila_eventos, &evento);

        switch (evento.type)
        {
            case ALLEGRO_EVENT_DISPLAY_CLOSE:
                sair = true;
                break;
            case ALLEGRO_EVENT_KEY_DOWN:
                // Capturar eventos de teclado para mover o Pacman
                switch (evento.keyboard.keycode)
                {
                    case ALLEGRO_KEY_UP:
                        pacman.moverCima();
                        break;
                    case ALLEGRO_KEY_DOWN:
                        pacman.moverBaixo();
                        break;
                    case ALLEGRO_KEY_LEFT:
                        pacman.moverEsquerda();
                        break;
                    case ALLEGRO_KEY_RIGHT:
                        pacman.moverDireita();
                        break;
                }
                break;
        }

        // Atualização do Pacman
        pacman.atualizar();

        // Desenho do jogo
        al_clear_to_color(al_map_rgb(0, 0, 0)); // Limpar a tela
        draw_map(); // Desenhar o mapa
        pacman.desenhar(); // Desenhar o Pacman

        // Atualização do display
        al_flip_display();
    }

    // Finalização do Allegro
    al_destroy_event_queue(fila_eventos);
    al_destroy_display(janela);

    return 0;
}
