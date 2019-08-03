#include<iostream.h>
#include<conio.h>
void main()
   {
      int a,b,c;
      clrscr();
      cout<<"Enter year";
      cin>>a;
       if((a%4==0)&&(a%100!=0))
	  {
	    cout<<"it is the leap year";
	  }
	   else if((a%100==0)&&(a%400==0))
	  {
	    cout<<"it is a leap year";
	  }
	   else if(a%400==0)
	 {
	   cout<<"it is a leap year";

	 }
	  else
	{
	 cout<<"it is a not leap year";
	}

    getch();
   }
