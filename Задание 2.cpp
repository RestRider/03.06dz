#include<iostream>
#include<windows.h>


void z_masiv(double masiv[2][10]);
void p_masiv(double masiv[2][10]);




int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double masiv[2][10];

	std::cout << "введите первое число: \n";
	std::cin >> masiv[0][0];

	z_masiv(masiv);
	p_masiv(masiv);
}



void z_masiv(double masiv[2][10])
{
	for (int x = 0; x < 2; x += 1)
	{
		for (int i = 0; i < 10; i += 1)
		{
			masiv[x][i + 1] = masiv[x][i] + 1;
		}
	}
}


void p_masiv(double masiv[2][10])
{
	for (int x = 0; x < 2; x += 1)
	{
		for (int i = 0; i < 10; i += 1)
		{
			std::cout << masiv[x][i] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}