#include "Clust.h"



Clust::Clust(Point &&centroid, COLOR color){
	this->color = color;
	this->centroid = centroid; 
}


void Clust::update_centroid(){	
	for(vector<Point>::iterator point = this->points.begin(); point!=this->points.end();point++){
		centroid.set_x(centroid.get_x()+point->get_x());
		centroid.set_y(centroid.get_y()+point->get_y());
	}
	centroid.set_x(centroid.get_x()/(float)this->points.size());
	centroid.set_y(centroid.get_y()/(float)this->points.size());
}

void Clust::update_deviation(){
	float value_x = 0.0, value_y = 0.0;
	for(vector<Point>::iterator it = this->points.begin(); it!=this->points.end();it++){
		value_x += pow(it->get_x()-centroid.get_x(),2);
		value_y += pow(it->get_y()-centroid.get_y(),2);
	}
	this->deviation_x = pow(value_x/points.size(),0.5);
	this->deviation_y = pow(value_y/points.size(),0.5);

}

void Clust::add_point(Point && point){
	this->points.push_back(point);
	this->update_centroid();
	this->update_deviation();

}

void Clust::add_point(Point &point){
	this->points.push_back(point);
	this->update_centroid();
	this->update_deviation();

}

void Clust::show_points(){
	for(vector<Point>::iterator it = this->points.begin(); it!=this->points.end();it++){
		it->info();
	}    
}

void Clust::show_stats(){
	cout<<"centroid_Point("<<this->centroid.get_x()<<","<<this->centroid.get_y()<<")"<<endl;
	cout<<"Deviation_Values("<<this->deviation_x<<","<<this->deviation_y<<")"<<endl;

}

void Clust::delete_points(){
	this->index_points.clear();
	this->points.clear();

}


string Clust::getPoints(){
	string s = "";
	for (int p: index_points) {
		s += to_string(p) + " ";
	}
	return s;
}	
		
