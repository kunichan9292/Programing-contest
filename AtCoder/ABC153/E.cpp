#include<iostream>
#include<vector>
#include<tuple>
using namespace std;

int main(){
  int H,N;
  cin >> H >> N;
  vector<tuple<int,int,double> >AE(N);

  for(int i=0;i<N;i++){
    cin >> get<0>(AE.at(i));
    cin >> get<1>(AE.at(i));
    get<2>(AE.at(i))=get<0>(AE.at(i))/get<1>(AE.at(i));
  }

  long long bibide=0;

  while(H>0){
    double max=0;
    int x;
    for(int i=0;i<N;i++){
      if(max < (get<2>(AE.at(i))) && H > get<0>(AE.at(i))){
        max = get<2>(AE.at(i));
        x = i;
      }
    }
    H -= H/get<0>(AE.at(x))*get<0>(AE.at(x));
    bibide += H/get<0>(AE.at(x))*get<1>(AE.at(x));
  }
  cout << bibide << endl;
}
