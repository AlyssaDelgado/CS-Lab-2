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

  int width, length, area, peri;
    cout<<" Input the length of the rectangle : ";
    cin>>length;
		cout<<" Input the width of the rectangle : ";
    cin>>width;
    area=(length*width);
		peri=2*(length+width);
  
    cout<<" The area of the rectangle is : "<< area << endl;
    cout<<" The perimeter of the rectangle is : "<< peri << endl;		
    cout << endl;
  
  

    return 0;
  
}
