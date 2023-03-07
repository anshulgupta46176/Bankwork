#include<iostream>
using namespace std;
class product
{
	private:
		int id;
		char name[25];
		long rate;
		int offer;
		int stock;
		
	public:
	 void getproduct()	
	 { cout<<"Enter Id:";
	   cin>>id;
	   cout<<"Enter Name:";
	   cin>>name;
	   cout<<"Enter rate:";
	   cin>>rate;
	   cout<<"Enter Offer:";
	   cin>>offer;
	   cout<<"Enter stock available:";
	   cin>>stock;
	 }
	 
	 void putproduct()
	{ int savings= rate*offer*0.01;
	  int actual_rate= rate-(rate*offer*0.01);
	  cout<<id<<"\t"<<name<<"\t"<<rate<<"\t"<<offer<<"\t"<<savings<<"\t"<<stock<<"\t"<<actual_rate<<endl;
    			}		
	int search(int id)		
	{ if(this->id==id)
	   {
	   	return 1;
	   }
	   return 0;
	}
	
};
