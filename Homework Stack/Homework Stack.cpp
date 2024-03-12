#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<char> st;
	/*string str = "{6-<[5+ ]>+";
	string str = "{6-<[5+ ]+}";
	string str = "{6-<[5+ >+}";
	string str = "{6-<5+ ]>+}";
	string str = "6-<[5+ ]>+}";*/
	string str = "}6-<[5+ ]>+{";

	for (int i = 0; i < str.length() + 1; i++)
	{
		if(str[i] == '[' || str[i] == '{' || str[i] == '<')
		{
			st.push(str[i]);			
		}
		if(str[i] == ']' || str[i] == '}' || str[i] == '>')
		{
			if (st.top() == '[' && str[i] == ']')
			{
				cout << st.top() << "\n";
				cout << "okay\n";
				st.pop();
			}
			else if (str[i] == '}' && st.top() == '{')
			{
				cout << st.top() << "\n";
				cout << "okay\n";
				st.pop();
			}
			else if (str[i] == '>' && st.top() == '<')
			{
				cout << st.top() << "\n";
				cout << "okay\n";
				st.pop();
			}
			else
				throw "error";
		}
	}
	if (st.size() > 0)
		throw " error";
}