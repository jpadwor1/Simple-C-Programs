#include<iostream>
using namespace std;

//rectangular cube class

class RectanglularCube {

private:


public:
    int length, L;
    int width, W;
    int height, H;
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

//P3 functions

void printCube (RectanglularCube rc){
    int L = rc.L;
    int W = rc.W;
    int H = rc.H;

    int volume = L * W * H;
    int area = ((2 * L * W) + (2 * W * H) + (2 * H * L));

    cout << "L= "<< L << endl;
    cout << "W= "<< W << endl;
    cout << "H= "<< H << endl;
    cout << "V "<< volume << endl;
    cout << "A "<< area << endl;
}

int main() {

    //Rectangular cube array

    RectanglularCube cube[5];

// Assign random values from 1 - 10
    for (int i = 0; i < 5; i++) {
        cube[i].L = 1 + rand() % 10;
        cube[i].W = 1 + rand() % 10;
        cube[i].H = 1 + rand() % 10;
    }

//Print the array of RectanglularCubes
    for (int i = 0; i < 5; i++) {
        cout << "Cube " << (i + 1) << " properties" << endl;
        printCube(cube[i]);

    }
    return 0;
}
