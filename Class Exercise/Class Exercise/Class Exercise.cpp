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
	// Constructor
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

int main()
{
	clsPerson Person1(10, "Ahmed", "Ali", "ahmed@mail.com", "07704445588");
	Person1.Print();

	Person1.SendEmail("Hi", "How are you");
	Person1.SendSMS("Hello");

	system("pause>0");
	return 0;
}