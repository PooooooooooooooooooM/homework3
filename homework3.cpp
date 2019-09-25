#include<iostream>
#include<iomanip>
#include<time.h>
using namespace std;
void display(int num[][6]);
void graph(int num[][6]);
int main()
{
	int num[5][6];
	srand(time(0));
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<6;j++)
		{
			num[i][j] = rand()%10;
		}
	}
	display(num);
	cout<<endl;
	graph(num);
	return (0);
}
void display(int num[][6])
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<6;j++)
		{
			cout<<num[i][j]<<"\t";
		}
		cout<<endl;
	}

}
void graph(int num[][6])
{
	cout<<"================Display graph============================\n";
	cout<<"\t0\t1\t2\t3\t4\t5"<<endl;
	cout<<"=========================================================\n";
	for(int i=0;i<5;i++)
	{
		cout<<i<<"|";
		for(int j=0;j<6;j++)
		{
			if(num[i][j] != 0)
			{
				cout<<"\t"<<"*";
			}
			else
			{
				cout<<"\t"<<"  ";
			}
		}
		cout<<endl;
	}
}