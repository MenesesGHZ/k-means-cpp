class Point{
    private:
        float x=0.0,y=0.0;
        int colorRGB[3]={0,0,0};
        
    public:
        Point(float x_coord,float y_coord):x(x_coord),y(y_coord){}

        void info(){
            cout<<"POINT("<<this->x<<","<<this->y<<","<<"["<<
                this->colorRGB[0]<<","<<this->colorRGB[1]<<","<<this->colorRGB[2]<<"])"<<endl;
        }

        float get_x(){
            return this->x;
        }
        float get_y(){
            return this->y;
        }
    
        void set_x(float value){
            this->x = value;
        }
        void set_y(float value){
            this->y = value;
        }
    
    
        int* get_color(){
            return this->colorRGB;
        }
    
        bool operator==(const Point &point) const {
            return x == point.x &&
                   y == point.y;
        }
        bool operator!=(const Point &point) const {
            return !(point == *this);
        }
    
        float getDistance(Point &p) {
            return sqrt(pow(p.x - this->x, 2) + pow(p.y - this->y, 2));
        }
        
        friend std::ostream &operator<<(std::ostream &os, const Point &point){
            os << "(" << point.x << "," << point.y << ")";
            return os;
        }
}
