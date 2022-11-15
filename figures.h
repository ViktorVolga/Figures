#pragma once

#include <SFML/Graphics.hpp>


class Figures {
	int _dim;
	int _vertex = 0;
public:
	sf::CircleShape _shape;
	Figures(int dim) ;
	virtual ~Figures() = default;
	virtual sf::CircleShape getShape();
};

class Cirkle : public Figures {
	float _radius;	
public:	
	Cirkle(int dim, float radius);	
};

class Triangle : public Figures {
	int _vertex = 3;	
public:
	Triangle(int dim);
};

class Square : public Figures {
	int _vertex = 4;
public:
	Square(int dim);
};

class Octagon : public Figures {
	int _vertex = 6;
public:
	Octagon(int dim);
};