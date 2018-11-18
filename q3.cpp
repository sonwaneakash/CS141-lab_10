#include<iostream>
using namespace std;

// Define a class for rectangle
class rectangle{

public:
	double l, b;	// Define length and breadth of the rectangle

double area(void); //  store area of rectangle
double perimeter(void);	//  store perimeter of rectangle

};

// function that calculates and returns area
double rectangle::area(void){
return l*b;
}

// function that calculates and returns perimeter
double rectangle::perimeter(void){
return 2*(l+b);
}



int main(){

// define objects r1 and r2 of type rectangle
rectangle r1, r2;
double l, b;

// ask user to enter length and breadth of r1
cout << "Enter length of Rectangle1: ";
cin >> l;
r1.l = l;
cout << "Enter breadth of Rectangle1: ";
cin >> b;
r1.b = b;

// ask user to enter length and breadth of r2
cout << "Enter length of Rectangle2: ";
cin >> l;
r2.l = l;
cout << "Enter breadth of Rectangle2: ";
cin >> b;
r2.b = b;

// comparing area of r1 and r2
if(r1.area()==r2.area())	cout << "Area of Rectangle1 = Area of Rectangle2" << endl;
else if(r1.area()>r2.area())	cout << "Area of Rectangle1 > Area of Rectangle2" << endl;
else if(r1.area()<r2.area())	cout << "Area of Rectangle1 < Area of Rectangle2" << endl;


// comparing perimeter of r1 and r2
if(r1.perimeter()==r2.perimeter())	cout << "Perimeter of Rectangle1 = Perimeter of Rectangle2" << endl;
else if(r1.perimeter()>r2.perimeter())	cout << "Perimeter of Rectangle1 > Perimeter of Rectangle2" << endl;
else if(r1.perimeter()<r2.perimeter())	cout << "Perimeter of Rectangle1 < Perimeter of Rectangle2" << endl;



return 0;
}
