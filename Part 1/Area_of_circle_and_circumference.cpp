#include <iostream>
#include <cmath>
using namespace std;

class Circle 
{
	private:
    double radius;

	public:
    
    Circle(double r) : radius(r) {}

    
    void setRadius(double r) 
	{
        if (r > 0) {
            radius = r;
        } else {
            cout << "Invalid radius value. Radius must be positive." << endl;
        }
    }

    
    double getRadius() const 
	{
        return radius;
    }

    
    double calculateArea() const 
	{
        return M_PI * radius * radius;
    }

    
    double calculateCircumference() const 
	{
        return 2 * M_PI * radius;
    }
};

int main() 
{
    
    Circle myCircle(5.0);

    
    cout << "Radius: " << myCircle.getRadius() << endl;

    
    double area = myCircle.calculateArea();
    cout << "Area: " << area << endl;

    
    double circumference = myCircle.calculateCircumference();
    cout << "Circumference: " << circumference << endl;

   
    myCircle.setRadius(10.0);

    
    cout << "Updated Radius: " << myCircle.getRadius() << endl;

    
    area = myCircle.calculateArea();
    cout << "Updated Area: " << area << endl;

    
    circumference = myCircle.calculateCircumference();
    cout << "Updated Circumference: " << circumference << endl;

    return 0;
}

