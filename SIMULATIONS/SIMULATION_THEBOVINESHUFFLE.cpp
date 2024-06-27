#include <bits/stdc++.h>

using namespace std;


void gud_fun(int pos[], int id[], int id_prime[], int n_cows){
  for (int i = 0; i < n_cows; i ++){
    id[i] = id_prime[pos[i] - 1];
  }
}

void changer(int id[], int id_prime[], int n_cows){
  for (int i = 0; i < n_cows; i ++){
    id_prime[i] = id[i];
  }
}


int main() {
  
  ifstream cin ("shuffle.in");
	ofstream cout ("shuffle.out");

  int n_cows;
  int helper;
  cin >> n_cows;
  
  int pos[n_cows];
  int id[n_cows];
  int id_prime[n_cows];
  
  for (int i = 0; i < n_cows; i ++){
    cin >> pos[i];
  }
  for (int i = 0; i < n_cows; i ++){
    cin >> id[i];
  }
  changer(id, id_prime, n_cows);
  
  
  
  for (int i = 0; i < 3; i ++){
    gud_fun(pos, id, id_prime, n_cows);
    changer(id, id_prime, n_cows);
  }
  
  
  
  for (int i = 0; i < n_cows; i ++){
    cout << id[i] << endl;
  }
  

  return 0;
}