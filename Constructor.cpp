/*

1)What is the defination of constructor?
= Constructor is a special type of function that is used to initialize the object.
2)What are the properties of constructor?
i)Constructor is a special type of function.
ii)Constructor has the same name as that of the class it belongs.
iii)It has no return type not even void.
iv)It is called automatically.

*/

/*
*** Two types of constructor
    1)Default constructor
    2)Parametrize constructor
*/

//how to use constructor
#include<iostream>
#include<conio.h>
using namespace std;
class student{
public :
    int id;
    double gpa;

    student(int x, double y)
    {
        id = x;
        gpa = y;
    }
    student()
    {
        cout<<"Default constructors "<<endl;
    }

    void display()
    {
        cout<< id << "  " << gpa <<endl;
    }

};
int main()
{
     student ob;
    student sohan(101,3.64);    // constructor ke alada vabe call deyair dorkar hoy nah object declear korar sate sate call deya jay
    sohan.display();

    student rimon(102,3.65) ;
    sohan.display();

    getch();
}
