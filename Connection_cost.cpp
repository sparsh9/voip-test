#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float dur = 0;
	float rem = 0;
	float cost = 0;
	float inc = 0;
	float inc_cost = 0; 
	float rate = 0.05;
	
	cout<<"Enter Duration : "<<endl;
	cin>>dur;
	
	rem = dur - 60;
	
	if(dur==0 && dur<0){
		cost = rate;
	}
	
	else{
		inc = round(rem/30); 
		inc_cost = rate*inc;
		cost = rate + rate*inc;
	}
	
	cout<<"Cost of Incremental Duration : "<< inc_cost <<"$"<<endl;
	cout<<"Cost of Connection Duration : "<<cost<<"$"<<endl;
	
	return 0;
}