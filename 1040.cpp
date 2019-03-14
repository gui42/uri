#include <iostream>
#include <iomanip>

using namespace std;

void resolve(double media){
	std::cout << "Media: "<<media << "\n";
	if(media < 5){
		std::cout << "Aluno Reprovado.\n";
		return;
	}
	if(media < 6.9){
		double exame;
		std::cout << "Aluno em Exame.\n";
		std::cout << "Nota do Exame: ";
		std::cin >> exame;
		
		media = media +  exame;
		media = media/2;

		if(media >= 7){
			std::cout << "Aluno aprovado.\n";
			std::cout << "Media final: " << media << "\n";
			return ;
		}else{
			std::cout << "Aluno reprovado.\n";
			std::cout << "Media final: " << media << "\n";
			return ;
		}		

		return;
		
	}else{
		std::cout << "Aluno Aprovado.\n";
	}

}

int main(){
	double n1, n2, n3, n4, temp, somabase;
	std::cin >> n1 >> n2 >> n3 >> n4;

	//Calcular a médica
	temp = n1*2 + n2*3 + n3*4 + n4*1;
	somabase = 2+3+4+1;
	temp = temp/somabase;
	resolve(temp);

	return 0;	
		
}
