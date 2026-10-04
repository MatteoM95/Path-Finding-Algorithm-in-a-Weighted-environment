#ifndef DIJKSTRA
#define DIJKSTRA

#include "Point.h"
#include "mapUtils.h"

//Class Dijkstra
class dijkstra {
    public:
        int getMinimumVertex(bool mst[], int key[]);
        int* getShortestPath();
        void printPath(int parent[], int j);
        void printDijkstra(int sourceVertex, int key[], int* parent);
        void dijkstraAlgorithm(Matrix matrix, int sourceVer, int dest);
        void createShortestPath(int* parent, int j, int i);
        Matrix createGraphAdjMatr(Matrix cloudMap);
        void retrieve_coordinate(int* i, int* j, int p, int** m);
        Point* calculatePath(Point** cloudMap, int h, int w, Point src, Point dest);
        Point* pathToCoordinate(Point** cloud, int* path);
        int findPosition(Point** cloud, Point pp, int row, int col);
        void displayPathOnConsole(Matrix matrix);
        Matrix getAdjMatrix();
        int getValueMatrix(int pos);
        int getLenghtPath();

        //GRAPH
    private:
        int rowsMap = 0;               //rows adjacency matrix
        int colsMap = 0;               //cols adjacency matrix
        int sourceVertex = 0;	    //vertex of start flight
        int destinationVertex = 0;	//vertex of ending flight
        int numVertices = 0;        //number vertices (nodes) in adjacency matrix
        int* path;                  //the shortest path
        int lengthPath = 0;         //the length of path
        Matrix adjWeightedMap;		//adjacency matrix of graph
        Matrix weightedMap;         //cloud matrix with percentage cloud
        float costPath = 0;

};

#endif