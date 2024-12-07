#include <iostream>
#include "stacktype.cpp"
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

bool Palindrome(StackType<char>& , StackType<char>& );
string removeSpaces(string );
int Precedence(char);
void InfixToPostfix(StackType<string>& , string, int&, bool&);



int main() {
	StackType<double> dstack;
	StackType<string> infixStk, temp1, temp2;
	string str;
	bool valid;
	cout << "Enter a string: ";
	getline(cin, str);
	int  count;
	double num1, num2, result=0;
	
	str = removeSpaces(str);	
	InfixToPostfix(temp2, str, count, valid);
	cout << count << endl;
	for (int i = 0; i < count; i++) {
		infixStk.Push(temp2.Top());
		temp1.Push(temp2.Top());
		temp2.Pop();
	}
	for (int i = 0; i<count; i++)
	{
		cout << temp1.Top() << " ";
		temp1.Pop();
	}

	cout << endl;

	
	for (int i = 0; i < count; i++) 
	{
		try {
			if ((infixStk.Top() != "+") && (infixStk.Top() != "-") && (infixStk.Top() != "*") && (infixStk.Top() != "/") && (infixStk.Top() != ""))
			{
				istringstream ss(infixStk.Top());
				int val;
				ss >> val;
				dstack.Push(val);
				infixStk.Pop();
			}
			else
			{
				const char oparetor = *infixStk.Top().c_str();
				infixStk.Pop();
				num1 = dstack.Top();	dstack.Pop();
				num2 = dstack.Top();	dstack.Pop();
				switch (oparetor)
				{
				case '+':
					result = (double)num2 + num1;
					break;
				case '-':
					result = (double)num2 - num1;
					break;
				case '*':
					result = (double)num2 * num1;
					break;
				case '/':
					result = (double)num2 / num1;
					break;
				default:
					break;
				}
				dstack.Push(result);
			}
		}
		catch (EmptyStack) {
			cout << "Invalid expression" << endl;
		}
	}
	if(!dstack.IsEmpty())
		cout << endl << "result:" << dstack.Top() << endl;
	

	/*	Check Palindrome	*/	
	StackType<char> stk1, stk2, tempstk;
	
	char ch;
	cout << endl << " Enter a string: ";
	getline(cin, str);
	int size = str.size();
	for (int i = 0; i < size; i++) {
		stk1.Push(str[i]);
		tempstk.Push(str[i]);
	}
	for (int i = 0; i < size; i++) {
		stk2.Push(tempstk.Top());
		tempstk.Pop();
	}

	bool x = Palindrome(stk1, stk2);

	if (x)
		cout << "   Palindrome." << endl;
	else
		cout << "   Not Palindrome." << endl;


	return 0;
}



string removeSpaces(string str)
{
	str.erase(remove(str.begin(), str.end(), ' '), str.end());
	return str;
}

int Precedence(char ch) 
{
	if (ch == '-')
		return 1;
	else if (ch == '+')
		return 2;
	else if (ch == '*')
		return 3;
	else if (ch == '/')
		return 4;
}
void InfixToPostfix(StackType<string> &temp, string str, int& count, bool& valid) 
{
	StackType<char> chStk;
	string tempStr;
	count = 0;
	int size = str.size();
	try {
		for (int i = 0; i <= size; i++) {

			if (isdigit(str[i])) {
				tempStr += str[i];
			}
			else if (!isdigit(str[i]))
				
			{
				if (tempStr != "") {
					temp.Push(tempStr);
					tempStr.clear();
					count++;
				}
			}
			if (str[i] == '+' || str[i] == '*' || str[i] == '/' || str[i] == '(')
			{
				chStk.Push(str[i]);
			}
			else if (str[i] == ')' || str[i] == '-') {

				while (!chStk.IsEmpty())
				{
					if (chStk.Top() != '(') {
						tempStr = chStk.Top();
						temp.Push(tempStr);
						tempStr.clear();
						chStk.Pop();
						count++;
					}
					else {
						chStk.Pop();
					}
				}
				if (str[i] == '-')
					chStk.Push(str[i]);
			}
		}
		while (!chStk.IsEmpty())
		{
			tempStr = chStk.Top();
			temp.Push(tempStr);
			tempStr.clear();
			chStk.Pop();
			count++;
		}
	}
	catch (EmptyStack) {

	}
		
}


bool Palindrome(StackType<char>& stk1, StackType<char>& stk2) {
	char ch, ch1;
	bool flag = false;
	try {
		while (!stk1.IsEmpty() && !stk2.IsEmpty()) {
			ch = stk1.Top();
			ch1 = stk2.Top();

			if (ch == ch1) {
				flag = true;
				stk1.Pop();	
				stk2.Pop();
			}
			else {
				flag = false;
				break;
			}
			
		}
	}
	catch (EmptyStack) {

	}
	return flag;
}


