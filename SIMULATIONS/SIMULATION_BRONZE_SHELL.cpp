#include<bits/stdc++.h>
using namespace std;

int main(){
  
  ifstream cin ("shell.in");
	ofstream cout ("shell.out");
  
  int N;
  cin >> N;
  
  int a[N], b[N], g[N];
  int puntos[3] = {0, 0, 0};
  int pos = 0;
  
  for (int i = 0; i < N; i ++){
    cin >> a[i] >> b[i] >> g[i];
  }
  
  for (int i = 0; i < 3; i ++){
    
    pos = i + 1;
    
    for (int j = 0; j < N; j ++){
      
      if (pos == a[j]){pos = b[j];}
      else if (pos == b[j]){pos = a[j];}
      if (pos == g[j]){puntos[i] ++;}
      
    }
  }
  
  int p_max = puntos[0];
  
  for (int i = 0; i < 3; i ++){
    
    if (puntos[i] > p_max){
      p_max = puntos[i];
    }
  }
  
  cout << p_max;
  
  return 0;
}