/**
* Author: Léo Hardt.
* Problem: https://hr.gs/abbdcb
* Date: 11/02/2022
**/
#include <iostream>
#include <string>
#include <array>

#define MAP_SZ (6)

int main(){
	std::array<std::array<int, MAP_SZ>, MAP_SZ> map;
	for(int i = 0; i < MAP_SZ; ++i){
		map[i] = std::array<int, MAP_SZ>();
	}
	// Data loading.
	for(int i = 0; i < MAP_SZ; ++i){
		for(int j = 0; j < MAP_SZ; ++j){
			std::cin >> map[i][j];
		}
	}
	// Lower limit for data is -9
	int max_hourglass = (-10) * 7;

	for(int i = 0; i < MAP_SZ - 2; ++i){

		for(int j = 0; j < MAP_SZ - 2; ++j){
			int hourglass = map[  i  ][  j  ]
						  + map[  i  ][j + 1]
						  + map[  i  ][j + 2]
						  + map[i + 1][j + 1]
						  + map[i + 2][  j  ]
						  + map[i + 2][j + 1]
						  + map[i + 2][j + 2];
			max_hourglass = (hourglass > max_hourglass)? hourglass: max_hourglass;
		}
	}

	std::cout << max_hourglass;

	return 0;
}
