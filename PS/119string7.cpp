#include<iostream>
#include<string.h>
using namespace std;

int main()
{

	char s1[100],s2[100];
	int i,j,l;
	cout<<"String1"<<endl;
	gets(s1);
	cout<<"String2"<<endl;
	gets(s2);l=strlen(s1);
	cout<<l<<endl;
	i=0;
	while(s2[i]!='\0')
	{
		s1[l+i] = s2[i];
		i++;
	}
 	s1[l+i]='\0';

	
	puts(s1);
	
	cout<<"hh"<<endl;;
	return 0;

}