#include<iostream>
#include"algorithm.h"
using namespace std;


int main()
{
    int arr[] = {1,4,8,2,5,0};
    sort(arr,6);



    return 0;
}

// g++ -o is used to make exe from .os
// g++ -c is used to make .os, from .cpp
// [rm <file name>] :- to remove any file, replace <file name> with actual file name

// 1. make .os of all .cpp files "g++ -c fileName.cpp"
// 2. link all .os to make .exe file "g++ a.o b.o main.o -o my_progrma"