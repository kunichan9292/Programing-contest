#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int Judge(vector<string> first,vector<string> second,int N){

  map<string,int>count;
   for(int i=0;i<N;i++){
     count[first.at(i)]++;
     count[second.at(i)]++;
   }

   int MAX = 0;
   for(auto itr = count.begin();itr != count.end();itr++){
     MAX = max(MAX,itr->second);
   }
   return MAX;
 }

int main(){
  int N; cin >> N;
  vector<string>first(N);
  for(int i=0;i<N;i++){
    cin >> first.at(i);
  }
  vector<string>second(N);
  for(int i=0;i<N;i++){
    cin >> second.at(i);
  }

  cout << Judge(first,second,N) << endl;
}
