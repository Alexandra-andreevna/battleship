#include <iostream>

using namespace std;

#include "Put_ship.h"

int main()
{
	int amount;
	Sea_battle objSea_battle;
	do
	{
		cout<<"Enter amount of sheeps (<25)"<<endl;
		cin>>amount;
	}
	while ((amount>25)||(amount<0));

	int x,y,l,n;

	cout<<"Player 1"<<endl;
	for (int i=1; i<amount; i++)
	{
		system("cls");
			cout<<"Enter the coordinates(x,y), location (1 - horizontal; 2 - vertical) and number of decks";
			do
				cin>>x>>y>>l>>n;
			while ((x>10)||(y>10)||(x+n-1>10)||(y+n+-1>10)||((l!=1)&&(l!=2)));
			objSea_battle.Enter_1( x, y, l, n);
			objSea_battle.See_field_1();

	};

	cout<<"player 2"<<endl;
	for (int i=1; i<amount; i++)
	{
		system("cls");
		cout<<"Enter the coordinates(x,y), location (1 - horizontal; 2 - vertical) and number of decks";
		do
			cin>>x>>y>>l>>n;
		while ((x>10)||(y>10)||(x+n-1>10)||(y+n+-1>10)||((l!=1)&&(l!=2)));
		objSea_battle.Enter_2( x, y, l, n);
		objSea_battle.See_field_2();
	};

	cout<<"Start battle!"<<endl;
	do
	{
		cout<<"Player 1"<<endl<<"Enter coordinates"<<endl;
		cin>>x>>y;
		objSea_battle.Move_1(x,y);
		objSea_battle.See_field_1();
		system("cls");
		cout<<"Player 2"<<endl<<"Enter coordinates"<<endl;
		cin>>x>>y;
		objSea_battle.Move_2(x,y);
		objSea_battle.See_field_2();
		system("cls");
		objSea_battle.Summ();
	}
	while ((s1!=0) || (s2!=0));
}
