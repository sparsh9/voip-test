#include <iostream>
#include <string>
#include <cstring> 
#include <sstream> 
using namespace std;

int main() {
  
  string IP_1;
  cin>>IP_1;
  
  string IP_2;
  cin>>IP_2;
 
  string r1 = IP_1.substr(10,3);
  string r2 = IP_1.substr(14,2);
  string  r3 = IP_2.substr(10,4);
  
  stringstream range_1(r1);
  stringstream range_2(r2);
  stringstream range_3(r3);
  
  int range1 = 0;
  int range2 = 0;
  int range3 = 0;
  
  range_1>> range1;
  range_2>> range2;
  range_3>> range3;
  
  
  string cmp1 = IP_1.substr(0,9);
  string cmp2 = IP_2.substr(0,9);
  
  if(cmp1 == cmp2){
  	if( range2 <= range3 && range1 >= range3){
  		cout<<"IP Matched";
  	}
  	else{
  		cout<<"Not Matched";
  	}
  }
  
  else{
  	cout<<"Not Matched";
  }
  
  return 0;
}
