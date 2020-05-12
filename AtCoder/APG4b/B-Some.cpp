#include<iostream>
using namespace std;

int main(){
	int N,A,B;
 	cin >> N >> A >> B ;
  	int sum;
    int wa=0;
    for(int i=1;i<=N;i++){
      sum=i/10000+i%10000/1000+i%1000/100+i%100/10+i%10;
      if(A<=sum && sum<=B){
        wa+=i;
      }
    }
  	cout << wa << endl;
}
