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

  const double PI = 3.14;
  const double RADIUS = 5.4;

    float area;                            // definition of area of circle
    float circumference;                // definition of circumference
    circumference = 2 * PI * RADIUS;    // computes circumference
    area = PI * (RADIUS    * RADIUS);        // computes area

    cout << "The circumference of the circle is " << circumference << " units \n"; // Fill in the code for the cout statement that will output (with description)
    // the circumference
    cout << "The area of the circle is " << area << " units squared \n";
    // Fill in the code for the cout statement that will output (with description)
    // the area of the circle

    return 0;
  
}

