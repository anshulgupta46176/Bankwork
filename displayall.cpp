#include"product.h"
#include<fstream>
int main()
{ product P;
  fstream F;
  F.open("emp.db",ios::in|ios::binary);
  if(F.bad()) 
  { cout<<"File Not Found...."<<endl;
  }
  else
  {	cout<<"id"<<"\t"<<"name"<<"\t"<<"rate"<<"\t"<<"offer"<<"\t"<<"savings"<<"\t"<<"stock"<<"\t"<<"actual_rate"<<endl;
  	while(!F.eof())
  	{ F.read((char*)&P,sizeof(P));
  	  
  	  if(F.eof()) break;
  	  P.putproduct();
	  }
  }
  F.close();
}





