#include <iostream>
using namespace std;
int main()
{
	int low, high, flag, temp;
	count <<"Enter two numbers(intervals): ";
	cin >> low >> high;
	//swapping numbers if low is greater than high
	if (low > high) {
		temp = low;
		low = high;
		high = temp;
	}
	count << "Prime numbers between" << low << "and" << high << "are:;
	while (low < high)
	{
		flag = 0;
		for(int i = 2; i <= low/2; i++)
		{
			if(low % i == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			count << low << "";
		++low;
		}
		return 0;
}
