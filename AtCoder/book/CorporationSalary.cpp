#include<iostream>
#include<vector>
using namespace std;

vector<long long>Salaries(50,0);

long long getSalary(int i,vector<string> relations){
  if(Salaries.at(i) != 0) return Salaries.at(i);
  for(int j=0;j<relations.size();j++){
    if(relations.at(i).at(j) == 'Y'){
      Salaries.at(i) += getSalary(j,relations);
    }
  }
  if(Salaries.at(i) == 0) return 1;
  return Salaries.at(i);
}

long long totalSalary(vector<string> relations){
  long long total = 0;
  for(int i=0;i<relations.size();i++){
    total += getSalary(i,relations);
  }
  return total;
}

int main(){
  int N; cin >> N;
  vector<string>relations(N);
  for(int i=0;i<N;i++){
    cin >> relations.at(i);
  }

  cout << totalSalary(relations) << endl;

}
