#include<iostream.h>
#include<conio.h>
void main()
   {
     int a[5],i,j;
     int lg,sm;
      cout<<"Enter A number";
      for(i=0;i<5;i++)
	{
	  cin>>a[i];
	}
      lg=a[0];
      sm=a[0];
      for(j=0;j<5;j++)
       {
	 if(a[j]<sm)
	 sm=a[j];
	 if(a[j]>lg)
	 lg=a[j];

       }
      cout<<"largest element"<<lg;
      cout<<"smallest element";
  getch();
   }
