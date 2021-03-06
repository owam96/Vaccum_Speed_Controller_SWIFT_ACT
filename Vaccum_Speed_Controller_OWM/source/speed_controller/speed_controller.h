#ifndef SPEED_CONTROLLER_H_INCLUDED
#define SPEED_CONTROLLER_H_INCLUDED

typedef enum {UNKNOWN, MIN, MED, MAX} SPEED_t;

void SPEED_CONTROLLER_init();

SPEED_t SPEED_CONTROLLER_get_speed();

void SPEED_CONTROLLER_set_speed(SPEED_t);

#endif // SPEED_CONTROLLER_H_INCLUDED
