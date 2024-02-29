#include <iostream>
using std::cout;
using std::stoi;
using std::endl;

int main(int argc, char* argv[]){

    // Verificando se a quantia de argumentos passada está correta
    if(argc!=2){
        cout << "usage: filename.exe year" << endl;
        return 1;
    }

    // Extração da informação a ser usada
    int year = stoi(argv[1]);

    // Verificação se o ano é bissexto
    if((year % 400 == 0) || (year % 4 == 0 && year % 25 != 0)){
        cout << "O ano " << year << " e bissexto." << endl;
    }
    else{
        cout << "O ano " << year << " nao e bissexto." << endl;
    }

    return 0;
}   


