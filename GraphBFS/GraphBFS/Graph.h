#pragma once
/ ****************************************************
// Header file Graph.h
// An adjacency list representation of an undirected,
// weighted graph.
// ****************************************************
#include <vector>
#include <list>
#include <map>
#include "Edge.h"

using namespace std;

class Graph
{
public:
	int numVertices; // number of vertices in the graph
	int numEdges; // number of edges in the graph

	// Adjacency list representation of the graph;
	// the map pair consists of the second vertex (key)
	// and the edge weight (value).
	vector<map<int, int>> adjList;

	Graph(int n);
	// Constructor.
	// Precondition: The graph is empty.
	// Postcondition: The graph is initialized to hold n
	// vertices.

	int getNumVertices() const;
	// Determines the number of vertices in the graph.
	// Precondition: None.
	// Postcondition: Returns the number of vertices in the
	// graph.

	int getNumEdges() const;
	// Determines the number of edges in the graph.
	// Precondition: None.
	// Postcondition: Returns the number of edges in the graph.

	int getWeight(Edge e) const;
	// Determines the weight of an edge.
	// Precondition: The edge exists in the graph.
	// Postcondition: Returns the weight of the edge parameter.

	void add(Edge e);
	// Creates an edge in the graph.
	// Precondition: The vertices exist in the graph.
	// Postcondition: Adds to both v and w's list.

	void remove(Edge e);
	// Removes an edge from the graph.
	// Precondition: The vertices exist in the graph.
	// Postcondition: Removes edges from both v and w's list.

	map<int, int>::iterator findEdge(int v, int w);
	// Finds the edge connecting v and w.
	// Precondition: The edge exists.
	// Postcondition: Returns an iterator to map key w in
	// vector[v].
};
// End of header file
