#include <iostream>
using namespace std;
class clsAddress
{
private:
	string _AddressLine1;
	string _AddressLine2;
	string _POBox;
	string _ZipCode;
public:

	// This is Manual Default Parametrised Constructor
	clsAddress(string AddressLine1, string AddressLine2, string POBox, string ZipCode)
	{
		_AddressLine1 = AddressLine1;
		_AddressLine2 = AddressLine2;
		_POBox = POBox;
		_ZipCode = ZipCode;
	}

	// This is Copy Constructor (like function override)
	clsAddress(clsAddress & oldObject)
	{
		_AddressLine1 = oldObject.AddressLine1();
		_AddressLine2 = oldObject.AddressLine2();
		_POBox = oldObject.POBox();
		_ZipCode = oldObject.ZipCode();
	}

	void SetAddressLine1(string AddressLine1)
	{
		_AddressLine1 = AddressLine1;
	}

	string AddressLine1()
	{
		return _AddressLine1;
	}

	void SetAddressLine2(string AddressLine2)
	{
		_AddressLine2 = AddressLine2;
	}

	string AddressLine2()
	{
		return _AddressLine2;
	}

	void SetPOBox(string POBox)
	{
		_POBox = POBox;
	}

	string POBox()
	{
		return _POBox;
	}

	void SetZipCode(string ZipCode)
	{
		_ZipCode = ZipCode;
	}

	string ZipCode()
	{
		return _ZipCode;
	}

	void Print()
	{
		cout << "\nAddress Details:\n";
		cout << "------------------------";
		cout << "\nAddressLine1: " << _AddressLine1 << endl;
		cout << "AddressLine2: " << _AddressLine2 << endl;
		cout << "POBox : " << _POBox << endl;
		cout << "ZipCode : " << _ZipCode << endl;
	}

	
};

class clsPerson
{
public:
	

	clsPerson()
	{
		cout << "This is Constructor" << endl;

	}

	// This is Destructor, will be called when object is destroyed
	~clsPerson()
	{
		cout << "This is Destructor" << endl;

	}

};


void fun1()
{
	clsPerson Person1;
}

void fun2()
{
	clsPerson* Person2 = new clsPerson;

	delete Person2;
}

int main()
{
	clsAddress Address1("Queen Alia Street", "B 303","11192","5555");
	Address1.Print();

	clsAddress Address2 = Address1;
	Address1.Print();
	cout << "\n\n";
	fun1();
	fun2();

	system("pause>0");
	return 0;
}