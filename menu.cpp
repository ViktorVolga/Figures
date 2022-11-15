#include "menu.h"

void MainMenu()
{
	sf::RenderWindow window(sf::VideoMode(500, 200), "Have a good day");
	Cirkle a(50, 50.f);
	Triangle t(65);
	Square sq(50);
	Octagon oc(50);
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event))
		{			
			if (event.type == sf::Event::Closed)
				window.close(); 
		}
		window.clear(sf::Color::White);		
		window.draw(a.getShape());
		window.draw(t.getShape());
		window.draw(sq.getShape());
		window.draw(oc.getShape());
		window.display();
		
	}
}
