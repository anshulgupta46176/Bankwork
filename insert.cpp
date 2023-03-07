#include"product.h"
#include<fstream>



int main()
{ product P;
  fstream F;
  F.open("emp.db",ios::out|ios::app|ios::binary);
  char ch;
  do{
  	P.getproduct();
  	F.write((char*)&P,sizeof(P));
  	cout<<"Add More Records(y/n):";
  	cin>>ch;
  }while(ch=='y'||ch=='Y');
  F.close();
}


