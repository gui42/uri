#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float x, y;
	std::cin >> x >> y;

	//testa primeiro quadrante:
	if(x > 0 && y > 0){
		std::cout << "Q1\n";
		return 0;
	}
	//testa segundo quadrante:
	if(x < 0 && y > 0){
		std::cout << "Q2\n";
		return 0;
	}
	//testa terceiro quadrante:
	if(x < 0 && y < 0){
		std::cout << "Q3\n";
		return 0;
	}
	//testa quarto quadrante:
	if(x > 0 && y < 0){
		std::cout << "Q4\n";
		return 0;
	}
	if(x == 0 && y == 0){
		std::cout << "Origem\n";
		return 0;
	}
	return 0;

}
