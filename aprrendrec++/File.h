#pragma once
#include "List.h"
template<class Element>
class File :public List<Element>
{
public:
	File();
	~File();
};

template<class Element>
inline File<Element>::File()
{
}

template<class Element>
inline File<Element>::~File()
{
}
