
#include <deque>
#include<iostream>
using namespace std;
class buf_istream
{
public:
	deque<char> buf;
	void getc(char &c)
	{
		if (!buf.empty())
		{
			c = buf.front();
			buf.pop_front();
		}
		else
			cin >> c;
	}
	string &getall()
	{
		string s;
		while (!buf.empty())
		{
			s += buf.front();
			buf.pop_front();
		}
		return s;
	}
}; namespace std
{
	buf_istream bcin;
}