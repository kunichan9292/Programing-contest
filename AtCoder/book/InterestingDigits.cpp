#include<iostream>
#include<vector>
using namespace std;

int main(){
  int base; cin >> base;
  vector<int>b;
  for(int n=2;n<base;n++){
    bool ok = true;
    for(int i=0;i<base;i++){
      for(int j=0;j<base;j++){
        for(int k=0;k<base;k++){
          if((i*base*base + j*base + k )%n == 0
              && (i + j + k)%n != 0){
              ok = false;
              break;
          }
        }
        if(!ok) break;
      }
      if(!ok) break;
    }
    if(ok) b.push_back(n);
  }
  for(int i=0;i<b.size()-1;i++){
    cout << b.at(i) << ' ';
  }
  cout << b.at(b.size()-1) << endl;
}
