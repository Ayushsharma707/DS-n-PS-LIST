#include <bits/stdc++.h>
using namespace std;
int main()
{
	int basic; 
	char grade;
    cout<<"Basic"<<endl;
    cin>>basic;
    cout<<"Grade"<<endl;
    cin>>grade; 
    int allowance;
	double hra, da, pf;

	hra = 0.2 * basic;
	da = 0.5 * basic;
	pf = 0.11 * basic;

	if (grade == 'A') {
		allowance = 1700;
	}
	else if (grade == 'B') {
		allowance = 1500;
	}
	else {
		allowance = 1300;
	}
	int gross;
	
	gross = round(basic + hra + da + allowance - pf);
	cout<<gross;

    return 0;
	
}
