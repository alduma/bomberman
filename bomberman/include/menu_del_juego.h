#include <iostream>
#include <SFML/Graphics.hpp>


using namespace sf;


class menu : public sf::Sprite {

    public:


      int x=200,y=50;
      float tam_menu= 1.335;
      menu();


    private:
      Texture * textura1;


};
