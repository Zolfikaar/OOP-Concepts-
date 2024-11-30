#include <iostream>
#include <string>

using namespace std;

class clsCalculator
{
	float _Result = 0;
	float _LastNumber = 0;
	float _PreviousResult = 0;
	string _LastOperation = "";

	bool _IsZero(float num)
	{
		return (num == 0);
	}

public:
	
	void Add(float num)
	{
		_LastNumber = num;
		_PreviousResult = _Result;
		_LastOperation = "Adding";
		_Result += num;
	}

	void Subtract(float num)
	{
		_LastNumber = num;
		_PreviousResult = _Result;
		_LastOperation = "Subtracting";
		_Result -= num;
	}

	void Multiply(float num)
	{
		_LastNumber = num;
		_PreviousResult = _Result;
		_LastOperation = "Multiplying";
		_Result *= num;
	}

	void Divide(float num)
	{
		_LastNumber = num;

		if (_IsZero(num)) {
			num = 1;
		}

		_PreviousResult = _Result;
		_LastOperation = "Divideing";
		_Result /= num;
	}

	void Clear()
	{
		_LastNumber = 0;
		_PreviousResult = 0;
		_LastOperation = "Clearing";
		_Result = 0;

	}

	float GetFinalResult()
	{
		return _Result;
	}

	void CancelLastOperation()
	{
		_LastNumber = 0;
		_LastOperation = "Cancelling Last Operation";
		_Result = _PreviousResult;
	}

	void PrintResult()
	{
		cout << "Result after " << _LastOperation << " " << _LastNumber << " is: " << _Result << endl;
	}

};



int main()
{
	clsCalculator Calculator;

	Calculator.Add(10);
	Calculator.PrintResult();

	Calculator.Add(100);
	Calculator.PrintResult();

	Calculator.Subtract(20);
	Calculator.PrintResult();

	Calculator.Divide(2);
	Calculator.PrintResult();

	Calculator.Multiply(3);
	Calculator.PrintResult();

	Calculator.Clear();
	Calculator.PrintResult();

	system("pause>0");
	return 0;
}