/*
** EPITECH PROJECT, 2021
** lib-csfml
** File description:
** oli
*/

#ifndef OLI_H_
#define OLI_H_

#include "oli_struct.h"

sprite_t *init_sprite(char *filepath);
bool sprite_hover(sprite_t *sprite, sfMouseMoveEvent event);
void display_sprite(sprite_t *sprite, sfRenderWindow *window);
void move_sprite(sprite_t *sprite, char dir);
void destroy_sprite(sprite_t *sprite);
void play_sound(char *path);

#endif /* !OLI_H_ */
