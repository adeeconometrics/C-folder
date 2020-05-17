#include<iostream>

using namespace std;

bool is_prime(int num){
	// set of primitives 2,3,5,7,9
	int set_of_primitives[]={2,3,5,7};
	int array_size = sizeof(set_of_primitives)/sizeof(set_of_primitives[0]);
	
	for(int counter=0; counter<array_size; counter++){
		if(num%set_of_primitives[counter]!=0){
			return false;
		}
	}
	return true;
}

int main(){
	int num;
	
	do{
		std::cout<<"enter number: ";
		std::cin>>num;
		
		if(is_prime(num)==true){
			std::cout<<"the number is prime.\n";
		}else std::cout<<"the number is not a prime number\n";
	}while(num!=1);
}
