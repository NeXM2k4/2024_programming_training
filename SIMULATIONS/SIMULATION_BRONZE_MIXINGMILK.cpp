#include<bits/stdc++.h>
using namespace std;

int main(){
  
  ifstream cin ("mixmilk.in");
	ofstream cout ("mixmilk.out");
  
  array <int, 3> m;
  array <int, 3> c;
  int aux;
  
  for (int i = 0; i < 3; i ++){
    cin >> c[i] >> m[i];
  }
  
  for (int i = 0; i < 33; i ++){
    //PASOS DEL 1 AL 99
    
    //PASO 1*i
    aux = m[0] + m[1];
    if (aux > c[1]){
      m[1] = c[1];
      m[0] = aux - c[1];
    }
    else{
      m[1] = aux;
      m[0] = 0;
    }
    
    //PASO 2*i
    aux = m[1] + m[2];
    if (aux > c[2]){
      m[2] = c[2];
      m[1] = aux - c[2];
    }
    else{
      m[2] = aux;
      m[1] = 0;
    }
    
    //PASO 3*i
    aux = m[2] + m[0];
    if (aux > c[0]){
      m[0] = c[0];
      m[2] = aux - c[0];
    }
    else{
      m[0] = aux;
      m[2] = 0;
    }
  }
  
  //PASO 100
  aux = m[0] + m[1];
  if (aux > c[1]){
    m[1] = c[1];
    m[0] = aux - c[1];
  }
  else{
    m[1] = aux;
    m[0] = 0;
  }
  
  //IMPRIMIR
  for (int i = 0; i < 3; i ++){
    cout << m[i] << endl;
  }
  
  return 0;
}