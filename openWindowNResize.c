#include <SFML/Graphics.h>

int main()
{
    sfRenderWindow *window; 
    sfVideoMode video_mode = {1920, 1080, 64}; 
    sfEvent event; 

    window = sfRenderWindow_create(video_mode, "My first Window", sfClose | sfResize, NULL); 
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_display(window);
        while (sfRenderWindow_pollEvent(window, &event)) {
                    if (event.type == sfEvtClosed)
                        sfRenderWindow_close(window);  
        }
    }
}
