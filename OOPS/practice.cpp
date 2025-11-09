#include<iostream>
using namespace std;

// class A{
//     public:
//     A()
//     {
//         cout<<"ctor of A"<<endl;
//     }
//     ~A()
//     {
//         cout<<"dtor of A"<<endl;
//     }
// };
// class B:public A{
//     public:
//     B()
//     {
//         cout<<"ctor of B"<<endl;
//     }
//     ~B()
//     {
//         cout<<"dtor of B"<<endl;
//     }
// };
// class C:public B{
//     public:
//     C()
//     {
//         cout<<"ctor of C"<<endl;
//     }
//     ~C()
//     {
//         cout<<"dtor of C"<<endl;
//     }
// };

class student{
    int marks;
    public:
    student(){}
    student(int x)
    {
        marks = x;
    }
};



int main()
{
    student s1(100);
    student s2();
    student s3 = 100;


    return 0;
}