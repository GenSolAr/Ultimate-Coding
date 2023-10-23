/*A C++ Program to Check an Input is Positive or Negative & Even or Odd*/
#include<iostream>
using namespace std;
main()
{
	int n;
	int i;
	cout<<"________________Positive or Negative & Even or Odd________________\n";
	cout<<"Enter an integer number to check:";
	cin>>n;
	cout<<"____________Select an Option_____________\n Press 1 to check if the number is Positive or Negative\n Press 2 to check if the number is Even or Odd\n____________________________________\n";
	cout<<"Enter the chosen option:";
	cin>>i;
	switch(i)
	{
		case 1:
		if(n>0)
		cout<<"The Input number is Positive Number.";
		else if(n=0)
		cout<<"The Input Number is Equals to Zero(0).";
		else
		cout<<"The Input number is Negative number.";
		break;
		case 2:
		if(n%2==0)
		cout<<"The Input number is Even Number.";
		else
		cout<<"The Input NUmber is Odd Number'";
		break;
		default:cout<<"\nWrong Input !\nTry Again.............";
	}
	cout<<"\n_____________________________________________________________";
	cout<<"\n Press Any Key to Exit";
	cout<<"\n_____________________________________________________________";
	return 0;
}
