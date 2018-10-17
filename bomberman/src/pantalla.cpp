#include <iostream>
using namespace std;
#include "pantalla.h"

juego::juego( int x, int y, std::string titulo){

    fps=6;
    ventana1 = new RenderWindow(VideoMode(x, y ), titulo);
    ventana1 ->setFramerateLimit(fps);

    gameloop();

}

void juego::gameloop(){
    while(ventana1 -> isOpen()){

      dibujar();

    }
}

void juego::dibujar(){


    ventana1 -> clear();
    ventana1 -> draw(menu1);

    ventana1 ->  display();
  }




