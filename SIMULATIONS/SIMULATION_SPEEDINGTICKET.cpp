#include <bits/stdc++.h>
using namespace std;

int main() 
{
  
  	ifstream cin ("speeding.in");
	ofstream cout ("speeding.out");
	
	int number_road_segments, number_cow_segments;
	cin >> number_road_segments >> number_cow_segments;
	
	int road_segments[2][number_road_segments];
	int cow_segments[2][number_cow_segments];
	
	for (int i = 0; i < number_road_segments; i ++){
	  for (int j = 0; j < 2; j ++){
	    cin >> road_segments[j][i];
	  }
	}
	for (int i = 0; i < number_cow_segments; i ++){
	  for (int j = 0; j < 2; j ++){
	    cin >> cow_segments[j][i];
	  }
	}
	
	int up_speed = 0;
	int road_steps = 0;
	int cow_steps = 0;
	int road_distance = road_segments[0][0];
	int cow_distance = cow_segments[0][0];
	
	while (road_distance < 100 || cow_distance < 100){
	  int difference = cow_segments[1][cow_steps] - road_segments[1][road_steps];
	  if (up_speed < difference){
	    up_speed = difference;
	  }
	  
	  if (road_distance > cow_distance){
	    cow_distance += cow_segments[0][cow_steps + 1];
	    cow_steps ++;
	  }
	  else if (road_distance < cow_distance){
	    road_distance += road_segments[0][road_steps + 1];
	    road_steps ++;
	  }
	  else{
	    road_distance += road_segments[0][road_steps + 1];
	    cow_distance += cow_segments[0][cow_steps + 1];
	    road_steps ++;
	    cow_steps ++;
	  }
	}
	
	cout << up_speed;
	
	
  return 0;
}