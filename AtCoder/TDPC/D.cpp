#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N; cin >> N;
  long long D; cin >> D;
  vector<vector<vector<vector<double> > > >dp(N+1,vector<vector<vector<double> > >(61,vector<vector<double> >(61,vector<double>(61))));
  dp.at(0).at(0).at(0).at(0) = 1;
  for(int i=1;i<=N;i++){
    for(int tw=1;tw<=60;tw++){
      for(int th=1;th<=60;th++){
        for(int fi=1;fi<=60;fi++){
          dp.at(i).at(tw).at(th).at(fi) =(double)dp.at(i-1).at(tw).at(th).at(fi)/6 + (double)dp.at(i-1).at(tw-1).at(th).at(fi)/2 + (double)dp.at(i-1).at(tw).at(th-1).at(fi)/3 + (double)dp.at(i-1).at(tw).at(th).at(fi-1)/6;
        }
      }
    }
  }

  int c2 = 0; int c3 = 0; int c5 =0;
  while(D>1){
    if(D%2 == 0){
      D /= 2;
      c2++;
    }
    if(D%3 == 0){
      D /= 3;
      c3++;
    }
    if(D%5 == 0){
      D /= 5;
      c5++;
    }
  }
  cout << c2 << c3 << c5 << endl;
  cout << dp.at(N).at(c2).at(c3).at(c5) << endl;
}
