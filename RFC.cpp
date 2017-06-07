#include <bits/stdc++.h>
using namespace std;

int main()
{
	string name="";
	string bornDate="";
	string RFC="";

	vector<string> splitName;
	vector<string> splitDate;

	cout<<"Por favor ingrese su nombre completo en el formato: \n";
	cout<<"<Nombres ApellidoPaterno ApellidoMaterno>\n";
	cout<<"Nombre: ";
	getline(cin,name);
	cout<<"Ahora ingrese su fecha de nacimiento (DD/MM/AA) [ejemplo 11/03/98] : ";
	cin>>bornDate;

	for(int i=0;i<name.size();i++)
	{
		string temp="";
		while(name[i]!=' ' && i<name.size())
		{
			temp+=name[i];
			i++;
		}
		splitName.push_back(temp);
	}

	for(int i=0;i<bornDate.size();i++)
	{
		string temp="";
		while(bornDate[i]!='/' && i<bornDate.size())
		{
			temp+=bornDate[i];
			i++;
		}
		splitDate.push_back(temp);
	}

	if(splitName.size()==4)
		splitName.erase(splitName.begin()+1);

	RFC+=toupper(splitName[1][0]);

	bool finded=false;
	for(int i=0;i<splitName[1].size();i++)
	{
		if(finded)continue;
		char comp=tolower(splitName[1][i]);
		if(comp=='a'||comp=='e'||comp=='i'||comp=='o'||comp=='u')
		{
			RFC+=toupper(comp);
			finded=true;
		}
	}

	if(splitName.size()==3)
	{
		RFC+=toupper(splitName[2][0]);
	} else RFC+='X';

	RFC+=toupper(splitName[0][0]);

	RFC+=splitDate[2]+splitDate[1]+splitDate[0];

	cout<<"Su RFC es: "<<RFC;
	return 0;


}