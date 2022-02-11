/**
* Author: Léo Hardt.
* Problem: https://hr.gs/11o9
* Date: 11/02/2022
**/
#include <string>
#include <iostream>

int main(){
	size_t n; // Number of total characters in a string
	std::string pattern; // Pattern that will repeat in that str;

	std::cin >> pattern;
	std::cin >> n;

	size_t len = pattern.length();
	// There are n/len complete strings, plus n%len chars.
	size_t rem_len = n % len;

	// How many 'a's there are in the full pattern and in the
	// last pattern
	size_t full_as = 0, rem_as = 0;

	for(size_t i = 0; i < len; ++i){
		if(pattern[i] == 'a' || pattern[i] == 'A'){
			++full_as;

			if(i < rem_len){
				++rem_as;
			}
		}
	}

	size_t total_as_str = full_as * (n / len) + rem_as;

	std::cout << total_as_str;

	return 0;
}
