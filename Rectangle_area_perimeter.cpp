#include <iostream>
using namespace std;

class Rectangle 
{
	private:
    double length;
    double width;

	public:
    
    Rectangle(double l, double w) : length(l), width(w) {}

    
    void setLength(double l) 
	{
        if (l > 0) {
            length = l;
        } else {
            cout << "Invalid length value. Length must be positive." << endl;
        }
    }

    
    void setWidth(double w) 
	{
        if (w > 0) {
            width = w;
        } else {
            cout << "Invalid width value. Width must be positive." << endl;
        }
    }

    
    double getLength() const 
	{
        return length;
    }

    
    double getWidth() const 
	{
        return width;
    }

   
    double calculateArea() const 
	{
        return length * width;
    }

    
    double calculatePerimeter() const 
	{
        return 2 * (length + width);
    }
};

int main() 
{
    
    Rectangle myRectangle(10.0, 5.0);

    
    cout << "Length: " << myRectangle.getLength() << endl;
    cout << "Width: " << myRectangle.getWidth() << endl;

    
    double area = myRectangle.calculateArea();
    cout << "Area: " << area << endl;

    
    double perimeter = myRectangle.calculatePerimeter();
    cout << "Perimeter: " << perimeter << endl;

    
    myRectangle.setLength(15.0);
    myRectangle.setWidth(7.5);

    
    cout << "Updated Length: " << myRectangle.getLength() << endl;
    cout << "Updated Width: " << myRectangle.getWidth() << endl;

    
    area = myRectangle.calculateArea();
    cout << "Updated Area: " << area << endl;

    
    perimeter = myRectangle.calculatePerimeter();
    cout << "Updated Perimeter: " << perimeter << endl;

    return 0;
}

