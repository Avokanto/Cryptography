#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    string n = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&() "; // 72 chars
    srand(static_cast<unsigned int>(time(NULL)));
    for (int i=0; i<72; ++ i){
        cout << "if(om == '" << n[i] << "') "
        << "return \"";
        for (int j=0; j<7; ++j){
            int a = rand() % 4;
            if (a == 0) cout << "π";
            else if (a == 1) cout << "'";
            else if (a == 2)cout << ".";
            else cout << "-";
        }
        cout << "\";" << endl;
    }
}
