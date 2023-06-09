#ifndef MAPA_M
#define MAPA_M

#include <iostream>
#include <allegro5/allegro5.h>
#include <allegro5/allegro_image.h>
#include "Bloco.h"
#include "Dinero.h"

using namespace std;
const int MAPA_L = 31;
const int MAPA_H = 31;

char mapa[MAPA_L][MAPA_H] = 
{
    "0000000000000000000",
    "0111111110111111110",
    "0100100010100010010",
    "0111111111111111110",
    "0100101000001010010",
    "0111101110111011110",
    "0000100020200010000",
    "2220102222222010222",
    "0000102002002010000",
    "2222122022202212222",
    "0000102000002010000",
    "2220102222222010222",
    "0000102000002010000",
    "0111111110111111110",
    "0100100010100010010",
    "0110111111111110110",
    "0010101000001010100",
    "0111101110111011110",
    "0100000010100000010",
    "0111111111111111110",
    "0000000000000000000"
};

void draw_map()
{
    Bloco bloco_obj;
    Dinero dinero_obj;
    int l;
    int h;

    for (l = 0; l < MAPA_L; l++)
    {
        for (h = 0; h < MAPA_H; h++)
        {
            if (mapa[l][h] == '0')
            {
                bloco_obj.draw_bloco(l, h);
            }
            else if (mapa[l][h] == '1')
            {
                dinero_obj.draw_dinero(l, h);
            }
        }
    }
}

#endif
