#include<iostream>
using namespace std;
main()
{
	int age,r;
	cout<<"Enter your age : ";
	cin>>age;
	if(age>=18)
	{
		cout<<"Congratulations!! You are eligible to vote.";
	}
	else
	{
		r = 18 - age;
		cout<<"You are not eligible for voting.";
		cout<<"\nTry after "<<r<<" years";
	}
	return 0;
}
