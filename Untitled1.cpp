#include<iostream>
using namespace std;



int main(){ 
  int n; int sodao = 0;
   cout<<"Nhap so can kiem tra " ;
	cin>>n; 

    int a=n; 
    while (n > 0) {
        sodao = sodao * 10 + n % 10;
        n /= 10;
    }
    
     if(a==sodao){
	
	 cout<<a<<"Day la so so doi xung" <<endl;  }


}


