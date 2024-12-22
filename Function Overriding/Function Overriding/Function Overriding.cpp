#include <iostream>
using namespace std;

class clsPerson
{

private:
	int _ID;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;

public:
	// Empty Constructor (to prevent initial object assignment (for now))
	clsPerson()
	{

	}

	// Parametrized Constructor
	clsPerson(int id, string firstName, string lastName, string email, string phone)
	{
		_ID = id;
		_FirstName = firstName;
		_LastName = lastName;
		_Email = email;
		_Phone = phone;
	}

	// Setter Methods
	void SetFirstName(string firstName)
	{
		_FirstName = firstName;
	}

	void SetLastName(string lastName)
	{
		_LastName = lastName;
	}

	void SetEmail(string email)
	{
		_Email = email;
	}

	void SetPhone(string phone)
	{
		_Phone = phone;
	}

	// Getter Methods
	int GetID()
	{
		return _ID;
	}

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

	string GetEmail()
	{
		return _Email;
	}

	string GetPhone()
	{
		return _Phone;
	}

	void Print()
	{
		cout << "\nPerson Info:\n";
		cout << "------------------------";
		cout << "\nID: " << _ID << endl;
		cout << "First Name: " << _FirstName << endl;
		cout << "Last Name: " << _LastName << endl;
		cout << "Full Name: " << GetFullName() << endl;
		cout << "Email: " << _Email << endl;
		cout << "Phone: " << _Phone << endl;
		cout << "------------------------";
	}

	void SendEmail(string Subject, string Body)
	{
		cout << "\n\nThe following message sent successfully to the email: " << _Email << endl;
		cout << "Subject: " << Subject << endl;
		cout << "Body: " << Body << endl;
	}

	void SendSMS(string Message)
	{
		cout << "\nThe following SMS sent successfully to the phone number: " << _Phone << endl;
		cout << Message << endl;
	}
};

// // Class Inheritance
// // sub-class/drived class : super class/base class
class clsEmployee : public clsPerson
{

private:
	string _Title;
	double _Salary;
	string _Department;


public:
	// // passing the perameters from sub-class constructor to the super class constructor using colon notation and specify the wanted perameters,
	// while other perameters can be used by the sub-class constructor only,
	clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, double Salary) : clsPerson(ID, FirstName, LastName, Email, Phone)
	{
		_Title = Title;
		_Department = Department;
		_Salary = Salary;
	}

	// Setter Methods

	void SetTitle(string title)
	{
		_Title = title;
	}

	void SetSalary(double salary)
	{
		_Salary = salary;
	}

	void SetDepartment(string department)
	{
		_Department = department;
	}

	// Getter Methods

	string GetTitle()
	{
		return _Title;
	}

	double GetSalary()
	{
		return _Salary;
	}

	string GetDepartment()
	{
		return _Department;
	}

	void Print()
	{
		cout << "\nPerson Info:\n";
		cout << "------------------------";
		cout << "\nID: " << GetID();
		cout << "\nFirst Name: " << GetFirstName();
		cout << "\nLast Name: " << GetLastName();
		cout << "\nFull Name: " << GetFullName();
		cout << "\nEmail: " << GetEmail();
		cout << "\nPhone: " << GetPhone();
		cout << "\nTitle: " << _Title;
		cout << "\nDepartment: " << _Department;
		cout << "\nSalary: " << _Salary << endl;
		cout << "------------------------";
	}

};



int main()
{
	clsEmployee Employee1(10, "Mohammed", "Ali", "moh.ali@mail.com", "07802335436", "Developer", "Developing Team", 5000);
	Employee1.Print();


	system("pause>0");
	return 0;
}