#include<iostream.h>
#include<conio.h>
void main()
{
	int y,day,m,d;
       clrscr();
       cout<<"\n Enter A number of days=";
       cin>>day;
       y=day/365;
       day=day%365;
       m=day/30;
       d=day%30;
       cout<<"\n years"<<y<<"\n month"<<m<<"\n days"<<d;
       getch();
}