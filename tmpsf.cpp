#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <SFML/Graphics.hpp>
/*
 * hello! this file is just a template that ill be using to create stuff with sfml @2.5.1
 * note for compiling and linking! -std=c++[11,14,17,20...]
 * step 1 : g++ -c sfml.cpp -I Home/Desktop/SFML-2.5.1/include 
 * step 2 : g++ sfml.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system
 * step 3 : ./sfml-app
 * */
using namespace std;

class Entity : public sf::Drawable , public sf::Transformable{
	public :
		// constructor maybe and other public methods

	private :
		// the draw method 
	virtual void draw(sf::RenderTarget& target,sf::RenderStates states) const{
	states.transform *= getTransform();
	states.texture = NULL;
	target.draw(vertices,states); // change vertices 
	}
	private :
		// other private data i.e sf::VertexArray
	sf::VertexArray vertices;
	

};
// main function 
int main(){
	sf::RenderWindow window(sf::VideoMode(512,256),"window-name");
	// other declaration here!
	


	// handling events
	while(window.isOpen()){
		sf::Event event;
		while(window.pollEvent(event)){
		if (event.type == sf::Event::Closed){
			window.close();
		}
		
		
		}

		// other declaration 
		// ...


		// render and draw things to the screen
		window.clear();
		window.draw();
		window.display();
	
	
	}





return 0;
}

// end of the file !


