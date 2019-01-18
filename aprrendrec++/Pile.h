#pragma once
#include "List.h"
template< class Element >
class Pile :
	public List<Element>
{
public:
	Pile();
	virtual ~Pile();
};

template<class Element>
inline Pile<Element>::Pile()
{
}

template<class Element>
inline Pile<Element>::~Pile()
{
}
