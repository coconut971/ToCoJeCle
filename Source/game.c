//
// Created by h3ll0w0rld (Tom) on 21/02/2020.
//

void startGame(){
    int character[10];  // Liste personnage
    int boss[3];       // Liste boss
    int map[20][20];
    createMap(map);
    fullScreen();
    // loadingScreen();
    int i;
    do{
        i= 0;
        title();
        startMenu();
        int choice = makeChoice(4);
        if(choice == 1){    // Option nouvelle partie
            createCharacter(character);
            ingameText(1,character);
            gameLoop(character, map, boss);
        }else if(choice == 2){  // Option charger la dernière sauvegarde
            loadGame(character, boss);
            ingameText(4,character);
            gameLoop(character, map, boss);
        }else if(choice == 3){  // Option a propos
            ingameText(555,character);
            i=1;
        }else if(choice == 4){  // Option quitter le jeu
            ingameText(999,character);
        }
    }while(i);
}

void gameLoop(int *character, int *map, int *boss){
    int result = 2;     // Var de fin du jeu. Si en sortant de la boucle elle vaut 1, le player à gagné. Sinon si elle vaut 0, le player à perdu.
    int loop = 1;       // Var de la boucle, on va la set à 0 quand on voudra sortir de la boucle
    int mob[3];         // Liste du mob
    setMob(1,boss);     // Set les valeurs du boss

    while(loop){
        int loop2 = 1;
        while(loop2){       // Bouucle pour loop sur les choix si ils ne sont pas correct ( colision au deplacement )
            // Reset console et affichage map
            system("cls");
            printMap(map, character[5], character[6]);
            characterNextLevel(character);
            printf("\n\n");
            ingameText(2,character);
            // On affiche un menu de choix et on recupere l'input player pour effectuer son choix.
            int colide;
            int choice = makeChoice(6);
            switch(choice){
                case 1:
                    colide = moove(1,character);
                    if(colide == 1){
                        character[6] = character[6]-1;
                        loop2 = 0;
                    }else{
                        color(15,4);
                        printf("Vous ne pouvez pas sortir de la for%ct avant d'avoir tu%c le boss.\n\n",136,130);
                        color(15,0);
                        system("pause");
                    }
                    break;
                case 2:
                    colide = moove(2,character);
                    if(colide == 1){
                        character[6] = character[6]+1;
                        loop2 = 0;
                    }else{
                        color(15,4);
                        printf("Vous ne pouvez pas sortir de la for%ct avant d'avoir tu%c le boss.\n\n",136,130);
                        color(15,0);
                        system("pause");
                    }
                    break;
                case 3:
                    colide = moove(3,character);
                    if(colide == 1){
                        character[5] = character[5]-1;
                        loop2 = 0;
                    }else{
                        color(15,4);
                        printf("Vous ne pouvez pas sortir de la for%ct avant d'avoir tu%c le boss.\n\n",136,130);
                        color(15,0);
                        system("pause");
                    }
                    break;
                case 4:
                    colide = moove(4,character);
                    if(colide == 1){
                        character[5] = character[5]+1;
                        loop2 = 0;
                    }else{
                        color(15,4);
                        printf("Vous ne pouvez pas sortir de la for%ct avant d'avoir tu%c le boss.\n\n",136,130);
                        color(15,0);
                        system("pause");
                    }
                    break;
                case 5:
                    saveGame(character,boss);
                    break;
                case 6:
                    loop = 0;
                    loop2 = 0;
                    result = 2;
                    break;
                default:
                    color(15,4);
                    printf("Erreur function gameLoop() in second switch probably with var choice or with the break in the switch case\n");
                    color(15,0);
            }
        }


        //
        // *
        // **
        // Là on va foutre toute les aleatoire d'apparition mob ou objet selon la position sur la map
        srand(time(NULL));
        int random = rand()%20+1;
        int zonePlayer = whereIsPlayer(character);

        if(zonePlayer == 1){    // Set les valeurs du mobs ici dans la boucle pour qu'ils puissent se regenerer à chaque tour de boucle
            setMob(4,mob);
        }else if(zonePlayer == 2){
            setMob(3,mob);
        }else if(zonePlayer == 3){
            setMob(2,mob);
        }
        if(zonePlayer == 4){
            if(random > 0 && random < 3){
                // Tombe sur un mob
                fight(boss,character);
                printf("Tu croises un mob, fui bg\n");
            }else if(random > 5 && random < 9){
                // Tombe sur une potion
                printf("Tu croises une potion, gg à toi\n");
            }else if(random > 8 && random < 12){
                // Tombe sur une épée
                printf("Tu croises une epee, gg à toi\n");
            }else{
                // Ne se passe rien
                // Lancer un text bidon comme quoi il se passe R
                printf("Continue de chercher le boss mdr\n");
            }
        }else{
            if(random > 0 && random < 6){
                // Tombe sur un mob
                fight(mob,character);
            }else if(random > 5 && random < 9){
                // Tombe sur une potion
                printf("Tu croises une potion, gg à toi\n");
                system("pause");
            }else if(random > 8 && random < 12){
                // Tombe sur une épée
                printf("Tu croises une epee, gg à toi\n");
                system("pause");
            }else{
                // Ne se passe rien
                // Lancer un text bidou comme quoi il se passe R
                printf("Bah il se passe R mdr\n");
                system("pause");
            }
        }

        // **
        // *
        //


        // Vérification de sortie de la boucle de jeu
        if(boss[2]<=0){
            loop = 0;
            result = 1;
        }
        if(character[2]<=0){
            loop = 0;
        }
    }
    // Vérification de fin du jeu
    if(result == 1){
        endGame(1, character);
    }else if(result == 0){
        endGame(0, character);
    }
}
