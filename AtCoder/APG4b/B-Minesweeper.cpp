#include<iostream>
#define _GLIBCXX_DEBUG
using namespace std;

int main(){
  int H,W;
  int c[30][50];
  string S;
  cin >> H >> W;
  for(int i=0;i<H;i++){
   for(int j=0;j<W;j++){
     c[i][j]=0;
   }
  }
  for(int i=0;i<H;i++){
   cin >> S;
   for(int j=0;j<W;j++){
     if(S[j]=='#' && (i!=0 || i!=W-1)){
       c[i][j]+=10;
       c[i-1][j-1]++;
       c[i-1][j]++;
       c[i-1][j+1]++;
       c[i][j-1]++;
       c[i][j+1]++;
       c[i+1][j-1]++;
       c[i+1][j]++;
       c[i+1][j+1]++;
     }
     else if(S[j]=='#' && i==0){
       c[i][j]+=10;
       c[i][j-1]++;
       c[i][j+1]++;
       c[i+1][j-1]++;
       c[i+1][j]++;
       c[i+1][j+1]++;
     }
     else if(S[j]=='#' && i==W-1){
       c[i][j]+=10;
       c[i][j-1]++;
       c[i][j+1]++;
       c[i-1][j-1]++;
       c[i-1][j]++;
       c[i-1][j+1]++;
     }
    }
  }
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      if(c[i][j]>8){
        cout << '#';
      }
      else{
        cout << c[i][j];
      }
    }
    cout << endl;
  }
}
