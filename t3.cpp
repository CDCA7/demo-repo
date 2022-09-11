#include <iostream>

using namespace std;

int add(int a1[] , int a2[]);

int main()
{
    int s1[] = {1,2};
    int s2[] = {3,4}; 
    cout<< add(s1 , s2);
    return 0;
}

int add(int a1[] , int a2[])
{
    int a3[] = {};
    a3[0] = a1[0] + a2[0];
    a3[1] = a1[1] + a2[1];
    return a3[0];
}