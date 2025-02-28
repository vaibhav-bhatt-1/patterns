   1
   01
   010
   1010
   10101
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter no. of elements: ";
	cin>>n;
	int bin=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<bin;
			if(bin==1){
				bin=0;
				
			}
			else{
				bin=1;
			}
		}
		cout<<"\n";
	}
}
