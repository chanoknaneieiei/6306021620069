#include<iostream>
#include<string>
using namespace std;
void main()
{
	string first,last;
	int saly,sale,commis,total;
	cout<<"Enter Name :";
	cin>> first >>last;
	cout<<"Enter Saraly :";
	cin>> saly;
	cout<<"Enter Sale :";
	cin>> sale;
	cout<<"Enter Commisstion Percent :";
	cin>> commis;
	cout<<"\n---------------output------------";
	cout<<"\nYour name :"<<first<<"\t"<<last;
	total = (sale*commis/100+saly);
	cout<<"\nTotal Revenue :\t"<<total<<"\tBath\n";
}