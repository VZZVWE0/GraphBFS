#include <iostream>
#include "Graph.h"

using namespace std;

int main()
{
	Graph g(5);
	cout << g.getNumVertices() << endl;
	Edge e(4, 1, 1);
	g.add(e);
	cout << g.getNumEdges() << endl;
	return 0;
}