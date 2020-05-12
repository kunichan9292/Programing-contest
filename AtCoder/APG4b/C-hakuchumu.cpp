#include<iostream>
#include<string>
using namespace std;

int main(){
  string S;
  cin >> S;
  int start_point=0;
  int flag =1;

  while(1){
    if(start_point==S.size()){
      break;
    }
    else if(S.size()-start_point<5){
      flag=0;
      break;
    }
    else if(S.substr(start_point,5)=="dream"){
      if(S.substr(start_point+5,2)!="er"
        || S.substr(start_point+5,5)=="erase"){
        start_point+=5;
      }
      else if(S.substr(start_point+5,2)=="er"
            && S.substr(start_point+5,5)!="erase"){
        start_point+=7;
      }
    }
    else if(S.substr(start_point,5)=="erase"){
      if(S.substr(start_point+5,1)!="r"){
        start_point+=5;
      }
      else if(S.substr(start_point+5,1)=="r"){
        start_point+=6;
      }
    }
    else{
      flag=0;
      break;
    }
  }
  if(flag==1) cout << "YES" << endl;
  else cout << "NO" << endl;
}
