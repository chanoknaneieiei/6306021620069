#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
void DisplayMenu();
float Area(const float radius);
float Area(const float lenght,const float widht);
float Area(const double base ,const double high);



int main()
{
	char choice;
	bool flag =true;
	do{
	DisplayMenu();
	cin>>choice;
		if(choice == '1'){
		float radius;
		cout<<"\nEnter redius : ";
		cin>>radius;
		cout<<"area of circle ="<<fixed;
		cout<<setprecision(2)<<Area(radius)<<endl;
		}
		else if (choice == '2'){
		float lenght,widht;
		cout<<"Enter Lenght and Width: ";
		cin>>lenght,widht;
		cout<<"area of circle ="<<fixed;
		cout<<setprecision(2)<<Area(lenght,widht)<<endl;}
		else if (choice == '3'){
		double base,high;
		cout<<"Enter Lenght and Width: ";
		cin>>base,high;
		cout<<"area of circle ="<<fixed;
		cout<<setprecision(2)<<Area(base,high)<<endl;}
		else if (choice =='4')flag = false;
		else{
		cout<<"\n you choose out of range is ";
		cout<<"not process \n";}
		
	}while(flag);
	cout<<"\n ...Exit Program...\n";
	return 0;
}
float Area(const float radius)
{
	return (3.14159F *radius*radius);
}
float Area(const float lenght,const float widht)
{
	return (lenght*widht);

}
float Area(const double base,const double high)
{
	return ((1/2)*base*high);
}
void DisplayMenu()
{
	cout<<endl;
	cout<<"Program Calculate Area "<<endl;
	cout<<"1.Circle"<<endl;
	cout<<"2.Rextangle"<<endl;
	cout<<"3.Triangle"<<endl;
	cout<<"4.Exit"<<endl;
	cout<<"Enter your chose number :";
	
}
