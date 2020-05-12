#include<iostream>
using namespace std;

int main(){
  int A,B,N;
  cin >> A >> B >> N;

  int x =0;
  int tension = 0;

  while(0<=x){
    if(((A*x)/B - A*(x/B))<((A*(x+1))/B - A*((x+1)/B))){
      if(tension == -1){
        break;
      }
      x++;
      tension = 1;
    }else if(((A*x)/B - A*(x/B))>((A*(x+1))/B - A*((x+1)/B))){
      if(tension == 1){
        break;
      }
      x--;
      tension = -1;
    }else{
      break;
    }
  }
  cout << x << endl;
}
