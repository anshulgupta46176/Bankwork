#include"product.h"
#include<fstream>
int main()
{ product P;
  fstream F;
  int id,found;
  F.open("emp.db",ios::in|ios::binary);
  if(F.bad())
  { cout<<"File Not Found...."<<endl;
  }
  else
  { cout<<"Enter product id u want to search?";
    cin>>id;
    cout<<"id"<<"\t"<<"name"<<"\t"<<"rate"<<"\t"<<"offer"<<"\t"<<"savings"<<"\t"<<"stock"<<"\t"<<"actual_rate"<<endl;
  	while(!F.eof())
  	{ F.read((char*)&P,sizeof(P));
  	  
  	  if(F.eof()) break;
  	  found=P.search(id);
  	  if(found)
  	  {
  	     P.putproduct();
  	     break;
  	   }
	  }
  	  if(!found)
  	  { cout<<"product id does not exist...."<<endl;
		}
  	
  }
  F.close();
  
}

