//
// Created by h3ll0w0rld (Tom) on 21/02/2020.
//

#include "misc.h"
#include "game.h"
#include "game-init.h"
#include <windows.h>

void color(int couleurDuTexte, int couleurDeFond){   // La fonction qui va nous servir � colorer notre texte
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);           // Ne pas oublier de rappeler la fonction avec une couleur normal apres utilisation
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}

void drake(){   // Comme son nom l'indique c'est l'ascii du dragon
    color(4,0);
    printf("\t\t\t\t\t                 -==\\\\\\\\                         `//~\\\\\\\\   ~~~~`---.___.-~~\n");
    printf("\t\t\t\t\t            ______-==|                         | |  \\\\\\\\           _-~`\n");
    printf("\t\t\t\t\t       __--~~~  ,-/-==\\\\\\\\                        | |   `\\\\        ,'\n");
    printf("\t\t\t\t\t    _-~       /'    |  \\\\\\\\                      / /      \\\\      /\n");
    printf("\t\t\t\t\t  .'        /       |   \\\\\\\\                   /' /        \\\\   /'\n");
    printf("\t\t\t\t\t /  ____  /         |    \\\\`\\\\.__/-~~ ~ \\ _ _/'  /          \\\\/'\n");
    printf("\t\t\t\t\t/-'~    ~~~~~---__  |     ~-/~         ( )   /'        _--~`\n");
    printf("\t\t\t\t\t                 \\\\_|      /        _)   ;  ),   __--~~\n");
    printf("\t\t\t\t\t                   '~~--_/      _-~/-  / \\\\   '-~ \\\\\n");
    printf("\t\t\t\t\t                  {\\\\__--_/}    / \\\\_>- )<__\\\\      \\\\\n");
    printf("\t\t\t\t\t                  /'   (_/  _-~  | |__>--<__|      |\n");
    printf("\t\t\t\t\t                  |0  0 _/) )-~     | |__>--<__|     |\n");
    printf("\t\t\t\t\t                 / /~ ,_/       / /__>---<__/      |\n");
    printf("\t\t\t\t\t                o o _//        /-~_>---<__-~      /\n");
    printf("\t\t\t\t\t                (^(~          /~_>---<__-      _-~\n");
    printf("\t\t\t\t\t               ,/|           /__>--<__/     _-~\n");
    printf("\t\t\t\t\t            ,//('(          |__>--<__|     /                  .----_\n");
    printf("\t\t\t\t\t            ( ( '))          |__>--<__|    |                 /' _---_~\\\\\n");
    printf("\t\t\t\t\t        `-)) )) (           |__>--<__|    |               /'  /     ~\\\\`\\\\\n");
    printf("\t\t\t\t\t       ,/,'//( (             \\\\__>--<__\\\\    \\\\            /'  //        ||\n");
    printf("\t\t\t\t\t     ,( ( ((, ))              ~-__>--<_~-_  ~--____---~' _/'/        /'\n");
    printf("\t\t\t\t\t    `~/  )` ) ,/|                 ~-_~>--<_/-__       __-~ _/\n");
    printf("\t\t\t\t\t  ._-~//( )/ )) `                    ~~-'_/_/ /~~~~~~~__--~\n");
    printf("\t\t\t\t\t   ;'( ')/ ,)(                              ~~~~~~~~~~\n");
    printf("\t\t\t\t\t  ' ') '( (/\n");
    printf("\t\t\t\t\t    '   '  `\n");
    printf("\t\t\t\t\t\n");
    printf("\t\t\t\t\t\n");
    color(15,0);
    system("pause");
}
void dragoeuf(){ //ascii du dragoeuf
    color(4,0);
    printf("\t\t\t\t\tO=- .-  -. -=O\n");
    printf("\t\t\t\t\tH  /(    )\\  H\n");
    printf("\t\t\t\t\t| |  -^^-  | |\n");
    printf("\t\t\t\t\t   \\_ `' _/\n");
    printf("\t\t\t\t\t|    \\  )    |\n");
    printf("\t\t\t\t\tH     )/     H\n");
    printf("\t\t\t\t\tO=-  ('    -=O\n\n");
    color(15,0);
    system("pause");
}
void dragnil(){ //Ascii du dragnil
    color(4,0);
    printf("\t\t\t\t\t     (\\               /)\n");
    printf("\t\t\t\t\t    __)\\             /(__\n");
    printf("\t\t\t\t\t   __)_ \\  (\\!~!/)  / _(__\n");
    printf("\t\t\t\t\t  __)_ `.\\  )d b(  /.' _(__\n");
    printf("\t\t\t\t\t___)_ `. \\\\(  _  )// .' _(___\n");
    printf("\t\t\t\t\t )_  `. \\  ((q_p))  / .'  _(_\n");
    printf("\t\t\t\t\t _)`.  \\  ,-)\\_/(-.  /  .'(_\n");
    printf("\t\t\t\t\t  _) ,-._/v/vvvvv\\v\\_,-. (_\n");
    printf("\t\t\t\t\t  _)///(._/v(___)v\\_.)\\\\\\(_\n");
    printf("\t\t\t\t\t   \\_ ___/v(_____)v\\___ _/\n");
    printf("\t\t\t\t\t     /vvv\\(_______)/vvv\\\n");
    printf("\t\t\t\t\t     \\vvv/v(_____)v\\vvv/\n");
    printf("\t\t\t\t\t     _\\vv\\\\v(___)v//vv/_\n");
    printf("\t\t\t\t\t    '>_`  \\`-._.-'/  '_<`\n");
    printf("\t\t\t\t\t    ' >_,-'       `-._<`\n\n");
    color(15,0);
    system("pause");
}
void dragoune(){//Ascii du dragoune
    color(4,0);
    printf("\t\t\t\t\t         __        _\n");
    printf("\t\t\t\t\t       _/  \\    _(\\(o\n");
    printf("\t\t\t\t\t      /     \\  /  _  ^^^o\n");
    printf("\t\t\t\t\t     /   !   \\/  ! '!!!v'\n");
    printf("\t\t\t\t\t    !  !  \\ _' ( \\____\n");
    printf("\t\t\t\t\t    ! . \\ _!\\   \\===^\\)\n");
    printf("\t\t\t\t\t     \\ \\_!  / __!\n");
    printf("\t\t\t\t\t      \\!   /    \\\n");
    printf("\t\t\t\t\t(\\_      _/   _\\ )\n");
    printf("\t\t\t\t\t \\ ^^--^^ __-^ /(__\n");
    printf("\t\t\t\t\t  ^^----^^    \"^--v'\n\n");
    color(15,0);
    system("pause");
}

void loadingScreen(){   // Comme son nom l'indique c'est un loading screen (purement estetique, �a sert � tchipet)
    int timeSleep = 200;
    system("cls");
    color(6,0);
    printf("\nChargement du jeu");
    int i;
    for(i = 0; i < 5;i+=1){
        Sleep(timeSleep);
        printf(".");
    }
    Sleep(timeSleep);
    system("cls");
    color(15,0);
}

void title(){   // Comme son nom l'indique c'est le titre
    color(3,0);
    printf(".___________.  ______     ______   ______          __   _______   ______  __       _______ \n|           | /  __  \\   /      | /  __  \\        |  | |   ____| /      ||  |     |   ____|\n`---|  |----`|  |  |  | |  ,----'|  |  |  |       |  | |  |__   |  ,----'|  |     |  |__   \n    |  |     |  |  |  | |  |     |  |  |  | .--.  |  | |   __|  |  |     |  |     |   __|  \n    |  |     |  `--'  | |  `----.|  `--'  | |  `--'  | |  |____ |  `----.|  `----.|  |____ \n    |__|      \\______/   \\______| \\______/   \\______/  |_______| \\______||_______||_______|\n");
    color(6,0);
    printf("\n\t\t\t\t.______      .______     _______ \n\t\t\t\t|   _  \\     |   _  \\   /  _____|\n\t\t\t\t|  |_)  |    |  |_)  | |  |  __  \n\t\t\t\t|      /     |   ___/  |  | |_ | \n\t\t\t\t|  |\\  \\----.|  |      |  |__| | \n\t\t\t\t| _| `._____|| _|       \\______|\n\n\n");
    color(15,0);
}

int makeChoice(int numberOfChoice){
    char choice[10] = {0};  // En gros l� je cr�er la chaine de caract�re qui va recup l'input du joueur
    int integerChoice = 0;  // L� je vais recup la tranformation du char en int
    while(1){
        printf("\nChoix : ");
        scanf("%s", &choice);   // Donc l� recup de la reponse du joueur dans une chaine
        printf("\n");
        integerChoice = atoi(choice);   // Transformation de la chaine en int
        if(integerChoice > 0 && integerChoice < numberOfChoice+1){  // Si on est dans la bonne range on retourne le choix du joueur
            return integerChoice;
        }else if(integerChoice > numberOfChoice){   // Si il depasse l'interval message d'erreur et nouveau tour de boucle
            color(4,0);
            printf("Vous ne pouvez pas choisir un nombre sup%crieur %c %d.\n",130,133,numberOfChoice);
            color(15,0);
        }else{  // Si il ecrit autre chose qu'un int ou en dessous de l'interval message d'erreur et nouveau tour de boucle
            color(4,0);
            printf("Ce n'est pas un choix disponible.\n");
            color(15,0);
        }
    }
}

int makeChoiceZQSD(){
    char choice[10] = {0};  // En gros l� je cr�er la chaine de caract�re qui va recup l'input du joueur
    while(1){
        printf("\nChoix : ");
        scanf("%s", &choice);   // Donc l� recup de la reponse du joueur dans une chaine
        printf("\n");
        if(tolower(choice[0]) == 'z'){
            return 1;
        }else if(tolower(choice[0]) == 's'){
            return 2;
        }else if(tolower(choice[0]) == 'q'){
            return 3;
        }else if(tolower(choice[0]) == 'd'){
            return 4;
        }else if(choice[0] == '1'){
            return 5;
        }else if(choice[0] == '2'){
            return 6;
        }else{  // Si il ecrit autre chose message d'erreur et nouveau tour de boucle
            color(4,0);
            printf("Ce n'est pas un choix disponible.\n");
            color(15,0);
        }
    }
}

void ingameText(int whatText, int *character){  // Comme son nom l'indique c'est la fonction qui va reunir la plupart des texts du jeu
    switch(whatText){                               // Selon la var whatText, le texte change
    case 1:
        system("cls"),
        title();
        printf("Bonjour ");
        color(2,0);
        printf("%s", character[0]);
        color(15,0);
        printf(", bienvenu dans ");
        color(3,0);
        printf("ToCoJeCle ");
        color(6,0);
        printf("RPG");
        color(15,0);
        printf(".\n");
        color(6,0);
        printf("\n\nVous vous r%cveillez dans une for%ct sombre et trouvez %c vos pieds une feuille avec des %ccritures dessus.\n\n**\nVous avez %ct%c s%cl%cctionn%c pour participer %c notre jeu de la mort.\nLe but est le suivant : Vous %cchapez de la for%ct.\nPour cela, une seule solution.\nVaincre le boss de la for%ct.\nComme nous sommes de gentil personnes, vous trouverez la carte de la for%ct au dos de cette feuille.\n(PS : Afin d'%cviter toute fuite de votre par, un champ de force entoure la for%ct, il ne se d%csactivera seulement que losque le boss sera mort.)\n",130,136,133,130,130,130,130,130,130,133,130,136,136,136,130,136,130);
        printf("Lors de votre aventure vous pourrez trouver des %cp%ces ou des potions pour rendre votre p%criple un peu plus simple. Lorsque vous trouvez une %cp%ce celle-ci se \n",130,130,130,130,130);
        printf("fusionne automatiquement %c celle que vous avez d%cj%c pour faire une %cp%ce de niveaux 2. Il vous faudra ensuite retrouver 1 %cp%ce de niveaux 2 pour fusionner vos 2 %cp%ce en\n",133,130,133,130,130,130,130,130,130);
        printf("une %cp%ce de niveaux 3 et ainsi de suite. Pour ce qui est des potions, vous disposez d'une fiole de quantit%c illimit%c que vous remplissez au fur et %c mesure que\n",130,130,130,130,133);
        printf("vous r%ccup%crer des potions.\n",130,130);
        color(6,0);
        printf("**\n\n");
        color(15,0);
        ingameText(3, character);
        system("pause");
        break;
    case 2: //Menu deplacement
        printf("QUE VOULEZ VOUS FAIRE :\nZ. Nord\nS. Sud\nQ. Ouest\nD. Est\n1. Sauvegarder\n2. Quitter le jeu\n\n");
        break;
    case 3: // Difficult� selon la zone
        printf("\tZone : ");
        color(4,0);
        printf("\tRouge : ");
        color(15,0);
        printf("BOSS !\n");
        color(15,0);
        printf("\tZone : ");
        color(6,0);
        printf("\tOrange : ");
        color(15,0);
        printf("Exp%criment%c !\n",130,130);
        color(15,0);
        printf("\tZone :");
        color(1,0);
        printf("\tBlue :");
        color(15,0);
        printf("Interm%cdiaire !\n",130);
        color(15,0);
        printf("\tZone : ");
        color(2,0);
        printf("\tVert : ");
        color(15,0);
        printf("D%cbutant !\n\n",130);
        break;
    case 4: // Text apres chargement sauvegarde
        system("cls"),
        title();
        color(6,0);
        printf("*\nVous vous reveillez\n*\n\n");
        color(15,0);
        printf("Bonjour ");
        color(2,0);
        printf("%s", character[0]);
        color(15,0);
        characterNextLevel(character);
        printf("\n\n");
        system("pause");
        break;
    case 333:   // [WIP]
        color(1,0);
        printf("[WIP] - Work in progress !\n\n\n");
        color(15,0);
        system("pause");
        system("cls");
        break;
    case 555:   // About us
        color(1,0);
        printf("\nA propos :\n\n");
        color(15,0);
        printf("Pour ce devoir, nous sommes actuellement en %cquipe de 4.\n\n\n",130);

        color(6,0);
        printf("Franck ");
        color(15,0);
        printf("alias ");
        color(6,0);
        printf("COCONUT");
        color(15,0);
        printf(" => Chef de projet. Il est bon en JS, dommage qu'on fasse du C.\n\n");

        color(6,0);
        printf("Tom ");
        color(15,0);
        printf("alias ");
        color(6,0);
        printf("H3ll0w0rld");
        color(15,0);
        printf(" => D%cveloppeur principal. En gros j'ai tout fait pour le moment, m%cme le cahier des charges.\n\n",130,136);

        color(6,0);
        printf("Jeremy");
        color(15,0);
        printf("alias ");
        color(6,0);
        printf("Il est pr%csent ",130);
        color(15,0);
        printf(" => Bah il est pr%csent quoi, c'est un bon soutient mental pour le projet.\n\n",130);

        color(6,0);
        printf("Clement");
        color(15,0);
        printf("alias ");
        color(6,0);
        printf("Useless-Boy ");
        color(15,0);
        printf(" => Il s'est occup%c de tout les textes, de l'ASCII, de la musique et de deux trois d%cbuggage.\n\n",130,130);

        printf("\n\n\n\n");
        system("pause");
        system("cls");
        break;
    case 777: //Texte de Victoire//
        system("cls");
        color(10,0);
        printf("\t\t\t\t\t____    ____  __    ______ .___________.  ______    __  .______       _______ \n");
        printf("\t\t\t\t\t\\   \\  /   / |  |  /      ||           | /  __  \\  |  | |   _  \\     |   ____|\n");
        printf("\t\t\t\t\t \\   \\/   /  |  | |  ,----'`---|  |----`|  |  |  | |  | |  |_)  |    |  |__   \n");
        printf("\t\t\t\t\t  \\      /   |  | |  |         |  |     |  |  |  | |  | |      /     |   __|  \n");
        printf("\t\t\t\t\t   \\    /    |  | |  `----.    |  |     |  `--'  | |  | |  |\\  \\----.|  |____ \n");
        printf("\t\t\t\t\t    \\__/     |__|  \\______|    |__|      \\______/  |__| | _| `._____||_______|\n");
        printf("\t\t\t\t\t    F%clicitations, vous avez r%cussi %c vous %cchappez de cette for%ct d%cmoniaque.\n",130,130,133,130,136,130);
        printf("\t\t\t\t\t\t\t    Vu que nous sommes gentils vous gagnez 10 euros.\n");
        color(15,0);
        system("pause");
        break;
    case 888: //Texte de d�faite//
        system("cls");
        color(4,0);
        printf("\t\t\t\t\t _______   _______  _______    ___       __  .___________. _______ \n");
        printf("\t\t\t\t\t|       \\ |   ____||   ____|  /   \\     |  | |           ||   ____|\n");
        printf("\t\t\t\t\t|  .--.  ||  |__   |  |__    /  ^  \\    |  | `---|  |----`|  |__   \n");
        printf("\t\t\t\t\t|  |  |  ||   __|  |   __|  /  /_\\  \\   |  |     |  |     |   __|  \n");
        printf("\t\t\t\t\t|  '--'  ||  |____ |  |    /  _____  \\  |  |     |  |     |  |____ \n");
        printf("\t\t\t\t\t|_______/ |_______||__|   /__/     \\__\\ |__|     |__|     |_______|\n");
        printf("\t\t\t\t\tDommage   vous   ferez  mieux   la   prochaine   fois, il faut plus\n");
        printf("\t\t\t\t\td'ing%cniosit%c     pour     triompher     de    la for%ct    noire  ! \n",130,130,136);
        color(15,0);
        system("pause");
        break;
    case 999://Texte de fermeture du jeux//
        system("cls");
        color(1,0);
        printf("\t\t\t     ___         .______    __   _______ .__   __. .___________.  ______   .___________.\n");
        printf("\t\t\t    /   \\        |   _  \\  |  | |   ____||  \\ |  | |           | /  __  \\  |           |\n");
        printf("\t\t\t   /  ^  \\       |  |_)  | |  | |  |__   |   \\|  | `---|  |----`|  |  |  | `---|  |----`\n");
        printf("\t\t\t  /  /_\\  \\      |   _  <  |  | |   __|  |  . `  |     |  |     |  |  |  |     |  |     \n");
        printf("\t\t\t /  _____  \\     |  |_)  | |  | |  |____ |  |\\   |     |  |     |  `--'  |     |  |     \n");
        printf("\t\t\t/__/     \\__\\    |______/  |__| |_______||__| \\__|     |__|      \\______/      |__|     \n");
        printf("\t                                                             \n");
        printf("\t\t\t\tNous esp%cront te revoir tr%cs vite pour de nouvelles aventures! \n",130,138);
        color(15,0);
        system("pause");
        break;
    default:
        color(15,4);
        printf("Erreur function ingameText() probably with var whatText or with the break in the switch case\n");
        color(15,0);
    }
}

void characterNextLevel(int *character){   // Comme son nom l'indique c'est la fonction qui calcule selon le lvl du joueur selon son xp
    int characterXp = character[1];
    int lvl_1 = 25;
    int lvl_2 = 65;
    int lvl_3 = 145;
    int lvl_4 = 265;
    int lvl_5 = 500;
    if(characterXp >= 0 && characterXp < lvl_1){
        int lvl = lvl_1 - characterXp;
        printf("Vous %ctes niveau ",136);
        color(2,0);
        printf("1");
        color(15,0);
        printf(", il vous reste ");
        color(5,0);
        printf("%d",lvl);
        color(15,0);
        printf(" xp %c gagner avant de passer au prochain niveau\n",133);
        character[10] = 50;
    }else if(characterXp > lvl_1 && characterXp < lvl_2){
        int lvl = lvl_2 - characterXp;
        printf("Vous %ctes niveau ",136);
        color(2,0);
        printf("2");
        color(15,0);
        printf(", il vous reste ");
        color(5,0);
        printf("%d",lvl);
        color(15,0);
        printf(" xp %c gagner avant de passer au prochain niveau\n",133);
        character[10] = 150;
    }else if(characterXp > lvl_2 && characterXp < lvl_3){
        int lvl = lvl_3 - characterXp;
        printf("Vous %ctes niveau ",136);
        color(2,0);
        printf("3");
        color(15,0);
        printf(", il vous reste ");
        color(5,0);
        printf("%d",lvl);
        color(15,0);
        printf(" xp %c gagner avant de passer au prochain niveau\n",133);
        character[10] = 275;
    }else if(characterXp > lvl_3 && characterXp < lvl_4){
        int lvl = lvl_4 - characterXp;
        printf("Vous %ctes niveau ",136);
        color(2,0);
        printf("4");
        color(15,0);
        printf(", il vous reste ");
        color(5,0);
        printf("%d",lvl);
        color(15,0);
        printf(" xp %c gagner avant de passer au prochain niveau\n",133);
        character[10] = 400;
    }else if(characterXp > lvl_4 && characterXp < lvl_5){
        int lvl = lvl_5 - characterXp;
        printf("Vous %ctes niveau ",136);
        color(2,0);
        printf("5");
        color(15,0);
        printf(", il vous reste ");
        color(5,0);
        printf("%d",lvl);
        color(15,0);
        printf(" xp %c gagner avant de passer au prochain niveau\n",133);
        character[10] = 750;
    }else if(characterXp >= lvl_5){
        int lvl = lvl_5 - characterXp;
        printf("Vous %ctes niveau ",136);
        color(2,0);
        printf("MAX\n");
        color(15,0);
        character[10] = 999;
    }else{
        color(15,4);
        printf("Error - lvl\n");
        color(15,0);
    }
    character[2] = character[10];           //regen hp max apres chaque combat

    printf("Vous avez ");
    color(4,0);
    printf("%d ",character[2]);
    color(15,0);
    printf("HP\n");

    printf("Votre potion peut rendre un total de ");
    color(1,0);
    printf("%d"),character[9];
    color(15,0);
    printf(" HP.\n");
    color(4,0);
    printf("Attention ! ");
    color(15,0);
    printf("A ce lvl, vous ne pouvez avoir que ");
    color(4,0);
    printf("[%d ",character[10]);
    color(2,0);
    printf("HP ");
    color(4,0);
    printf("MAX]\n");
    color(15,0);
    printf("Votre epee est level %d.\n",character[3]);
}

void setMob(int whatMob, int *mob){
    if(whatMob == 1){
        mob[0] = "Crocabulia";  // Nom
        mob[1] = 1000;          // Pdv
        mob[2] = 300;           // Attaque
    }else if(whatMob == 2){
        mob[0] = "Dragnil";     // Nom
        mob[1] = 300;           // Pdv
        mob[2] = 125;           // Attaque
    }else if(whatMob == 3){
        mob[0] = "Dragoune";    // Nom
        mob[1] = 125;           // Pdv
        mob[2] = 50;            // Attaque
    }else if(whatMob == 4){
        mob[0] = "Dragoeuf";    // Nom
        mob[1] = 50;            // Pdv
        mob[2] = 10;            // Attaque
    }else{
        color(15,4);
        printf("Erreur function setMob. Probably name or var whatMob\n");
        color(15,0);
    }
}

void endGame(int result, int *character){
    if(result == 1){
        ingameText(777,character);
    }else if(result == 0){
        ingameText(888,character);
    }else if(result == 2){
        ingameText(999,character);
    }
}

int moove(int direction, int *character){
    int colide = 0;
    switch(direction){
        case 1: // Nord
            if(character[6]-1 > 0){
                return 1;
            }else{
                return 0;
            }
            break;
        case 2: // Sud
            if(character[6]+1 < 19){
                return 1;
            }else{
                return 0;
            }
            break;
        case 3: // Est
            if(character[5]-1 > 0){
                return 1;
            }else{
                return 0;
            }
            break;
        case 4: // Ouest
            if(character[5]+1 < 19){
                return 1;
            }else{
                return 0;
            }
            break;
        default:
            color(15,4);
            printf("Erreur function moove() probably with var direction or with the break in the switch case\n");
            color(15,0);
    }
}

void printMap(int (*map)[20], int x, int y){
    int j,i = 0;
    while(i < 20){
        j = 0;
        while(j < 20){
            if(j == x && i == y){
                printf("P");
            }else if(j > 0 && j < 10 && i > 0 && i < 10){ // Zone Rouge | BOSS
                color(0,4);
                printf("%c",map[i][j]);
                color(15,0);
            }else if(j > 9 && j < 19 && i > 0 && i < 10){   // Zone Jaune | Difficile
                color(0,6);
                printf("%c",map[i][j]);
                color(15,0);
            }else if(j > 9 && j < 19 && i > 9 && i < 19){   // Zone Bleu | Intermediaire
                color(0,9);
                printf("%c",map[i][j]);
                color(15,0);
            }else if(j > 0 && j < 10 && i > 9 && i < 19){   // Zone  Verte | D�butant
                color(0,2);
                printf("%c",map[i][j]);
                color(15,0);
            }else if(map[i][j] == ' '){
                printf("%c",map[i][j]);
            }else{
                printf("%d",map[i][j]);
            }
            printf(" ");
            j+=1;
        }
        printf("\n");
        i+=1;
    }
    printf("\n");
}

int whereIsPlayer(int *character){
    int j = character[5];
    int i = character[6];
    if(j > 0 && j < 10 && i > 0 && i < 10){ // Zone Rouge | BOSS
        return 4;
    }else if(j > 9 && j < 19 && i > 0 && i < 10){   // Zone Jaune | Difficile
        return 3;
    }else if(j > 9 && j < 19 && i > 9 && i < 19){   // Zone Bleu | Intermediaire
        return 2;
    }else if(j > 0 && j < 10 && i > 9 && i < 19){   // Zone  Verte | D�butant
        return 1;
    }
    return 5;
}

int atkPlayer(int *character){
    character[1];
    int lvl_1 = 25;
    int lvl_2 = 65;
    int lvl_3 = 145;
    int lvl_4 = 265;
    int lvl_5 = 500;
    int dpsEpee;
    if(character[3] == 1){
        dpsEpee = 5;
    }else if(character[3] == 2){
        dpsEpee = 13;
    }if(character[3] == 3){
        dpsEpee = 27;
    }if(character[3] == 4){
        dpsEpee = 42;
    }if(character[3] == 5){
        dpsEpee = 72;
    }
    if(character[1] >= 0 && character[1] < lvl_1){
        return 22+dpsEpee;
    }else if(character[1] > lvl_1 && character[1] < lvl_2){
        return 85+dpsEpee;
    }else if(character[1] > lvl_2 && character[1] < lvl_3){
        return 175+dpsEpee;
    }else if(character[1] > lvl_3 && character[1] < lvl_4){
        return 215+dpsEpee;
    }else if(character[1] > lvl_4 && character[1] < lvl_5){
        return 342+dpsEpee;
    }else if(character[1] >= lvl_5){
        return 425+dpsEpee;
    }else{
        color(15,4);
        printf("Error - var lvl in function atkPlayer()\n");
        color(15,0);
    }
}

void fight(int *mob,int *character,int zonePlayer){
    int i = 1;
    int j = 0;
    int random;
    int atk = atkPlayer(character);
    while(i){
        system("cls");
        title();
        printf("COMBAT\n\n\n");
        if(j == 0){
            printf("Un ");
            color(4,0);
            printf("%s ",mob[0]);
            color(15,0);
            printf("sauvage apparait !\n\n");
            if(mob[0] == "Crocabulia"){
                drake();
            }else if(mob[0] == "Dragoeuf"){
                dragoeuf();
            }else if(mob[0] == "Dragnil"){
                dragnil();
            }else if(mob[0] == "Dragoune"){
                dragoune();
            }
            j++;
        }
        color(4,0);
        printf("%s ",mob[0]);
        color(15,0);
        printf("%c ",133);
        color(4,0);
        printf("%d ",mob[1]);
        color(15,0);
        printf("hp\n");
        color(2,0);
        printf("Vous ");
        color(15,0);
        printf("avez ");
        color(4,0);
        printf("%d ",character[2]);
        color(15,0);
        printf("hp\n\n");
        printf("Que voulez vous faire ?\n1. Attaquer\n2. Prendre une potion\n3. Fuir");
        int choice = makeChoice(3);
        switch(choice){
            case 1:
                // Attaquer
                if(character[3] == 1){
                    random = rand()%10+1;
                    if(random > 0 && random < 4){
                        printf("Votre attaque a echoue\n");
                    }else{
                        mob[1] = mob[1]-atk;
                        color(2,0);
                        printf("Vous ");
                        color(15,0);
                        printf("attaquez !\n");
                        color(4,0);
                        printf("-%d\n",atk);
                        color(15,0);
                    }
                }else if(character[3] == 2){
                    random = rand()%10+1;
                    if(random > 0 && random < 3){
                        printf("Votre attaque a echoue\n");
                    }else{
                        mob[1] = mob[1]-atk;
                        color(2,0);
                        printf("Vous ");
                        color(15,0);
                        printf("attaquez !\n");
                        color(4,0);
                        printf("-%d\n",atk);
                        color(15,0);
                    }
                }else if(character[3] == 3){
                    random = rand()%10+1;
                    if(random > 0 && random < 2){
                        printf("Votre attaque a echoue\n");
                    }else{
                        mob[1] = mob[1]-atk;
                        color(2,0);
                        printf("Vous ");
                        color(15,0);
                        printf("attaquez !\n");
                        color(4,0);
                        printf("-%d\n",atk);
                        color(15,0);
                    }
                }else if(character[3] > 3){
                    mob[1] = mob[1]-atk;
                    color(2,0);
                    printf("Vous ");
                    color(15,0);
                    printf("attaquez !\n");
                    color(4,0);
                    printf("-%d\n",atk);
                    color(15,0);
                }
                break;
            case 2:
                // Potion
                if(character[9] == 0){
                    printf("Votre potion est vide !\n");
                    continue;
                }else{
                    printf("POPO DE VIE !\n");
                    int lostPdv = character[10] - character[2];
                    if(character[9] == lostPdv){
                        character[2] = character[10];
                        printf("Vous regagnez, %d HP.\n",character[9]);
                        character[9] = 0;
                    }else if(character[9] < lostPdv){
                        character[2] = character[2]+character[9];
                        printf("Vous regagnez, %d HP.\n",character[9]);
                        character[9] = 0;
                    }else if(character[9] > lostPdv){
                        character[9] = character[9]-lostPdv;
                        character[2] = character[10];
                        printf("Vous regagnez, %d HP.\n",lostPdv);
                    }

                }
                break;
            case 3:
                // Fuite
                printf("Vous prenez la fuite !\n");
                i = 0;
                break;
            default:
                color(15,4);
                printf("Erreur function fight() probably with var choice or with the break in the switch case\n");
                color(15,0);
        }
        if(mob[1] > 0){
            color(4,0);
            printf("\n%s ",mob[0]);
            color(15,0);
            printf("vous ");
            printf("attaque !\n");
            color(4,0);
            printf("-%d\n",mob[2]);
            color(15,0);
            character[2] = character[2]-mob[2];
        }else{
            int xp;
            if(zonePlayer == 1){
                xp = 12;
                character[1] = character[1]+xp;
            }else if(zonePlayer == 2){
                xp = 31;
                character[1] = character[1]+xp;
            }else if(zonePlayer == 3){
                xp = 69;
                character[1] = character[1]+xp;
            }else if(zonePlayer == 4){
                xp = 132;
                character[1] = character[1]+xp;
            }
            printf("Vous gagnez %d xp.\n",xp);
            i = 0;
            printf("Vous avez gagne le combat !\n");
            printf("Vos PDV sont regenere \n");
            character[2] = character[10];
        }
        if(character[2] <= 0){
            break;
        }
        system("pause");
    }
}

void adventure(int *character, int mob, int *boss){ // L� on va foutre toute les aleatoire d'apparition mob ou objet selon la position sur la map
    srand(time(NULL));
    int epeetrouve;
    int random = rand()%20+1;
    int zonePlayer = whereIsPlayer(character);

    if(zonePlayer == 1){    // Set les valeurs du mobs ici dans la boucle pour qu'ils puissent se regenerer � chaque tour de boucle
        setMob(4,mob);
    }else if(zonePlayer == 2){
        setMob(3,mob);
    }else if(zonePlayer == 3){
        setMob(2,mob);
    }
    if(zonePlayer == 4){
        if(random > 0 && random < 3){
            // Tombe sur le boss
            fight(boss,character,zonePlayer);
        }else if(random > 5 && random < 9){ // Tombe sur une potion
            int randompotion = rand()%2+1;
            if (randompotion == 1){
                printf("Au d%ctour d'un ruisseau tu croise un petit coffre. Tu l'ouvres et tu trouves une potion.La chance est avec toi\n",130);
                system("pause");
            }
            else if (randompotion == 2){
                printf("Tu croise un marchand qui te donne gentillement une potion. Tu as un peux de chance dans cette malchance.\n");
                system("pause");
            }
        }else if(random > 8 && random < 12){ // Tombe sur une epee
            int randomEpee = rand()%3+1;
            if (randomEpee == 1){
                printf("Tu vois quelque chose qui d%cpasse d'un rocher, tu t'approche c'est une %cpee. La chance te sourit ! \n",130,130);
                epeeTrouveSelonZone(character, zonePlayer, epeetrouve);
            }else if (randomEpee == 2){
                printf("Tu rentre dans une maison et tu trouve au dessus de la chemin%ce une %cp%ce de guerre. La chance !\n",130,130,130);
                epeeTrouveSelonZone(character, zonePlayer, epeetrouve);
            }else if (randomEpee == 3){
                printf("Tu tr%cbuche sur quelque chose, tu regarde par terre. C'est une %cp%ce qui est enfouis dans la terre. Tu met toute ta force pour la retirer d'ici. Elle ressemble %ctrangement %c l'%cp%ce d'Excalibur\n",130,130,130,130,133,130,130);
                epeeTrouveSelonZone(character, zonePlayer, epeetrouve);
            }
            system("pause");
        }else{
            random = rand()%3+1;
            if (random==1){
                printf("Il commence %c pleuvoir vous allez vous abriter sous un arbre.\n",133);
            }
            else if (random==2) {
                printf("Vous marchez dans la for%ct, il fait beau, le soleil tape.\n",136);
            }
            else if (random==3){
                printf("Continue de chercher le boss mdr\n");
            }
            system("pause");
        }
    }else{
        if(random > 0 && random < 6){
            // Tombe sur un mob
            fight(mob,character,zonePlayer);
        }else if(random > 5 && random < 9){ // Tombe sur une potion
            int randompotion = rand()%2+1;
            if (randompotion == 1){
                printf("Au d%ctour d'un ruisseau tu croise un petit coffre. Tu l'ouvres et tu trouves une potion.La chance est avec toi\n",130);
                system("pause");
            }
            else if (randompotion == 2){
                printf("Tu croise un marchand qui te donne gentillement une potion. Tu as un peux de chance dans cette malchance.\n");
                system("pause");
            }
        }else if(random > 8 && random < 12){
            // Tombe sur une epee
            int randomEpee = rand()%3+1;
                if (randomEpee == 1){
                    printf("Tu vois quelque chose qui d%cpasse d'un rocher, tu t'approche c'est une %cpee. La chance te sourit ! \n",130,130);
                    epeeTrouveSelonZone(character, zonePlayer, epeetrouve);
                }
                else if (randomEpee == 2){
                        printf("Tu rentre dans une maison et tu trouve au dessus de la chemin%ce une %cp%ce de guerre. La chance !\n",130,130,130);
                        epeeTrouveSelonZone(character, zonePlayer, epeetrouve);
                }
                else if (randomEpee == 3){
                    printf("Tu tr%cbuche sur quelque chose, tu regarde par terre. C'est une %cp%ce qui est enfouis dans la terre. Tu met toute ta force pour la retirer d'ici. Elle ressemble %ctrangement %c l'%cp%ce d'Excalibur\n",130,130,130,130,133,130,130);
                    epeeTrouveSelonZone(character, zonePlayer, epeetrouve);
                }
                system("pause");
        }
        else{//Différznts choix
            random = rand()%5+1;
            if (random==1){
                printf("Vous voyez au loin une maison, il semble qu\'elle soit faite enti%crement de bonbon, bizarre !\n",138);
                system("pause");
            }
            else if (random==2){
                printf("Il ne se passe rien, seulement une licorne en train de boire dans l\'%ctang %c cot%c de vous.\n",130,133,130);
                system("pause");
            }
            else if (random==3){
                printf("Il commence %c pleuvoir vous allez vous abriter sous un arbre.\n",133);
                system("pause");
            }
            else if (random==4){
                printf("Vous voyez les herbes bouger devant vous, vous vous approchez... Ouf ce n\'%ctait qu\'un lapin !\n",130);
                system("pause");
            }
            else if (random==5){
                printf("Vous marchez dans la for%ct, il fait beau, le soleil tape.\n\n",136);
                system("pause");
            }
        }
    }
}

int epeeTrouveSelonZone(int *character, int zonePlayer, int epeetrouve){
    if(zonePlayer == 1){
        epeetrouve = 1;
        printf("C'est une epee de level %d !\n\n",epeetrouve);
        printf("Votre epee actuelle est level %d\n",character[3]);
        if(epeetrouve == character[3]){
            printf("Voulez vous fusionnez les deux epee ?\n1. Oui.\n2. Non.\n");
            int choiceEpee = makeChoice(2);
            if(choiceEpee == 1){
                character[3] = character[3]+1;
            }
        }else{
            printf("Vous ne pouvez pas fusionner ces deux epees.\n");
        }
    }else if(zonePlayer == 2){
        epeetrouve = 2;
        printf("C'est une epee de level %d !\n\n",epeetrouve);
        printf("Votre epee actuelle est level %d\n",character[3]);
        if(epeetrouve == character[3]){
            printf("Voulez vous fusionnez les deux epee ?\n1. Oui.\n2. Non.\n");
            int choiceEpee = makeChoice(2);
            if(choiceEpee == 1){
                character[3] = character[3]+1;
            }
        }else{
            printf("Vous ne pouvez pas fusionner ces deux epees.\n");
        }
    }else if(zonePlayer == 3){
        epeetrouve = 3;
        printf("C'est une epee de level %d !\n\n",epeetrouve);
        printf("Votre epee actuelle est level %d\n",character[3]);
        if(epeetrouve == character[3]){
            printf("Voulez vous fusionnez les deux epee ?\n1. Oui.\n2. Non.\n");
            int choiceEpee = makeChoice(2);
            if(choiceEpee == 1){
                character[3] = character[3]+1;
            }
        }else{
            printf("Vous ne pouvez pas fusionner ces deux epees.\n");
        }
    }else if(zonePlayer == 4){
        epeetrouve = 4;
        printf("C'est une epee de level %d !\n\n",epeetrouve);
        printf("Votre epee actuelle est level %d\n",character[3]);
        if(epeetrouve == character[3]){
            printf("Voulez vous fusionnez les deux epee ?\n1. Oui.\n2. Non.\n");
            int choiceEpee = makeChoice(2);
            if(choiceEpee == 1){
                character[3] = character[3]+1;
            }
        }else{
            printf("Vous ne pouvez pas fusionner ces deux epees.\n");
        }
    }
}
