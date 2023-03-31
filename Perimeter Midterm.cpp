#include <iostream>
#include <cmath>
using namespace std;

//Perimeter of a triangle
int main(){


//Declare variable 
double x1, x2, x3, y1, y2, y3;//Coordinates for triangle

//Prompt User
cout << "Please Enter x1-coordinate: " << endl;
cin >> x1; 
cout << "Please Enter x2-coordinate: " << endl;
cin >> x2; 
cout << "Please Enter x3-coordinate: " << endl;
cin >> x3; 
cout << "Please Enter y1-coordinate: " << endl;
cin >> y1; 
cout << "Please Enter y2-coordinate: " << endl;
cin >> y2; 
cout << "Please Enter y3-coordinate: " << endl;
cin >> y3; 

//Calculate side lengths
double A = sqrt(pow((x2-x3), 2) + pow((y2 - y3), 2));
double B = sqrt(pow((x1-x3), 2) + pow((y1 - y3), 2));
double C = sqrt(pow((x1-x2), 2) + pow((y1 - y2), 2));
// Calc Perimeter
double perimeter = A + B + C;
//Check for valid triangles
if (A + B > C && A + C > B && C + B > A)
{
    cout << perimeter << endl;
 } else
    cout << "This is not a valid triangle!" << endl;

return 0;
}
