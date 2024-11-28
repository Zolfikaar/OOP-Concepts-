#include <iostream>

using namespace std;

class clsPerson
{
private:
    string _ID = "245-GFT-4H3";
    string _FirstName;
    string _LastName;

protected:
    int y = 50;

public:

    // Setter
    void setFirstName(string firstName)
    {
        _FirstName = firstName;
    }

    void setLastName(string lastName)
    {
        _LastName = lastName;
    }

    // Getter
    string GetFirstName()
    {
        return _FirstName;
    }

    string GetLastName()
    {
        return _LastName;
    }

    string GetFullName()
    {
        return _FirstName + " " + _LastName;
    }

    string GetId()
    {
        return _ID;
    }

    __declspec(property(get = GetFirstName, put = setFirstName)) string FirstName;
};

int main()
{
    clsPerson Person;

    Person.setFirstName("Ali");
    Person.setLastName("Mohammed");

    Person.FirstName = "Ahmed";
    
    cout << "Full Name: " << Person.GetFullName() << endl;
}