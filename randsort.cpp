#include <iostream>
#include <vector>

int main(){
	srand(time(NULL));
	std::vector<int> vec ={9,8,7,1,1,23};
	bool srt =true;

	while(srt == true){
		int rand = random() % vec.size();
		vec.push_back(vec[rand]);
		vec.erase(std::next(vec.begin(), rand));

		for(int a=0; a<vec.size()-1; a++){
			if(vec[a] <= vec[a+1]){
				if(a==vec.size()-2){
					srt=false;
				}
			}else{
				break;
			}

		}
	} 
		for(int i =0;i<vec.size();i++){
			std::cout << vec[i] << ";";
		}
}
