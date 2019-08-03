#include<iostream.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	cout<<"Enter A upper case letter";
	cin>>ch;
	ch=ch+32;
	cout<<"lower case letter is "<<ch;
	getch();
}