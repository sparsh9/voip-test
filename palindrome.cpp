#include <iostream>
using namespace std;

void palindrome(long int n) {
   int rev=0,temp;
   temp = n;
   while(n > 0) {
      rev = rev * 10 + n % 10;
      n = n / 10;
   }
   if(temp==rev)
   cout<<temp<<" is a palindrome"<<endl;
   else
   cout<<temp<<" is not a palindrome"<<endl;
}
int main() {
	long int n;
   cout<<"Enter the string : ";
	cin>>n;
	palindrome(n);
	return 0;
}