#ifndef CLUST_H
#define CLUST_H

#include "Point.h"
#include <string>
#include <vector>

using namespace std;

class Clust{
	private: 
		std::vector<Point> points;
		float deviation_x=0.0,
		      deviation_y=0.0;
	public:
		enum COLOR{ROJO,VERDE,AZUL};
		COLOR color = COLOR::ROJO;
		std::vector<Point> index_points;
		Point centroid = Point(0,0);
		Clust(Point &&, COLOR);
		void update_centroid();
		void update_deviation();
		void add_point(Point &&);
		void add_point(Point &);
		void show_points();
		void show_stats();
		void delete_points();
		string getPoints(); 
		
}
#endif
