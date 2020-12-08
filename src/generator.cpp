#include <fstream>
#include "generator.h"
void generate_random_points(vector<Point> &points,int &&n_points,int &&max_width, int &&max_height){
	int x = 0, y = 0;
	ofstream points_file;
	points_file.open("dataset/generated_points.txt");
	for(int i=0;i<n_points;i++){
		x = rand()%max_width;
		y = rand()%max_height;
		points_file<<x<<","<<y<<endl;
		points.push_back(Point(x,y));
	}
	points_file.close();
}


