#include<iostream>
using namespace std;




class Box{
public:
	// Define l, b, h of a box
	double l, b, h;

	double getVolume(void){
		return l*b*h;
	}

};


int main(){

Box Box1;                 
Box Box2;                 
double volume;      
 
   // box 1 specification
   Box1.l  = 6.0; 
   Box1.b = 7.0; 
   Box1.h  = 5.0;

   // box 2 specification
   Box2.l  = 12.0; 
   Box2.b = 13.0; 
   Box2.h  = 10.0;

   // volume of box 1
   cout << "Volume of Box1 : " << Box1.getVolume() << endl;

   // volume of box 2
   cout << "Volume of Box2 : " << Box2.getVolume() << endl;



return 0;


}

