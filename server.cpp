#include <iostream>
using namespace std;

int main() {
	float calls = 0;
	int server;
	float server_1 = 0;
	float server_2 = 0;
	float server_3 = 0;
	float server_4 = 0;
	
	cout<<"Enter Total Calls"<<endl;
	cin>>calls;
	float temp = calls;
	
	if(calls == 0){
		cout<<"All servers are full";
	}
	
	else{
		for(int i=0;i<calls;i++){
		
		cin>>server;
		
		switch(server){
		case 1: 
		server_1++;
		temp--;
		break;
		
		case 2: 
		server_2++;
		temp--;
		break;
		
		case 3: 
		server_3++;
		temp--;
		break;
		
		case 4: 
		server_4++;
		temp--;
		break;
		
		default:
		cout<<"Wrong Input"<<endl;
		break;
			
		}
	}
	}
	
	cout<<"Server 1 : "<<server_1<<endl;
	cout<<"Server 2 : "<<server_2<<endl;
	cout<<"Server 3 : "<<server_3<<endl;
    cout<<"Server 4 : "<<server_4<<endl;
	
	return 0;
}