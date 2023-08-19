//Simple password generator.
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
ofstream fout("passwords.txt", ios::out);
int main(){
    srand(time(0));
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()-_+=|\{}[];:',<.>?/|";
    int length, passnumber;
    cin >> length >> passnumber;
    for (int i = 1; i <= passnumber; i++){
        for (int j = 1; j <= length; j++){
            fout << characters[rand() % characters.size()];
        }
        fout << endl;
    }
    fout.close();
    return 0;
}
