#include<iostream.h>
#include<conio.h>
void main()
  {
    int i,n,j,temp,arr[10];
    clrscr();
    cout<<"given array number";
    cin>>n;
    cout<<"Enter A element";
     for(i=0;i<n;i++)
     {
     cin>>arr[i];
     }
      for(j=i+1;j<n;j++)
	{
	  if(arr[i]>arr[j])
	   {
	    temp=arr[i];
	    arr[i]=arr[j];
	    arr[j]=temp;

	   }
	}
    cout<<"Assendding orde";
    for(i=0;i<n;i++)
     {
       cout<<arr[i]<<"\n";
     }
   getch();


  }