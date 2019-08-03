#include<iostream.h>
#include<conio.h>
void main()
  {
     int a,b;
     clrscr();
     cout<<"Enter A number";
     cin>>a;
     b=a%2;
     if(b==0)
       {
	 cout<<"The number is EVEN";
       }
	 else
      {
	cout<<"The number is ODD";
      }
    getch();
  }