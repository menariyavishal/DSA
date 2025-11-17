#include <iostream>

using namespace std;

class NStack
{
public:
    int *arr, *top, *next;
    int freespot; // gives free space available in arr
    int n;        // size of top array
    int size;     // size of arr

    NStack(int _n, int _s) : n(_n), size(_s)
    {
        freespot = 0;
        arr = new int[size];
        top = new int[n];
        next = new int[size];

        for (int i = 0; i < n; i++)
        {
            top[i] = -1;
        }

        for (int i = 0; i < size; i++)
        {
            next[i] = i + 1;
        }
    }

    // push X element into mth stack
    bool push(int X, int m)
    {
        if (freespot == -1)
        {
            return false; // stack overflow
        }

        // step 1. find index of free space
        int index = freespot;

        // step 2. update freespot
        freespot = next[index];

        // step 3. insert element in arr
        arr[index] = X;

        // step 4. update next
        next[index] = top[m - 1];

        // step 5. update top
        top[m - 1] = index;

        return true; // push is successful
    }

    int pop(int m)
    {
        if (top[m - 1] == -1)
        {
            return -1; // stacl underflow
        }

        int index = top[m - 1];

        top[m - 1] = next[index];

        int popedEle = arr[index];

        next[index] = freespot;

        freespot = index;

        return popedEle;
    }

    ~NStack()
    {
        delete[] arr;
        delete[] top;
        delete[] next;
    }
};

int main()
{
    NStack s(3, 6);

    cout<<s.push(20,2)<<endl;
    cout<<s.pop(2)<<endl;

    return 0;
}
