#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

int main(){
	int tam=10, num, i;
	int *vetor;
	char nome[4];
	
	vetor = (int*)malloc(2*sizeof(int));
	
	cout<<"Gostaria que eu escolhesse 6 numeros de 0 a 60?\n";
	cin>>nome;
	
	srand(time(NULL));
	if (strcmp(nome, "sim") == 0)
	{
		for(i=0;i<6;i++){
		vetor[i]=rand()%61+1;
		cout<<"\n "<<vetor[i]<<"\n";
		}
	}
	else(cout<<"\nObrigado por participar!");
	
	free(vetor);
	return 0;
}
