/**
* Author: Léo Hardt.
* Problem: https://hr.gs/16xx
* Date: 11/02/2022
**/
#include <iostream>
#include <vector>

int main(){
	std::vector<int> data;

	int n_values, n_rot;

	std::cin >> n_values >> n_rot;

	for(int i = 0; i < n_values; ++i){
		int tmp;
		std::cin >> tmp;
		data.push_back(tmp);
	}

	for(int i = n_rot; i < n_values; ++i){
		std::cout << data[i]  << " ";
	}
	for(int i = 0; i < n_rot; ++i){
		std::cout << data[i] << " ";
	}

	return 0;
}
