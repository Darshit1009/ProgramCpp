
#include<iostream>
using namespace std;
class Shape{
    private:
        int r;
        int l;
        int h;
    public:
        void draw(int radius){
            cout<<"draw circle with radius"<<radius;
            r = radius;
        }
        void draw(int l, int h){
            if(l==h)
            cout<<"draw square with side "<<l;
            else
            cout<<"draw rectangle with l "<<l<<" and h "<<h;
            this->l = l;
            this->h = h;
        }
};
int main(){
    Shape circle;
    Shape rectangle;
    Shape square;
    circle.draw(5);
    square.draw(5,5);
    rectangle.draw(5,10);
    return 0;
}  