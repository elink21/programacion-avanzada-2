#include <bits/stdc++.h>
using namespace std;

int vowelCount(string );
int consCount(string );

int main()
{
	string msg="";
	cout<<"Inserte el mensaje: ";
	getline(cin,msg);
	cout<<"El mensaje tiene: "<<vowelCount(msg)<<" vocales\n";
	cout<<"El mensaje tiene: "<<consCount(msg)<<" consonantes";
	return 0;
}

int vowelCount(string msg)
{
	int count=0;

	for(int i=0;i<msg.size();i++)
	{
		char temp=tolower(msg[i]);
		if('a'<=temp && temp<='z')
		{
			if(temp=='a'||temp=='e'||temp=='i'||temp=='o'||temp=='u')
			{
				count++;
			}
		}
	}

	return count;
}

int consCount(string msg)
{
	int count=0;

	for(int i=0;i<msg.size();i++)
	{
		char temp=tolower( msg[i]);
		if('a'<=temp && temp<='z')
		{
			if( !(temp=='a'||temp=='e'||temp=='i'||temp=='o'||temp=='u')  )
			{
				count++;
			}
		}
	}
	return count;
}