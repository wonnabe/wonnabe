#include <iostream>
#include <vector>

int main(){
	std::vector<int> vec = {5,4,187,1,56,3,97,65,24,13,3,3};
	int temp;
	for(int s=0; s< vec.size()-1;s++){
		for(int i = 0; i < vec.size()-1; i++){
			if( vec[i] > vec[i+1] ){
				temp=vec[i+1];
				vec[i+1]=vec[i];
				vec[i]=temp;
			}
		}
	}
	for(int a =0; a < vec.size(); a++){
		std::cout << vec[a] << ";";
		}}
