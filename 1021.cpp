#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double value;
	int m1, m50, m25, m10, m05, m01;
	int n100, n50, n20, n10, n5, n2;

	n100 = 0;
	n50 = 0;
	n20 = 0;
	n10 = 0;
	n5 = 0;
	n2 = 0;

	m1 = 0;
	m50 = 0;
	m25 = 0;
	m10 = 0;
	m05 = 0;
	m01 = 0;

	std:cin >> value;
	
    	//número de notas de 100//	    
	while(value >= 100){
		n100++;
		value-=100;
		std::cout << value << "\n";
	}

	//numero de notas de 50//
	while(value>=50){
		n50++;
		value-=50;
	}

	//numero de notas de 20//
	while(value>=20){
		n20++;
		value-=20;
	}

	//numero de notas de 10//
	while(value>=10){
		n10++;
		value-=10;
	}

	//numero de notas de 5//
	while(value>=5){
		n5++;
		value-=5;
	}

	//numero de notas de 2//
	while(value>=2){
		n2++;
		value-=2;
	}

	//numero de moedas de 1
	while(value>=1){
		m1++;
		value-=1;
	}

	//numero de moedas de 0.50
	while(value>=0.50){
		m50++;
		value-=0.50;
	}

	//numero de moedas de 0.25
	while(value>=0.25){
		m25++;
		value-=0.25;
	}

	//numero de moedas de 0.10
	while(value>=0.10){
		m10++;
		value-=0.10;
	}

	//numero de moedas de 0.05
	while(value>=0.05){
		m05++;
		value-=0.05;
	}

	//numero de moedas de 0.01
	while(value>0){
		m01++;
		value-=0.01;
	}

	//imprimir valores
	std::cout <<"NOTAS:\n";
	std::cout <<n100<<" nota(s) de R$ 100.00\n";
	std::cout <<n50<<" nota(s) de R$ 50.00\n";
	std::cout <<n20<<" nota(s) de R$ 20.00\n";
	std::cout <<n10<<" nota(s) de R$ 10.00\n";
	std::cout <<n5<<" nota(s) de R$ 5.00\n";
	std::cout <<"MOEDAS:\n";
	std::cout <<m1<<" moeda(s) de R$ 1.00\n";
	std::cout <<m50<<" moeda(s) de R$ 0.50\n";
	std::cout <<m25<<" moeda(s) de R$ 0.25\n";
	std::cout <<m10<<" moeda(s) de R$ 0.10\n";
	std::cout <<m05<<" moeda(s) de R$ 0.05\n";
	std::cout <<m01<<" moeda(s) de R$ 0.01";
	return 0;
}
