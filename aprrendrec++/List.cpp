#include "List.h"
#include <stdexcept>

template <class Element>
List<Element>::List()
{
	this->suiv = nullptr;

}

template <class Element>
List<Element>::~List()
{
	delete suiv;
}

template <class Element>
int List<Element>::longueur()
{
	
	return 0;
}

template <class Element>
bool List< Element >::exist(const Element & elm)
{
return false;
}

template <class Element>
void List<Element>::insererHead( const Element& elm)
{
	
}

template<class Element>
void List<Element>::supprimerHead()
{
}

template<class Element>
int List<Element>::headElm()
{
	return 0;
}

template<class Element>
List<Element> List<Element>::queue()
{
	return List();
}




template<class Element>
bool List<Element>::isEmpty()
{
	return suiv==nullptr;
}

