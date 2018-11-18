#include<iostream>
using namespace std;

class Box {
public:
	// Defining length and breadth
	double l, b, h;

};




int main(){

Box Box1, Box2;  
double volume;  

// Box1 specification
Box1.l = 15;
Box1.b = 12;
Box1.h = 6;

// Box2 specification
Box2.l = 9;
Box2.b = 13;
Box2.h = 14;

// volume of Box1
volume = Box1.l*Box1.b*Box1.h;
cout << "Volume of Box1 : " << volume << endl;


// volume of Box2
volume = Box2.l*Box2.b*Box2.h;
cout << "Volume of Box2 : " << volume << endl;

return 0;
}
