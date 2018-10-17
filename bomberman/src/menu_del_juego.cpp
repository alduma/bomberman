#include <iostream>
using namespace std;
#include "menu_del_juego.h"



menu::menu()  : sf::Sprite(){


      textura1 = new Texture;

      textura1 -> loadFromFile("a.png");

      this ->setPosition(Vector2f(x ,y ));
      this ->setTexture(*textura1);
      this ->setScale(sf::Vector2f(tam_menu, tam_menu));


}
