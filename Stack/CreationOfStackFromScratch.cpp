#include<iostream>

using namespace std;

class stack
{
    public:
        int* arr;
        int size;
        int top;
        stack(int capacity)
        {
            arr = new int[capacity];
            size = capacity;
            top = -1;
        }

        void push(int val)
        {
            if(top == size-1)
            {
                // toh stack already full h , agr value insert karunga to stack overflow ho jayega
                cout<< "Stack Overflow"<<endl;
            }
            else
            {
                // stack me jgh h, element insert krr skte h
                top++;
                arr[top] = val;
            }
        }

        void pop()
        {
            if(top == -1)
            {
                // stack me koi bhi element nhi h, stack already khali h, hum koi bhi element pop nhi krr skte
                cout<<"Stack Underflow"<<endl;
            }
            else
            {
                //normal case
                arr[top] = -1;
                top--;
            }

        }

        int getSize()
        {
            return top + 1;
        }

        bool isEmpty()
        {
            if(top == -1) return true;
            else return false;
        }

        int getTop()
        {
            if(top == -1)
            {
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            else
            {
                return arr[top];
            }
        }

        void print()
        {
            cout<<"Printing Stack"<<endl;
            for(int i =0; i<size;i++)
            {
                cout<<arr[i]<<" ";
            }cout<<endl;
        }
};

int main()
{
    stack s(5);
    // s.print();
    // s.pop(); 
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     // s.print();
//     // s.push(60);
//     // s.print();

//    cout<< s.getTop()<<endl;
//     cout<<s.getSize()<<endl;
//     cout<<s.isEmpty()<<endl;

//     s.pop();
//     s.print();





    return 0;

}