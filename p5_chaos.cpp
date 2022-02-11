/**
* Author: Léo Hardt.
* Problem: https://hr.gs/fccdad
* Date: 11/02/2022
**/
#include <iostream>
#include <vector>

int main(){
	int n_tasks = 0;

	std::cin >> n_tasks;

	for(int i_task = 0; i_task < n_tasks; ++i_task){

		int n_people = 0, n_bribes = 0;
		std::vector<int> people = std::vector<int>();
		std::vector<int> bribes = std::vector<int>();
		std::cin >> n_people;

		// The number of bribes is, essentially,
		// the number of swaps needed to order
		// the list.
		for(int i = 0; i < n_people; ++i){
			int thisPerson;
			std::cin >> thisPerson;
			people.push_back(thisPerson - 1);
			bribes.push_back(0);
		}

		bool chaotic = false;
		bool changesSomething = true;
		int next_start_i = 0;

		while(changesSomething && !chaotic){
			changesSomething = false;
			for(int i = next_start_i; i < n_people-1 && !chaotic; ++i ){
				if(people[i] > people[i+1]){

                    ++n_bribes;
                    ++bribes[ people[i] ];

					if(bribes[ people[i] ] > 2){
						chaotic = true;
					}

                    int tmp = people[i];
                    people[i] = people[i+1];
                    people[i+1] = tmp;

                    changesSomething = true;


					next_start_i = i;
                    break;
                }
			}
		}

		if(chaotic){
			std::cout << "Too chaotic" << std::endl;
		} else {
			std::cout << n_bribes << std::endl;
		}
	}

	return 0;
}
