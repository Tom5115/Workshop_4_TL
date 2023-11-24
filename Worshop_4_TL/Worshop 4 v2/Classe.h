#pragma once
using namespace std;
#include <string>


class Objet2D
{
protected:
	int dim1;
	int dim2;
public:
	Objet2D();
	Objet2D(int tdim1, int tdim2);
	virtual int getPerimetre();
	virtual int getAire();
	virtual std::string afficheInfo();
};

class Rectangle : public Objet2D
{
public:
	Rectangle();
	Rectangle(int tdim1, int tdim2);
	int getLongueur();
	int getLargeur();
	virtual int getPerimetre();
	virtual int getAire();
	virtual std::string afficheInfo();
};

class Cube : public Rectangle
{
public:
	Cube();
	Cube(int tcote);
	int getCote();
	virtual int getPerimetre();
	virtual int getAire();
	virtual std::string afficheInfo();
};

//---------------------------------------------------------LISTE------------------------------------------------------------

class place {
public:
	std::string data;
	place* next;
	place(std::string data);
};

class listechaine {
	place* head;
	place* tail;

public:
	listechaine();
	void addFront(place* newNode);
	void addBack(place* newNode);
	void affichelist();
	void deleteInd(int index);
};