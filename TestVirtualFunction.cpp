#include <iostream>
using namespace std;

class Box{
    private:
        int l, b;
    public:
        virtual void getDimensions(){
            cout<<"Enter length : "<<endl;
            cin>>l;
            cout<<"Enter breadth : "<<endl;
            cin>>b;
        }
        virtual void displayDimensions(){
            cout<<"Length : "<<l<<endl;
            cout<<"Breadth : "<<b<<endl;
        }   
};
class SquareBox : public Box{
    //case 1: empty class SqaureBox --> early binding seen
    public:
        int side;
    // case 2: new methods invoking parent class methods  --> early binding 
        /*void setDimensions(){
            getDimensions();
        }    
        void show(){
            displayDimensions();
        }*/

    //case 3:  -- explicit overriding of methods --> early binding
   /* void getDimensions(){
        cout<<"Enter side : "<<endl;
        cin>>side;
    }
    void displayDimensions(){
        cout<<"Side : "<<side<<endl;
    }*/
    //case 4:
    void getDimensions(){
        cout<<"Enter side : "<<endl;
        cin>>side;
    }
    void displayDimensions(){
        cout<<"Side : "<<side<<endl;
    }
};
int main(){

    //early binding
    /*SquareBox s = SquareBox();
    s.getDimensions();
    s.displayDimensions();*/

    //runtime/dynamic binding
    Box *b1;
    SquareBox sq;
    b1 = &sq;
    b1 -> getDimensions();
    b1 -> displayDimensions();   // dynamically the parent class method got bound 

    return 0;
}