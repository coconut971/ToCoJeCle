//
// Created by h3ll0w0rld (Tom) on 21/02/2020.
//

#ifndef MISC_H_INCLUDED
#define MISC_H_INCLUDED

#include "misc.c"

void color(int couleurDuTexte, int couleurDeFond);
void drake();
void loadingScreen();
void title();
int makeChoice(int numberOfChoice);
void ingameText(int whatText, int *character);
void characterNextLevel(int *character);
void setMob(int whatMob, int *mob);
void endGame(int result, int *character);
int moove(int direction, int *character);
void printMap(int (*map)[20], int x, int y);
int whereIsPlayer(int *character);
int atkPlayer(int *character);
void fight(int *mob,int *character);
void adventure(int *character, int mob, int *boss);

#endif // MISC_H_INCLUDED
