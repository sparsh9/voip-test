#include <iostream>
using namespace std;

int top;
char status[3][6];
int vacant[18];  

	int CAR_IN(){
		if(top==-1){
			cout<<"No Space"<<endl;
		}
		else{
			int row = (vacant[top]/6);
			int col = vacant[top]%6;
			status[row][col] = '*';
			vacant[top] = -1;
			top = top-1;
		}
		
		return 0;
		
	}
	
	int CAR_OUT(int position){
		int row = position/6;
		int col = position%6;
		if(status[row][col] == '0'){
			cout<<"Already Vacant"<<endl;
		}
		else{
			status[row][col] = '0';
			top = top+1;
			vacant[top] = position;
		}
		return 0;
	}
	
	int CAR_STATUS(){
	for(int i=0; i<3; i++){
		for(int j=0; j<6; j++){
			cout<<status[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
		
	}


int main() {
	int position;
	top = 17;
	for(int i=0; i<18; i++){
		vacant[i]= i;
	}
	
	for(int i=0; i<3; i++){
		for(int j=0;j<6;j++){
			status[i][j] = '0';
		}
	}
	
	int choice;
	
	cout<<"Press 1 for CAR IN"<<endl;
	cout<<"Press 2 for CAR OUT"<<endl;
	cout<<"Press 3 for CAR STATUS"<<endl;
	
	CAR_IN();
	CAR_IN();
	CAR_IN();
	CAR_IN();
	CAR_IN();
	
	cin>>choice;
	
	if(choice == 1){
		CAR_IN();
		CAR_STATUS();
	}
	
	else if(choice == 2){
		cin>>position;
		CAR_OUT(position);
		CAR_STATUS();
	}
	
	else if(choice == 3){
		CAR_STATUS();
	}
		
		
	return 0;
}