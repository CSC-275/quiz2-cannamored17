#include <iostream>
#include <cmath>

class Circle {
// complete declaration for Circle class here
private:
    double m_radius;

protected:
    double m_area;

    static double calcArea (const double radius) {
        return M_PI*radius * radius;
    }


public:
    Circle() {
        m_radius = 1.0 ;
        m_area = 3.14;
    }

    Circle( double radius) {
        m_radius = radius;
        m_area = calcArea(radius);

    }
    virtual void display() const {
        std::cout << "The area of a circle with..."<< std::endl;
        std::cout << "a radius of " << m_radius << " inches" << std::endl;
        std::cout << "has an area of " << m_area << " square inches \n" << std::endl;
    }
    double getRadius() const {
        return m_radius;

    }
    double getArea() const {
        return m_area;
    }
    virtual Circle()
};

class Cylinder : public Circle {
// complete declaration for Cylinder class here
private:
        double m_height;
        double m_volume;
        double calcVolume(double radius, double height) const {
        return M_PI * radius* radius* height;
        }
public:
        Cylinder(){
            m_height = 3.5;
            m_volume = 8.65;
        }
        Cylinder( double radius, double height): Circle(radius) {
            m_height = height;
            m_volume = calcVolume(radius, height);

        }

};

int main() {
    Circle c1, c2(5.25);
    c1.display();
    c2.display();
   Circle *cl1 = new Cylinder(3.5,8.65);
    cl1->display();

    delete cl1;
    return 0;
}
//I got stuck and tried to follow off of bank account example