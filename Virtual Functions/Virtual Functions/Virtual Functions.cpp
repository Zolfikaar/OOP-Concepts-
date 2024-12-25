#include <iostream>
#include <string>

using namespace std;

class clsPerson
{
public:

    virtual   void print()
    {
        cout << "Hi,i'm a person" << endl;
    }
};

class clsEmployee : public clsPerson
{
public:

    void print()
    {
        cout << "Hi,i'm an employee" << endl;
    }
};

class clsStudent : public clsPerson
{
public:

    void print()
    {
        cout << "Hi,i'm a student" << endl;
    }
};

int main() {

    clsEmployee Employee1;
    Employee1.print();

    clsStudent Student1;
    Student1.print();

    clsPerson* Person1 = &Employee1;
    clsPerson* Person2 = &Student1;

    Person1->print();
    Person2->print();

    return 0;
}