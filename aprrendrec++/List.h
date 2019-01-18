#pragma once

template <class Element>
class List;

template<class Element>
class List
{


public:
	List();
	~List();
	int longueur();
	bool exist(const Element & elm);
	void insererHead(const Element & elm);
	void supprimerHead();
	int headElm();
	List queue();
	bool isEmpty();

private:

	Element info;
	List<Element>* suiv;
};

