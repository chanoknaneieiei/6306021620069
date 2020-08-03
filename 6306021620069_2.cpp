#include<iostream>
using namespace std;
int main()
{
	float st,nd,rd,mid,final,quizz,total;
	cout<<"===========Quizz==========="<<endl;
	cout<<"Enter first quizz(10):";
	cin>>st;
	cout<<"Enter second quizz(10):";
	cin>>nd;
	cout<<"Enter third quizz(10):";
	cin>>rd;
	cout<<"===========Mid_term==========="<<endl;
	cout<<"Enter mid-term(40):";
	cin>>mid;
	cout<<"===========Final==========="<<endl;
	cout<<"Enter final(50):";
	cin>>final;
	quizz = (st+nd+rd)/3;
	cout<<"Quizz Total :"<<quizz<<endl;
	cout<<"Mid term :"<<mid<<endl;
	cout<<"Final :"<<final<<endl;
	total = final+mid+quizz;
	cout<<"Total :"<<total<<endl;
	cout<<"You score is"<<((total>=60)?"PASS":"FALL")<<endl;
	return 0;
}