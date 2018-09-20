#include<iostream>
#include<conio.h>
using namespace std;
class items
{
	int itemcode[10],itemprice[10],i,j;
public:
	void getitems();
	void sumitemprices();
	void displayall();
	void removeitem();
	void initialise()
	{
		i=0;
	}
};
void main()
{
	char ch;
	int x;;
	items I;
	I.initialise();
	do
	{
		cout<<"Press 1 to enter item code and item price\n";
		cout<<"Press 2 to sum item prices\n";
		cout<<"Press 3 to display all items\n";
		cout<<"Press 4 to remove items\n";
		cout<<"Make you choice: ";
		cin>>x;
		switch(x)
		{
		case 1:
			I.getitems();
			break;
		case 2:
			I.sumitemprices();
			break;
		case 3:
			I.displayall();
			break;
		case 4:
			I.removeitem();
			break;
		default:
			cout<<"You have entered the wrong number\n";
				break;
		}
		cout<<"Do you want to continue? (y/n) \n";
		cin>>ch;
		cout<<"\n";
	}while(ch=='y'||ch=='Y');
}
void items::getitems()
{
	cout<<"Enter the item code and item price\n";
	cin>>itemcode[i]>>itemprice[i];
	i++;
}
void items::displayall()
{
	for(j=0;j<i;j++)
	{
		cout<<"The item code is "<<itemcode[j];
		cout<<"The item price is "<<itemprice[j]<<endl;
	}
}
void items::sumitemprices()
{
	int sum=0;
	for(j=0;j<i;j++)
	{
		sum=itemprice[j]+sum;
	}
	cout<<"The sum is "<<sum<<endl;
}
void items::removeitem()
{
	int search,k;
	cout<<"Enter item code to be removed: ";
	cin>>search;
	for(j=0;j<i;j++)
	{
		if(search==itemcode[j])
		{
			itemprice[j]=0;
			for(k=j;k<i;k++)
			{
				itemcode[k]=itemcode[k+1];
				itemprice[k]=itemprice[k+1];
			}
		}
	}
	cout<<endl;
}