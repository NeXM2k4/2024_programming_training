#include <bits/stdc++.h>
using namespace std;

int main() 
{
  
  ifstream cin ("lostcow.in");
	ofstream cout ("lostcow.out");
	
	int farmer_position;
	int cow_position;
	cin >> farmer_position >> cow_position;
	
	int initial_farmer_position = farmer_position;
	
	int distance_traveled = 0;
	int counter = 1;
	bool i_found_you = false;
	
	while (!i_found_you){
	  
	  int back_distance = abs(farmer_position - initial_farmer_position);
	  distance_traveled += back_distance;
	  farmer_position = initial_farmer_position;
	  
	  if (counter > 0){
	    for (int i = 0; i < counter; i ++){
	      distance_traveled ++;
	      farmer_position ++;
	      if (farmer_position == cow_position){
	        i_found_you = true;
	        break;
	      }
	    }
	  }
	  
	  if (counter < 0){
	    for (int i = 0; i > counter; i --){
	      distance_traveled ++;
	      farmer_position --;
	      if (farmer_position == cow_position){
	        i_found_you = true;
	        break;
	      }
	    }
	  }
	  
	  counter *= -2;

	}
	
	cout << distance_traveled;
	
  return 0;
}