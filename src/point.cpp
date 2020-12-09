#include "Point.h"
#include <math.h>

Point(float x_coord,float y_coord):x(x_coord),y(y_coord){}

int& get_color(){
	return this->colorRGB;
}
float get_x(){
	return this->x;
}
float get_y(){
	return this->y;
}
float getDistance(Point &point){
	return sqrt(pow(point.x - this->x, 2) + pow(point.y - this->y, 2));
}
void set_x(float){
	this->x = value;
}
void set_y(float){
	this->y = value;
}
void info(){   
	cout<<"POINT("<<this->x<<","<<this->y<<","<<"["<<
	this->colorRGB[0]<<","<<this->colorRGB[1]<<","<<this->colorRGB[2]<<"])"<<endl;

}

bool operator==(const Point &point) const{
	return x == point.x && y == point.y;
}

bool operator!=(const Point &point) const{
	return x != point.x && y != point.y;
}

friend std::ostream &operator<<(std::ostream &os, const Point &point){
	os << "(" << point.x << "," << point.y << ")";
	return os;
}


