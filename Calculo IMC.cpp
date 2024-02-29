#include <iostream>
#include <typeinfo>
using std::cout;
using std::stof;
using std::endl;

int main(int argc, char* argv[]){

    // Verificando se a quantia de argumentos passada está correta
    if(argc!=3){
        cout << "usage: Calculo IMC.exe mass height" << endl;
        return 1;}

    // Extração dos dados a serem usados
    float mass = stof(argv[1]);
    float height = stof(argv[2]);

    // Cálculo do IMC
    float imc = mass/(height*height);

    // Imprimir classificação
    if(imc < 17) cout << "Muito abaixo do peso" << endl;
    else if(imc >= 17 && imc < 18.5) cout << "Abaixo do peso" << endl;
    else if(imc >= 18.5 && imc < 25) cout << "Peso normal" << endl;
    else if(imc >= 25 && imc < 30) cout << "Acima do peso" << endl;
    else if(imc >= 30  && imc < 35) cout << "Obesidade" << endl;
    else if(imc >= 35 && imc < 40) cout << "Obesidade severa" << endl;
    else if(imc >= 40) cout << "Obesidade morbida" << endl;

    return 0;    
}
