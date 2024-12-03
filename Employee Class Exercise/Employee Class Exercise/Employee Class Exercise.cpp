#include <iostream>
using namespace std;

class clsEmployee
{

private:
	int _ID;
	string _FirstName;
	string _LastName;
	string _Title;
	string _Email;
	string _Phone;
	double _Salary;
	string _Department;

public:
	// Constructor
	clsEmployee(int id, string firstName, string lastName, string title, string email, string phone, double salary, string department)
	{
		_ID = id;
		_FirstName = firstName;
		_LastName = lastName;
		_Title = title;
		_Email = email;
		_Phone = phone;
		_Salary = salary;
		_Department = department;
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

	void SetTitle(string title)
	{
		_Title = title;
	}

	void SetEmail(string email)
	{
		_Email = email;
	}

	void SetPhone(string phone)
	{
		_Phone = phone;
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

	string GetTitle()
	{
		return _Title;
	}

	string GetEmail()
	{
		return _Email;
	}

	string GetPhone()
	{
		return _Phone;
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
		cout << "\nEmployee Info:\n";
		cout << "------------------------";
		cout << "\nID: " << _ID << endl;
		cout << "First Name: " << _FirstName << endl;
		cout << "Last Name: " << _LastName << endl;
		cout << "Full Name: " << GetFullName() << endl;
		cout << "Title: " << _Title << endl;
		cout << "Email: " << _Email << endl;
		cout << "Phone: " << _Phone << endl;
		cout << "Salary: " << _Salary << endl;
		cout << "Department: " << _Department << endl;
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

int main()
{
	/*clsPerson Person1(10, "Ahmed", "Ali", "ahmed@mail.com", "07704445588");
	Person1.Print();


	Person1.SendEmail("Hi", "How are you");
	Person1.SendSMS("Hello");*/

	system("pause>0");
	return 0;
}