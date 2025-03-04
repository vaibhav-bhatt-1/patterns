/**
     *
    * *
   * * *
  * * * *
   * * *
    * *
     *

Create an diamond pattern **/
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter no. of elements:";
	cin>>n;
	for(int i=0;i<n/2;i++){
		for(int j=0;j<n-i;j++){
			cout<<" ";
		}
		for(int k=0;k<=i;k++){
			cout<<" "<<"*";
		}
		cout<<"\n";
	}
	for(int i=n/2;i>=0;i--){
		for(int j=n-i-1;j>=0;j--){
			cout<<" ";
		}
		for(int k=i;k>=0;k--){
			cout<<" "<<"*";
		}
		cout<<"\n";
	}
}
