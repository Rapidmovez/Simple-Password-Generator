//Simple password generator.
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
//the passwords will be saved in a text file called "passwords.txt"
// it is best to run this .cpp file with Code::Blocks
//search for "passwords.txt" in your PC if you cannot find the file
ofstream fout("passwords.txt", ios::out);
int main(){
    //use srand() to generate different passwords
    srand(time(0));
    //length - the specified length of the passwords
    //passnumber - the number of passwords you want to generate
    int length, passnumber;
    cin >> length >> passnumber;
    // generate a number of "passnumber" passwords,
    for (int i = 1; i <= passnumber; i++){
        //with each password having the specified length;
        for (int j = 1; j <= length; j++){
            //in order to utilize less space, we will not have a string with all possible characters that a password may have
            //instead, we will use rand() to generate random values from the ASCII code and we wil convert them to char
            //lastly, we will write each password to the output file
            fout << char((33 + (rand() % 94)));
        }
        fout << endl;
    }
    fout.close();
    return 0;
}
