#include <SFML/Graphics.hpp>
#include <menu_del_juego.h>

using namespace sf;

class juego{

    public:

        juego(int x, int y, std::string titulo);

        void gameloop();

        void dibujar();



    private:



    RenderWindow * ventana1;
    menu menu1;


    int fps;

};
