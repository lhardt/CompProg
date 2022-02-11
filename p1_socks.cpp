/**
* Author: Léo Hardt.
* Problem: https://hr.gs/eabbdd
* Date: 11/02/2022
**/
#include <iostream>
#include <array>

#define N_COLORS (100)

int main(){
	int n, ith_sock, n_pairs = 0;
	/* Could be a hashmap for bigger n_colors */
	std::array<bool, N_COLORS + 1> sock_has;
	sock_has.fill(false);

	std::cin >> n;

	for(int i = 0; i < n; ++i){
		std::cin >> ith_sock;

		if(sock_has[ith_sock]){
			++n_pairs;
			sock_has[ith_sock] = false;
		} else {
			sock_has[ith_sock] = true;
		}
	}

	std::cout << n_pairs;

	return 0;
}
