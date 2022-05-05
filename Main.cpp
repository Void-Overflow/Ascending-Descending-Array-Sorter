#include <iostream>
#include <string>

int main() {
	int arr[7] = {0, 0, 0, 0, 0, 0, 0};
	int out[7] = {0, 0, 0, 0, 0, 0, 0};

	bool action = false;
	std::cout << "Would you like to sort by ascending or descending? (1/0 respectivly) : ";
	std::cin >> action;
	std::cout << '\n';

	std::cout << "Enter array values at each respective index : ";

	for (int i = 0; i <= 6; i++) {
		std::cin >> arr[i];
		std::cout << ": ";
	}

	for (int x = 0; x <= 6; x++) {
		int pos = 0, counter = 0, repetition = 0;

		for (int y = 0; y <= 6; y++) {
			if (arr[y] > arr[x] && action == false)
				pos++;
			else if(arr[y] < arr[x] && action == true)
				pos++;
			else if (arr[y] == arr[x]) {
				counter++;
				if (counter > 1)
					repetition++;
			}
		}

		if (repetition >= 1) {
			out[pos] = arr[x];

			if (repetition > 1) {
				for (int i = 0; i <= repetition; i++)
					out[pos + i] = arr[x];
			} else
				out[pos + 1] = arr[x];
		}
		else
			out[pos] = arr[x];
	}


	std::cout << "Output : ";
	for (int i = 0; i <= 6; i++) 
		std::cout << out[i] << ", ";

	std::string exitstr;
	std::getline(std::cin, exitstr);
	return 0;
}