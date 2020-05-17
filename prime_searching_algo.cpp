#include<iostream>
#include<vector>

using namespace std; 

std::vector<int> HOLDER;

bool is_prime(int number){
	int primitives[]={2,3,5,7};
	
	int primitive_size = sizeof(primitives)/sizeof(primitives[0]);
	for(int _counter=0; _counter<primitive_size; _counter++){
		if(number%primitives[_counter]!=0) return false;
	} return true;
}


void prime_numbers(int array[], int array_size, bool(*_prime)(int)){

	for(int _counter=0; _counter<array_size; ++_counter){
		if(_prime(array[_counter])==true){
			HOLDER.push_back(array[_counter]);
		}
	}
}


int main(){

	int array_of_values[10], number_of_elements;
	std::cout<<"enter limit: ";
	std::cin>>number_of_elements;
	
	array_of_values[number_of_elements];
	//generator
    for(int iteration=0; iteration<number_of_elements;++iteration){
        array_of_values[iteration]=iteration;
    }
    
	prime_numbers(array_of_values, number_of_elements, is_prime);
	
	for(auto itr = HOLDER.begin(); 
		itr!=HOLDER.end(); ++itr)
		std::cout<<*itr<<" ";
	

	return 0;
}
