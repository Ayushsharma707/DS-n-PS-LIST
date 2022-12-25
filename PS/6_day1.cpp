#include<iostream>
using namespace std;
int main()
{
 int a,b,c;

 cout<<"Enter The Value Of a,b,c \n";
 cin>>a>>b>>c;

 if(a==b && b==c && c==a)
 {
  cout<<"The Triangle is Equilateral\n";
 }
 else if(a==b || b==c || c==a)
 {
  cout<<"The Triangle is Isosceles\n";
 }
 else if(a*a==b*b+c*c ||b*b==c*c+a*a || c*c==a*a+b*b)
 {
  cout<<"The Triangle is Right angled\n";
 }
 else
 {
  cout<<"The Triangle Scalene angled\n";
 }
 return 0;

}