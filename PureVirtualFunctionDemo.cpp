#include <iostream>
using namespace std;

class Shape{
    public:
        /*void drawShape(){
            cout<<"drawing shape general ones..."<<endl;
        }*/
        /*virtual void drawShape(){
            cout<<"drawing shape general ones..."<<endl;   
        }*/
        virtual void drawShape() = 0;
};
class Rectangle : public Shape{
    public:
        void drawShape(){
            cout<<"drawing rectangle..."<<endl;
        }
};
class Circle : public Shape{
    public:
        void drawShape(){
            cout<<"drawing Circle..."<<endl;
        }
};
int main(){ 
    Shape *p;
    Rectangle r;
    Circle c;

    p = &r;
    p -> drawShape();

    p = &c;
    p -> drawShape();
    return 0;
}