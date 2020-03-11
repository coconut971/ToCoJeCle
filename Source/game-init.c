//
// Created by h3ll0w0rld (Tom) on 21/02/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include "misc.h"
#include "game.h"
#include "game-init.h"

void fullScreen(){  // Comme son nom l'indique c'est la fonction qui previent le joueur de se mettre en full screen
    system("cls");
    color(14,5);
    printf("\nVeuillez mettre votre console en pleine ecran pour profiter pleinement du jeu.\n\n");
    color(15,0);
    fprintf(stdout, "%lu\n", (unsigned long)time(NULL));
    system("pause");
    system("cls");

}

void startMenu(){   // Comme son nom l'indique c'est le premier menu que le joueur verra
    printf("MENU PRINCIPAL :\n1. Nouvelle partie\n2. Charger la derni%cre sauvegarde\n3. A propos\n4. Quitter le jeu\n",138);
}

void createCharacter(int *character){
    system("cls");
    title();
    color(15,2);
    printf("Cr%cation de votre personnage :\n\n",130);
    color(15,0);
    static signed char name[100];
    printf("Quel est votre nom : ");
    scanf("%s", &name);
    character[0] = name;       // Nom
    character[1] = 0;          // XP
    character[2] = 50;         // Point de Vie
    character[3] = 1;          // Niveau de l'epee
    character[4] = 0;          // Nombre de mob vaincu (A incr�menter a chaque victoire)
    character[5] = 5;          // x
    character[6] = 14;         // y
    character[7] = 0;          // Progression dans l'histoire (pour les indices sous la map)
    character[8] = 0;          // Map du jeu
    character[9] = 0;          // Point d'hp de la potion
    character[10] = 50;        // PHP MAX selon lvl
    color(14,0);
    printf("\n\nCr%cation de votre personnage",130);
    /*
    int i;
    for(i = 0; i < 3;i+=1){
        Sleep(500);
        printf(".");
    }
    Sleep(500);
    */
    color(15,0);
}

void createMap(int (*map)[20]){
    int j, i = 0;
    while(i < 20){
        j = 0;
        while(j < 20){
            if(i == 0){
                map[i][j] = 0;
            }else if(i == 20-1){
                map[i][j] = 0;
            }else if(j == 0){
                map[i][j] = 0;
            }else if(j == 20-1){
                map[i][j] = 0;
            }else{
                map[i][j] = ' ';
            }
            j+=1;
        }
        i+=1;
    }
}

void saveGame(int *character, int *boss){    // Sauvegarder la game.
  FILE *fpointer;
  fpointer = fopen("../save.txt", "w");
  fprintf(fpointer, "%s\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",character[0],character[1],character[2],character[3],character[4],character[5],character[6],character[7],character[8],character[9],character[10]);
  fclose(fpointer);
}


void loadGame(int *character,int *boss){    // Charger la sauvegarde.
  FILE *fpointer;
  fpointer = fopen("../save.txt", "r");
  char singleLine[11][150];
  int counter = 0;
  while (!feof(fpointer))
  {
    fgets(singleLine[counter], 150, fpointer);
    counter++;
  }
  fclose(fpointer);

  character[0] = singleLine[0];
  character[1] = atoi(singleLine[1]);
  character[2] = atoi(singleLine[2]);
  character[3] = atoi(singleLine[3]);
  character[4] = atoi(singleLine[4]);
  character[5] = atoi(singleLine[5]);
  character[6] = atoi(singleLine[6]);
  character[7] = atoi(singleLine[7]);
  character[8] = atoi(singleLine[8]);
  character[9] = atoi(singleLine[9]);
  character[10] = atoi(singleLine[10]);
  //boss[2] = atoi(singleLine[11]);
}
