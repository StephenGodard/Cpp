#include<SFML/Window.hpp>
int main(){
    sf::Window Window;
    Window.create(sf::VideoMode(1366,768),"steph",sf::Style::Default);
    // on fait tourner le programme jusqu'à ce que la fenêtre soit fermée
        //   Boucle de jeu (principal)    //
        while (Window.isOpen())
        {
            // on inspecte tous les évènements de la fenêtre qui ont été émis depuis la précédente itération
            sf::Event event;
            while (Window.pollEvent(event))
            {
                // évènement "fermeture demandée" : on ferme la fenêtre
                if (event.type == sf::Event::Closed)
                    Window.close();
            }
        }
        // fin de boucle //
    return 0;
}
