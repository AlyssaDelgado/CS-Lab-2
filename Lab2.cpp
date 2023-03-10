// Alyssa Delgado

#include <iostream>                
using namespace std;

int main ()

{
  
  cout << "--------------------------------" << endl;
  cout<<"Alyssa Delgado"<<endl;
  cout<< "Computer Science 1"<<endl;
  cout<<"Lab 2"<<endl;
  cout<<"February 2, 2023"<<endl;
  cout << "--------------------------------" << endl;

const double LENGTH = 8;
const double WIDTH = 3;

    float area;                            // definition of area of a rectangle
    float perimeter;                    // definition of perimeter of a rectangle
    perimeter = 1 * (2 * LENGTH + 2 * WIDTH);    // computes perimeter
    area = LENGTH * WIDTH;                // computes area

    cout << "The perimeter of the rectangle is " << perimeter << " units \n"; // Fill in the code for the cout statement that will output (with description)
    // the perimeter of the rectangle
    cout << "The area of the rectangle is " << area << " units squared \n";
    // Fill in the code for the cout statement that will output (with description)
    // the area of the rectangle

    return 0;
  
}
