#include<iostream>
using namespace std;

int main(){

int a,b, sa=0, sb=0;
cout<<"Nhap so thu nhat ";cin>>a;
cout<<"Nhap so thu hai ";cin>>b;
 
for (int i=1 ;i<=a;i++) {

	if(a % i==0)
	sa=sa+i; 	 
}

for (int i=1 ;i<=b;i++) {
	if(b % i==0)
	sb=sb+i; 	  
} 
if(sa==sb)  
cout<<"Day la hai so ban be " ;
else cout<<"Day khong phai la so ban be "; 


}


