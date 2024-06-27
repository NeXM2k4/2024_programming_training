#include <bits/stdc++.h>
using namespace std;

int main() 
{
  
  ifstream cin ("cowsignal.in");
	ofstream cout ("cowsignal.out");
	
	int rows, columns, zoom;
	cin >> rows >> columns >> zoom;
	
	char cow_signal[rows][columns];
	
	for (int i = 0; i < rows; i ++){
	  for (int j = 0; j < columns; j ++){
	    cin >> cow_signal[i][j];
	  }
	}
	
	char new_cow_signal[rows * zoom][columns * zoom];
	
	for (int i = 0; i < rows; i ++){
	  for (int j = 0; j < columns; j ++){
	    for (int a = 0; a < zoom; a ++){
	      for (int b = 0; b < zoom; b ++){
	        if(cow_signal[i][j] == 'X'){
	          new_cow_signal[zoom * i + a][zoom * j + b] = 'X';
	        }
	        else{
	          new_cow_signal[zoom * i + a][zoom * j + b] = '.';
	        }
	      }
	    }
	  }
	}
	
	for (int i = 0; i < (rows * zoom); i ++){
	  for (int j = 0; j < (columns * zoom); j ++){
	    cout << new_cow_signal[i][j];
	  }
	  cout << endl;
	}
	
	
	
	
	
  return 0;
}