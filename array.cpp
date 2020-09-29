#include<iostream>
#include<iomanip>
using namespace std;
void display(int salary[],int num);
int cal_bonus(int);
int main()
{
	int num;
	cout<<"Enter Number of person : ";
	cin>>num;
	cout<<endl;
	int *sal=new int[num];
	
	for(int i=0;i<num;i++)
	{
		cout<<"Enter the salary "<<i+1<<" : ";
		cin>>sal[i];
		cout<<endl;
	}
	
	display(sal,num);
	system("pause");
	return 0;
}
void display(int salary[],int num)
{
	cout<<setw(50)<<setfill('-')<<"-"<<endl;
	cout<<"There are "<<num<<" persons."<<endl;
	
	for(int i=0;i<num;i++)
	{
		cout<<"The Salary for person "<<i+1<<" = "<<salary[i];
		cout<<" and Bonus = "<<cal_bonus(salary[i])<<endl;
	}
	
	cout<<setw(50)<<setfill('-')<<"-"<<endl;
}
int cal_bonus(int salary)
{
	int bonus=salary*2;
	return bonus;
}