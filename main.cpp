#include "shape.h"
#include "triangle.h"
#include "isosceles.h"
#include "ellipse.h"
#include "circle.h"
#include "rectangle.h"
#include "square.h"

#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::vector;

size_t Menu();
void DeleteShapes(vector<Shape*>& shapes);

int main() {
	vector<Shape*> shapes;
	int menuOption;
	while ( (menuOption = Menu()) != 11){
		if (menuOption == 1){

		}else if (menuOption == 2){

		}else if (menuOption == 3){

		}else if (menuOption == 4){

		}else if (menuOption == 5){

		}else if (menuOption == 6){

		}else if (menuOption == 7){

		}else if (menuOption == 8){

		}else if (menuOption == 9){

		}else if (menuOption == 10){

		}else{
			cerr << "This should never happen!" << endl;
			break;
		}
	}
	DeleteShapes(shapes);
	return 0;
}

size_t Menu(){
	int option = 0;
	while(true){
		cout << "1. Add an Ellipse" << endl;
		cout << "2. Add a Circle" << endl;
		cout << "3. Add a Triangle" << endl;
		cout << "4. Add an Isosceles Triangle" << endl;
		cout << "5. Add a Rectangle" << endl;
		cout << "6. Add a Square" << endl;
		cout << "7. List all Ellipses" << endl;
		cout << "8. List all Triangles" << endl;
		cout << "9. List all Rectangles" << endl;
		cout << "10. List all Shapes" << endl;
		cout << "11. Exit" << endl;

		cin >> option;
		if (cin.fail()){
			cin.clear();
			cin.ignore(255, '\n');
			cerr << "Incorrect input!" << endl;
			continue;
		}
		if (option < 1 || option > 11){
			cerr << "Incorrect menu option!" << endl;
			continue;
		}
		break;
	}
	return static_cast<size_t>(option);
}
void DeleteShapes(vector<Shape*>& shapes){
	for (Shape* shape : shapes)
		delete shape;
}
