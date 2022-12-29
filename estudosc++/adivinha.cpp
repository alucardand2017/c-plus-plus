#include<iostream>
#include<stdio.h>
using namespace std;

int main(){

const int NUMERO_SECRETO = 35;
int chute = 0;
int tentativas = 0;
bool acertou = false;


while (!acertou)
{
cout << "************" << endl; 
cout << "* ADIVINHA *" << endl;
cout << "************" << endl;
cout << "O número secreto é  "<< NUMERO_SECRETO << ". Não conte para ninguém." << endl;

cout << "Digite um valor para chutar: " << endl;
cin >> chute;
cout << "Seu chute foi " << chute << endl;

bool igual = chute == NUMERO_SECRETO;
bool menor = chute < NUMERO_SECRETO;
bool maior = chute > NUMERO_SECRETO;
system("clear");

if(igual){
    cout << "Parabéns! Acertou o numero"<< endl;
    acertou = true;
}
else if (menor){
    cout << "Seu chute foi menor que o numero secreto."<< endl;
}
else if (maior){
    cout << "Seu chute foi maior que o numero secreto." << endl;
}
tentativas++;
}
cout << "Quantidade de tentativas: " << tentativas <<" tentativas."<< endl;
cout << "Fim de jogo"<< endl;

}