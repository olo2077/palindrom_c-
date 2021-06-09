#include <iostream>
using namespace std;
#include <string>

string zdanie;
int i;

int main() {
	cin>>zdanie;
	
	for(int i=0;i<zdanie.length()/2;i++){
		if(zdanie[i]!=zdanie[zdanie.length()-1-i]){
			
		cout<<"nie jest palindromem ";	
				break;
		}
		
		else {
			cout<<"jest palindromem ";
	
			
		}
		
	}
	
}
