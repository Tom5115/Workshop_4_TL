#include "pch.h"
#include<iostream>

using namespace std;


Objet2D::Objet2D()
{
}

Objet2D::Objet2D(int tdim1, int tdim2)
{
	this->dim1 = tdim1;
	this->dim2 = tdim2;
}

int Objet2D::getPerimetre()
{
	int perim = 2 * dim1 + 2 * dim2;
	return perim;
}

int Objet2D::getAire()
{
	int aire = dim1 * dim2;
	return aire;
}

std::string Objet2D::afficheInfo()
{
	std::string car = "je suis un objet2D";
	return car;
}




Rectangle::Rectangle()
{
}

Rectangle::Rectangle(int tdim1, int tdim2)
{
	this->dim1 = tdim1;
	this->dim2 = tdim2;
}

int Rectangle::getPerimetre()
{
	int perim = 2 * dim1 + 2 * dim2;
	return perim;
}

int Rectangle::getAire()
{
	int aire = dim1 * dim2;
	return aire;
}

std::string Rectangle::afficheInfo()
{
	std::string str;
	str += "Rectangle\n";
	str += "Perimetre : ";
	str += to_string(getPerimetre());
	str += "\n";
	str += "Aire : ";
	str += to_string(getAire());
	return str;

}



Cube::Cube()
{
}

Cube::Cube(int tcote)
{
	this->dim1 = tcote;
	this->dim2 = tcote;
}

int Cube::getPerimetre()
{
	int perim = 2 * dim1 + 2 * dim2;
	return perim;
}

int Cube::getAire()
{
	int aire = dim1 * dim2;
	return aire;
}

std::string Cube::afficheInfo()
{
	std::string str;
	str += "Carre\n";
	str += "Perimetre : ";
	str += to_string(getPerimetre());
	str += "\n";
	str += "Aire : ";
	str += to_string(getAire());
	return str;
}

//---------------------------------------------------------LISTE------------------------------------------------------------

place::place(std::string data) {
	this->data = data;
	this->next = nullptr;
}

listechaine::listechaine() {
	head = nullptr;
	tail = nullptr;
}

void listechaine::addFront(place* newNode) {
	if (newNode == nullptr) return; 
	newNode->next = head;
	head = newNode;
	if (tail == nullptr) {
		tail = head;
	}
}


void listechaine::addBack(place* newNode) {
	if (newNode == nullptr) return; 
	if (tail == nullptr) {
		head = tail = newNode;
	}
	else {
		tail->next = newNode;
		tail = newNode;
	}
}

void listechaine::affichelist() {
	place* current = head;
	cout << "[\n";
	while (current != nullptr) {
		cout << current->data << " ";
		cout << "\n";
		current = current->next;
	}
	cout << "]" << endl;
}

void listechaine::deleteInd(int index) {
	if (head == nullptr || index < 0) return; 

	place* current = head;
	place* previous = nullptr;

	while (index > 0 && current) {
		previous = current;
		current = current->next;
		index--;
	}
	if (current == nullptr) return; 
	if (previous == nullptr) {
		head = current->next;
		if (head == nullptr) tail = nullptr; 
	}
	else {
		previous->next = current->next;
		if (previous->next == nullptr) tail = previous; 
	}
}