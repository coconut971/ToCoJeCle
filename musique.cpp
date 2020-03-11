#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <fmodex/fmod.h>



int main(int argc, char *argv[])


{
    SDL_Surface *ecran = NULL ;
    SDL_Event event;
    SDL_Rect position;
    int continuer = 1;

    FMOD_SYSTEM *system;
    FMOD_SOUND *musique;
    FMOD_RESULT resultat;


    FMOD_System_Create(&system);
    FMOD_System_Init(system, 1, FMOD_INIT_NORMAL, NULL);

    /* On ouvre la musique */
    resultat = FMOD_System_CreateSound(system, "hype_home.mp3", FMOD_SOFTWARE | FMOD_2D | FMOD_CREATESTREAM, 0, &musique);

    /* On vérifie si elle a bien été ouverte (IMPORTANT) */
    if (resultat != FMOD_OK)
    {
        fprintf(stderr, "Impossible de lire le fichier mp3\n");
        exit(EXIT_FAILURE);
    }

    /* On active la répétition de la musique à l'infini */
    FMOD_Sound_SetLoopCount(musique, -1);

    /* On joue la musique */
    FMOD_System_PlaySound(system, FMOD_CHANNEL_FREE, musique, 0, NULL);

    SDL_Init(SDL_INIT_VIDEO);

    ecran = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
    SDL_WM_SetCaption("Gestion du son avec FMOD", NULL);
    printf("Salut");


    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
        case SDL_QUIT:
            continuer = 0;
            break;
        case SDL_KEYDOWN:
            if (event.key.keysym.sym == SDLK_p) //Si on appuie sur P
            {
                FMOD_CHANNELGROUP *canal;
                FMOD_BOOL etat;
                FMOD_System_GetMasterChannelGroup(system, &canal);
                FMOD_ChannelGroup_GetPaused(canal, &etat);

                if (etat) // Si la chanson est en pause
                    FMOD_ChannelGroup_SetPaused(canal, 0); // On enlève la pause
                else // Sinon, elle est en cours de lecture
                    FMOD_ChannelGroup_SetPaused(canal, 1); // On active la pause


            }
            break;
        }



    }

    FMOD_Sound_Release(musique);
    FMOD_System_Close(system);
    FMOD_System_Release(system);


    SDL_Quit();


    return EXIT_SUCCESS;
}


