#include <SFML/Graphics.h>

int main()
{
    sfRenderWindow *window; 
    sfVideoMode video_mode = {1900, 1080, 64}; //metre les dimensions de la fenetre max, sinon bug d affichage
    sfEvent event; 

    window = sfRenderWindow_create(video_mode, "My first Window", sfClose | sfResize, NULL); // on met l'argument resize
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_display(window);
        while (sfRenderWindow_pollEvent(window, &event)) {
                    if (event.type == sfEvtClosed)
                        sfRenderWindow_close(window);  
        }
    }
}
