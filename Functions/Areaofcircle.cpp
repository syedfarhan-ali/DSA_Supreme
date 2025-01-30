#include<iostream>
using namespace std;
//Area of a circle using functions

float areaofCircle(float radius){
    float pi = 3.1415;
    float area = pi * radius * radius;
    return area;
}
int main()
{
    float inputRadius = 9.8;
    cout << "Area of circle is : " << areaofCircle(inputRadius);
    return 0;
}