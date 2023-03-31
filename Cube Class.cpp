#include<iostream>
using namespace std;

//rectangular cube class

class RectanglularCube {

private:

    int length;
    int width;
    int height;

public:
//no-argument constructor
    RectanglularCube() {
//initialize all to 0
        length = 1;
        width = 1;
        height = 1;

    }

    RectanglularCube(int L, int W, int H) {
        length = L;
        width = W;
        height = H;
    }

//get sides

    inline double getLength() {
        return length;
    }

    inline double getWidth() {
        return width;
    }

    inline double getHeight() {
        return height;
    }

//set sides
    void setLength(float x) {
        length = x;
    }

    void setWidth(float x) {
        width = x;
    }

    void setHeight(float x) {
        height = x;
    }
//Calculations
  double volume(){
    return length * width * height;
}
double surfaceArea(){
    return ((2 * length * width) + (2 * width * height) + (2 * height * length));
}
};
int main(){

    RectanglularCube cube1;

    RectanglularCube cube2(12, 24, 36);

    cout << "Volume of the 1st cube is: " << cube1.volume() << endl;

    cout << "Surface area of the 1st cube is: " << cube1.surfaceArea() << endl << endl;

    cout << "Volume of the 2nd cube is: " << cube2.volume() << endl;

    cout << "Surface area of the 2nd cube is: " << cube2.surfaceArea() << endl << endl;

    cube1.setLength(5);

    cout << "Volume of the 1st cube is: " << cube1.volume() << endl;

    cout << "Surface area of the 1st cube is: " << cube1.surfaceArea() << endl << endl;

    RectanglularCube cube3 = cube1;

    cout << "Volume of the 3rd cube is: " << cube3.volume() << endl;

    cout << "Surface area of the 3rd cube is: " << cube1.surfaceArea() << endl << endl;
}
