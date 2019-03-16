#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <stack>

using namespace std;

int returnCountStack(string iString1)
{
	string str = iString1;
	int result = 0;
	int i = 0; 
	
	stack<char> stackR;
	stack<char> stackB;
	stack<char> stackG;

	while(!str.empty())
	{
		if (str[i] == 'r')
		{
			stackR.push('r');
		}
		else if (str[i] == 'g')
		{
			stackG.push('g');
		}
		else if (str[i] == 'b')
		{
			stackB.push('b');
		}
		str.erase(i,1);
	}

	while (!stackB.empty() && !stackG.empty() && !stackR.empty())
	{
		stackB.pop();
		stackR.pop();
		stackG.pop();
		result++;
	}
	return result; 
}

int returnCount(string iString)
{
	string str = iString; // copy of string
	unsigned long result = 0; // result of how many teams found

	while(true)
	{
		int i, j, k;
		bool foundR = false;
		bool foundG = false;
		bool foundB = false;

		for (i = 0; i < str.length(); i++)
		{
			if (str[i] == 'r')
			{
				foundR = true;
				break; 
			}
		}

		if (foundR == true)
		{
			str.erase(i,1);

			for (j = 0; j < str.length(); j++)
			{
				if (str[j] == 'g')
				{
					foundG = true;
					break;
				}
			}
			str.erase(j, 1);
		}

		if (foundG == true)
		{
			for(k = 0; k < str.length(); k++)
			{
				if (str[k] == 'b')
				{
					foundB = true;
					str.erase(k,1);
					break;
				}
			}
		}
		if (foundR == true && foundB == true && foundG == true)
		{
			result++;
		}

		int r = str.find("r");
		if (r == string::npos)
		{
			break;
		}
		int g = str.find("g");
		if (g == string::npos)
		{
			break;
		}
		int b = str.find("b");
		if (b == string::npos)
		{
			break;
		}
	}
	return result;
}

void testString(string str)
{
	istringstream buffer(str);
	int testInt = -1;
	try
	{
		testInt = stoi(str);

	}
	catch(...)
	{
		cout << "bad input" << endl;
		return;
	}
	cout << testInt << endl;
	int sum = 0; 
	for (int i = 0; i < str.length() - 1 ; i++)
	{
		int temp;
		 
		sum += temp;
	}
	cout << sum << endl;
}

int main()
{
	string tester = "12345";
	string testString = "rgbbbggrrrgbgggbbb";
	//testString(tester);
	cout << "Count using sub-optimal method: " << returnCount(testString) << endl;
	cout << "Count using stacks: " << returnCountStack(testString) << endl;
	return 0;	
}
