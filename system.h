#include <stdio.h>
#include "component.h"
#include "entity.h"
#include "sprite.h"

#ifndef SYSTEM_H
#define SYSTEM_H

void sys_render_print_info(struct entities *_entities);

void sys_render_update(struct entities *_entities, struct sprites *_sprites, SDL_Renderer *renderer);

#define KEY_COUNT 512
//int key[KEY_COUNT]
void sys_input_update(struct entities *_entities, const Uint8 *key);

void sys_collision_update(struct entities *_entities);

#endif
