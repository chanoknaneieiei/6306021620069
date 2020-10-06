#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
float calprice(float prince[3][5]);
void display(string[5],float[3][5]);
int main()
{
	string name[5];
	float price[3][5];
	for(int i = 0;i<5;i++){
	cout<<"Enter Product name : ";
	cin>>name[i];
	cout<<"prince : ";
	cin>>price[0][i];}
	
	
	price[3][5] =calprice(price);
	display(name,price);
	
	system("pause");
		
	return 0;
}
float calprice(float price[3][5])
{
	for(int i =0;i<5;i++)
	{
		price[1][i] = price[0][i]*7/100;
	}
	for(int i =0;i<5;i++)
	{
		price[2][i] = price[0][i]+price[1][i];
	}
	return price[3][5];
}
void display(string name[5],float price[3][5]){
	cout<<setfill(' ')<<"No."<<setw(15)<<"product"<<setw(18)<<"price"<<setw(25)<<"vat7%"<<setw(28)<<"Net"<<' '<<endl;
	for(int i = 0;i<5;i++){
		cout<<fixed<<setprecision(2)<<i+1<<setfill(' ')<<setw(15)<<name[i]<<setfill(' ')<<setw(20)<<price[0][i]<<setfill(' ')<<setw(25)<<price[1][i]<<setfill(' ')<<setw(30)<<price[2][i]<<' '<<endl;
	
	}
}