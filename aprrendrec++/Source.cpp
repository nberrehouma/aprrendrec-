#include <iostream>
#include <ostream>
#include <vector>
#include <fstream>
#include <string>
#include<algorithm>
#include<iterator>
#include "List.h"
using namespace std;

/* ------------ D�claration du type point ------------- */
struct point
{ /* d�claration "classique" des donn�es */
	int x;
	int y;
	/* d�claration des fonctions membre (m�thodes) */
	void initialise(int, int);
	void deplace(int, int);
	void affiche();
};

void read(istream& in, vector<string>& text) 
{
	string line;
	while (getline(in, line))
	{
		text.push_back(line);

	}
}

void echanger( int& ,  int& );
int main(int argc, char* argv[]) 
{
	
	List<int> l;
	//l.insererHead(8);
	return EXIT_SUCCESS;
}

void point::initialise(int a, int b) { x = a; y = b; }
void point::affiche() { cout << "(" << x << "," << y<<")"; }
void point::deplace(int a, int b) { x += a; y += b; }

void echanger( int & a,int & b) 
{

	int c = a;
	a = b;
	b = c;
}