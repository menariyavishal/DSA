#include<iostream>
using namespace std;

// Debuged

class Parent {
public:
    // Parent(){}
    Parent(int x) : value(x) {}
    void display() { cout << "Parent: " << value << endl; }
private:
    int value;
};

class Child : public Parent {
public:
    Child(int y) : Parent(y) {}
    // void display() { cout << "Child: " << value << endl; 
private:
    int value;
};

int main() {
    Child child(10);
    child.display();
    return 0;
}