void carga(int &&x_max, int &&y_max ,vector<Point> &points){
	int x = 0, y = 0;
	ofstream puntosTXT;
	puntosTXT.open("puntos-500.txt");
	for(int instancia_n = 500 ; instancia_n > 0; instancia_n--){
		x = rand()%x_max;
		y = rand()%y_max;
		puntosTXT<<x<<","<<y<<endl;
		points.push_back(Point(x,y));
	}
	puntosTXT.close();
	cout<<"DONE"<<endl;   
}

