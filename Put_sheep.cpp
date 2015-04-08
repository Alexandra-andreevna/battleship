#include<iostream>

using namespace std;

#include"Put_ship.h"

void Sea_battle::Enter_1(int x, int y, int l, int number)
	{
		if (l==1) 
			{
				for (int i=y; i<y+number-1; i++)
				field_1[x][i]=1;
			}
		else
			{
				for (int i=x; i<x+number-1; i++)
				field_1[i][y]=1;
			};
		}

void Sea_battle::Enter_2(int x, int y, int l, int number)
	{
		if (l==1) 
			{
				for (int i=y; i<y+number-1; i++)
				field_2[x][i]=1;
			}
		else
			{
				for (int i=x; i<x+number-1; i++)
				field_2[i][y]=1;
			};
	}

void Sea_battle::Move_1(int x, int y)
	{
		if (field_2[x][y]==1)
			{
				field_2[x][y]=0;
				field_2_c[x][y]=1;
				cout<<"HIT!!!"<<endl;
			};
		if (field_2[x][y]==0)
			{
				field_2[x][y]=0;
				field_2_c[x][y]=2;
				cout<<"NO SHIP!"<<endl;
			};
	}

void Sea_battle::Move_2(int x, int y)
	{
		if (field_1[x][y]==1)
			{
				field_1[x][y]=0;
				field_1_c[x][y]=1;
				cout<<"HIT!!!"<<endl;
			};
		if (field_1[x][y]==0)
			{
				field_1[x][y]=0;
				field_1_c[x][y]=2;
				cout<<"NO SHIP!"<<endl;
			};
	}

void Sea_battle::See_field_1()
	{
		for (int i=1; i<10; i++)
			{
				for (int j=1; j<10; j++)
					cout<<field_1[i][j];
				cout<<"   ";
				for (int j=1; j<10; j++)
					cout<<field_2_c[i][j];
				cout<<endl;
			}
	}

void Sea_battle::See_field_2()
	{
		for (int i=1; i<10; i++)
			{
				for (int j=1; j<10; j++)
					cout<<field_2[i][j];
				cout<<"   ";
				for (int j=1; j<10; j++)
					cout<<field_1_c[i][j];
				cout<<endl;
			}
	}

void Sea_battle::Summ()
	{
		for (int i=1; i<10; i++)
			for (int j=1; j<10; j++)
				{
					s1=s1+field_1[i][j];
					s2=s2+field_2[i][j];
				}
		if (s1==0)
			cout<<"Player 2 win game!";
		if (s2==0)
			cout<<"Player 1 win game!";
	}
