#include "figures.h"

Figures::Figures(int dim){
	this->_dim = dim; 
}

sf::CircleShape Figures::getShape()
{
	return _shape;
}

Cirkle::Cirkle(int dim, float radius) : Figures(dim)
{
	this->_radius = radius;	
	sf::CircleShape circle(radius);
	this->_shape = circle;	;
	_shape.setFillColor(sf::Color(230, 0, 230));
	_shape.move(15, 15);
}



Triangle::Triangle(int dim) : Figures (dim)
{	
	sf::CircleShape tr(dim, _vertex);
	this->_shape = tr;
	_shape.setPosition(125, 0); 
	_shape.setFillColor(sf::Color::Blue);
}

Square::Square(int dim) : Figures (dim)
{
	sf::CircleShape sq(dim, _vertex);
	this->_shape = sq;
	_shape.setPosition(250, 0);
	_shape.setFillColor(sf::Color::Blue);
}

Octagon::Octagon(int dim) : Figures(dim)
{
	sf::CircleShape sq(dim, _vertex);
	this->_shape = sq;
	_shape.setPosition(380, 0);
	_shape.setFillColor(sf::Color::Black);
}
