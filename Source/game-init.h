//
// Created by h3ll0w0rld (Tom) on 21/02/2020.
//

#ifndef GAME-INIT_H_INCLUDED
#define GAME-INIT_H_INCLUDED

void fullScreen();
void startMenu();
void createCharacter(int *personnage);
void createMap(int (*map)[20]);
void saveGame(int *character);
void loadGame(int *character);

#endif // GAME-INIT_H_INCLUDED
