#include<bits/stdc++.h>
using namespace std;
class Restaurant
{
public:
	int food_item_codes[12];
	string food_item_names[12];
	int food_item_prices[12];
	int quantity[12];
	double total_tax;
	void getter();
	void setter();
	Restaurant()
	{
   	total_tax=0;
	}
};
void Restaurant::getter()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
  	cin>>food_item_codes[i];
  	cin.ignore();
  	getline(cin,food_item_names[i]);
  	cin>>food_item_prices[i];
	}
}
void Restaurant::setter()
{
	cout<<"                 	Item Summery                	"<<endl;
	cout<<"          	--------------------------     	"<<endl;
	cout<<"item code   	item name                           	item price"<<endl;
 	for(int i=0;i<12;i++)  {
  	cout<< food_item_codes[i]<<"\t\t"<<food_item_names[i] <<"\t\t\t"<< food_item_prices[i]<<endl;
}}
void table(Restaurant  item_management,Restaurant it)
{
int tblno,items,code,quantity,k=0,sum=0;
cout<<endl;
cout<<"Enter Table : ";
cin>>tblno;
cout<<"Enter Number of items : ";
cin>>items;
for(int i=1;i<=items;i++)
{ print:
    	cout<<"Enter Item "<<i<<" Code : ";
    	cin>>code;
bool found=false;
for(int j=0;j<12;j++){
if(code==item_management.food_item_codes[j])
{
	found=true;
  cout<<"Enter Item "<<i<<" Quantity : ";
 cin>>quantity;

it.food_item_codes[k]=item_management.food_item_codes[j];
it.food_item_prices[k]=item_management.food_item_prices[j];
//strcpy(it.food_item_names[k],item_management.food_item_names[j]);
it.food_item_names[k]=item_management.food_item_names[j];
it.quantity[k]=quantity;
k++;
}


 }
if(!found)
{cout<<"code is not valid, he/she needs to enter the code again."<<endl;
goto print;
}

}
cout<<"                              	Bill Summary                                                     	"<<endl;
cout<<"                          	_____________________                                                    	"<<endl;

cout<<"Table No.:"<<tblno<<endl;
cout<<"Item Code      	Item Name                                    	Item Price      	Item Quantity   	Total Price"<<endl;
for(int i=0;i<k;i++)
{ sum+=it.food_item_prices[i]*it.quantity[i];
it.total_tax=(double)sum*5/100;

cout<<it.food_item_codes[i]<<"            	"<<it.food_item_names[i] <<"                         	" <<it.food_item_prices[i]<<"                  	"<<it.quantity[i]<<"             	"<<it.food_item_prices[i]*it.quantity[i]<<endl;
}
cout<<"TAX"<<"                                                                                                         	"<<it.total_tax<<endl;
cout<<"_________________________________________________________________________________________________________________________________"<<endl;
cout<<"Net Total                                                                                                  	"<<it.total_tax+(double)sum <<" Taka"<<endl;
}

int main()
{
  Restaurant item_management;
   Restaurant it;

   item_management.getter();
   while(1)
  {

   item_management.setter();
table(item_management,it);}


}

