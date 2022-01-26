#include <iostream>

bool isPerfect(int no)
{
	int i = 0;
	int sum = 0;

	while (i++ < no)
	{
		if (no % i == 0 && i < no)
		{
			sum += i;
		}
	}
	return sum == no;
}

int main()
{
	float first;
	float second;
	std::cout << "Enter the first number of the range : " << std::endl; 
  std::cin >> first;
	std::cout << "Enter the second number of the range : " << std::endl; 
  std::cin >> second;

	std::cout << "Perfect numbers between " << first << " and " << second << " :" << std::endl;
	for (int i = first; i <= second; i++)
	{
		if (isPerfect(i))
		{
			std::cout << i << std::endl;
		}
	}

	return 0;
}