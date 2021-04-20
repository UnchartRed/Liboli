/*
** EPITECH PROJECT, 2021
** lib-csfml
** File description:
** sprite
*/

#ifndef OBJECT_H_
#define OBJECT_H_

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdbool.h>

typedef struct sprite_s{
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f size;
    sfIntRect rect;
    float speed;
}sprite_t;

typedef struct object_s
{
    sprite_t *sprite;
    void (*clic)(void *uno, void *dos, void *tres);
    void (*drag)(void *uno, void *dos, void *tres);
    void (*hover)(void *uno, void *dos, void *tres);
    int state;
}object_t;

#endif /* !OBJECT_H_ */