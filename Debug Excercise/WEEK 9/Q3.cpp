#include<iostream>
using namespace std;

// Debuged
// Run time polymorohism is there

class Shape {
public:
// Shape(){}
    Shape(int s) : sides(s) {}
    virtual void draw() { cout << "Drawing a shape with " << sides << " sides." << endl; }
private:
    int sides;
};

class Circle : public Shape {
public:
    Circle(int r) : Shape(r) {
        radius = r;
    } // calling base class constuctor
    void draw() { cout << "Drawing a circle with radius " << radius << "." << endl; }
private:
    int radius;
};

int main() {
    Shape* s = new Circle(5); // upcasting
    s->draw();
    delete s;
    return 0;
}