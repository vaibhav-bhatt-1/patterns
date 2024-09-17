/**Ques:- Hourglass Alphabet pattern
INPUT:- 7

OUTPUT:-
  ABCDEFG
   BCDEF
    CDE
     D
    CDE
   BCDEF
  ABCDEFG
**/
#include <iostream>
using namespace std;

int main() {
   int n=7;
   for(int i=0;i<n/2;i++){
   	char ch='A';
   	for(int j=0;j<i;j++){
   		cout<<" ";
   		ch=ch+1;
	   }
	for(int k=0;k<n-(i*2);k++){
		cout<<char(ch+k);
	}
	cout<<endl;
   }
   for(int i=n/2+1;i<=n;i++){
   	char ch='A';
   	for(int j=n-i;j>0;j--){
   		cout<<" ";
   		ch=ch+1;
	   }
	for(int k=0;k<i-(n-i);k++){
		cout<<char(ch+k);
		
	}
	cout<<endl;
   }
}
