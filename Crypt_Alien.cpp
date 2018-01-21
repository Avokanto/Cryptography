//Alien Cryptography Program

// π = 2 bytes.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
                            /* Personal Note: π is a foreign character which can sometimes hold more than 1 byte so its not a character but a string. Here it does and there have been changes accordingly */

string a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&()"; // 71 chars

bool FCC (string lol, string el){           // This was created as a result. Necessary for comparing π.
    for (int i=0; i<lol.size(); ++i){
        if ((unsigned char) lol[i] != (unsigned char) el[i]) return false;
    }
    return true;
}

//Alphabet to Alien
string letter_to_ali(char om){          // This is generated from Alien_alphabet_generator.cpp
    if(om == 'a') return ".ππ.'-π";
    if(om == 'b') return "'.π..π'";
    if(om == 'c') return "-π'.-'.";
    if(om == 'd') return "π-'-''.";
    if(om == 'e') return "'-..'ππ";
    if(om == 'f') return "-π-ππ.'";
    if(om == 'g') return "...-.-π";
    if(om == 'h') return "π--.-.'";
    if(om == 'i') return ".'ππ..-";
    if(om == 'j') return "''π--.π";
    if(om == 'k') return "π-''.-π";
    if(om == 'l') return "'.-.'..";
    if(om == 'm') return "'-.-..π";
    if(om == 'n') return "...--'π";
    if(om == 'o') return "-.'--ππ";
    if(om == 'p') return "''π.ππ-";
    if(om == 'q') return "-'-π'π'";
    if(om == 'r') return "-'''-'.";
    if(om == 's') return "''.π''π";
    if(om == 't') return "ππ'.πππ";
    if(om == 'u') return "'π..'-π";
    if(om == 'v') return "'.--π'-";
    if(om == 'w') return ".π.'-'-";
    if(om == 'x') return "π-.ππ-π";
    if(om == 'y') return "..'πππ-";
    if(om == 'z') return "π''''-π";
    if(om == 'A') return "π'π.π.π";
    if(om == 'B') return "'ππ'.ππ";
    if(om == 'C') return "'''πππ'";
    if(om == 'D') return ".π.'.'-";
    if(om == 'E') return "π-'-.'π";
    if(om == 'F') return "ππ.π-π.";
    if(om == 'G') return "π.-.-.π";
    if(om == 'H') return "--...π.";
    if(om == 'I') return "-π--π.-";
    if(om == 'J') return "-..'-''";
    if(om == 'K') return "----ππ'";
    if(om == 'L') return "'π'π.-.";
    if(om == 'M') return "-..'---";
    if(om == 'N') return ".-.πππ.";
    if(om == 'O') return "'.--'.'";
    if(om == 'P') return "'.'π.-π";
    if(om == 'Q') return "π''.-.'";
    if(om == 'R') return "ππ'π.'π";
    if(om == 'S') return ".π..'π-";
    if(om == 'T') return "'πππ'π.";
    if(om == 'U') return "π-'.πππ";
    if(om == 'V') return "'--π'π.";
    if(om == 'W') return "-'-π.'π";
    if(om == 'X') return ".ππ.-ππ";
    if(om == 'Y') return "'π''-.π";
    if(om == 'Z') return "'-.π'.π";
    if(om == '1') return "ππ''.ππ";
    if(om == '2') return ".ππ'π..";
    if(om == '3') return ".'-π..'";
    if(om == '4') return ".-π-..π";
    if(om == '5') return "..-'ππ-";
    if(om == '6') return "'-.π-..";
    if(om == '7') return "-''.'..";
    if(om == '8') return "''-'..π";
    if(om == '9') return "-'.'πππ";
    if(om == '0') return "π.-'...";
    if(om == '!') return "'π-''-.";
    if(om == '@') return ".--π-..";
    if(om == '#') return "'.'π'-.";
    if(om == '$') return "'-.--'.";
    if(om == '%') return ".π-πππ-";
    if(om == '^') return ".'..π.'";
    if(om == '&') return "ππ'--ππ";
    if(om == '(') return "'-''.ππ";
    if(om == ')') return ".'ππ..π";
    
    return "<?>";
}

//Alien to Alphabet
char ali_to_letter(string om){              /* Update: Switch doesn't work so i remade this with if but i
                                             found the comment cool so i keep it.
                                             THIS CODE IS ORGANISED BY COPY PASTING THE ABOVE
                                             SWITCH CASES AS INPUT (PREFERABLY TERMINAL) TO Code_Organizer.cpp !!!NOTE THERES A GLITCH WHEN COPY PASTING THE WHOLE THING SO BE CAREFUL TO PASTE APROX 10 LINES AT A TIME */

    if(FCC(om, ".ππ.'-π")) return 'a';
    if(FCC(om, "'.π..π'")) return 'b';
    if(FCC(om, "-π'.-'.")) return 'c';
    if(FCC(om, "π-'-''.")) return 'd';
    if(FCC(om, "'-..'ππ")) return 'e';
    if(FCC(om, "-π-ππ.'")) return 'f';
    if(FCC(om, "...-.-π")) return 'g';
    if(FCC(om, "π--.-.'")) return 'h';
    if(FCC(om, ".'ππ..-")) return 'i';
    if(FCC(om, "''π--.π")) return 'j';
    if(FCC(om, "π-''.-π")) return 'k';
    if(FCC(om, "'.-.'..")) return 'l';
    if(FCC(om, "'-.-..π")) return 'm';
    if(FCC(om, "...--'π")) return 'n';
    if(FCC(om, "-.'--ππ")) return 'o';
    if(FCC(om, "''π.ππ-")) return 'p';
    if(FCC(om, "-'-π'π'")) return 'q';
    if(FCC(om, "-'''-'.")) return 'r';
    if(FCC(om, "''.π''π")) return 's';
    if(FCC(om, "ππ'.πππ")) return 't';
    if(FCC(om, "'π..'-π")) return 'u';
    if(FCC(om, "'.--π'-")) return 'v';
    if(FCC(om, ".π.'-'-")) return 'w';
    if(FCC(om, "π-.ππ-π")) return 'x';
    if(FCC(om, "..'πππ-")) return 'y';
    if(FCC(om, "π''''-π")) return 'z';
    if(FCC(om, "π'π.π.π")) return 'A';
    if(FCC(om, "'ππ'.ππ")) return 'B';
    if(FCC(om, "'''πππ'")) return 'C';
    if(FCC(om, ".π.'.'-")) return 'D';
    if(FCC(om, "π-'-.'π")) return 'E';
    if(FCC(om, "ππ.π-π.")) return 'F';
    if(FCC(om, "π.-.-.π")) return 'G';
    if(FCC(om, "--...π.")) return 'H';
    if(FCC(om, "-π--π.-")) return 'I';
    if(FCC(om, "-..'-''")) return 'J';
    if(FCC(om, "----ππ'")) return 'K';
    if(FCC(om, "'π'π.-.")) return 'L';
    if(FCC(om, "-..'---")) return 'M';
    if(FCC(om, ".-.πππ.")) return 'N';
    if(FCC(om, "'.--'.'")) return 'O';
    if(FCC(om, "'.'π.-π")) return 'P';
    if(FCC(om, "π''.-.'")) return 'Q';
    if(FCC(om, "ππ'π.'π")) return 'R';
    if(FCC(om, ".π..'π-")) return 'S';
    if(FCC(om, "'πππ'π.")) return 'T';
    if(FCC(om, "π-'.πππ")) return 'U';
    if(FCC(om, "'--π'π.")) return 'V';
    if(FCC(om, "-'-π.'π")) return 'W';
    if(FCC(om, ".ππ.-ππ")) return 'X';
    if(FCC(om, "'π''-.π")) return 'Y';
    if(FCC(om, "'-.π'.π")) return 'Z';
    if(FCC(om, "ππ''.ππ")) return '1';
    if(FCC(om, ".ππ'π..")) return '2';
    if(FCC(om, ".'-π..'")) return '3';
    if(FCC(om, ".-π-..π")) return '4';
    if(FCC(om, "..-'ππ-")) return '5';
    if(FCC(om, "'-.π-..")) return '6';
    if(FCC(om, "-''.'..")) return '7';
    if(FCC(om, "''-'..π")) return '8';
    if(FCC(om, "-'.'πππ")) return '9';
    if(FCC(om, "π.-'...")) return '0';
    if(FCC(om, "'π-''-.")) return '!';
    if(FCC(om, ".--π-..")) return '@';
    if(FCC(om, "'.'π'-.")) return '#';
    if(FCC(om, "'-.--'.")) return '$';
    if(FCC(om, ".π-πππ-")) return '%';
    if(FCC(om, ".'..π.'")) return '^';
    if(FCC(om, "ππ'--ππ")) return '&';
    if(FCC(om, "'-''.ππ")) return '(';
    if(FCC(om, ".'ππ..π")) return ')';
            return '?';
    
}

//Encription Function
string encrypt(string y){
    ofstream objo("encryption.txt");
    for (int i=0; i<y.size(); ++i){
        if (y[i] != ' ')
            objo << letter_to_ali(y[i]) << ' ';
    }
    objo.close();
    ifstream obji("encryption.txt");
    string proxy;
    y.erase(0, y.size());
    while (obji >> proxy){
        y+=proxy;
        y+=' ';
    }
    if (y[y.size()-1] == ' ') y.erase(y.size()-1, 1);
    return y;
}

//Decryption Function
string decrypt(string y){
    ofstream objo("decryption.txt");
    bool check=false;
    for (int i=0; i<y.size(); ++i){             // erase all blanks in the beggining of the string
        if (!isblank(y[i])) break;
        else y.erase(i, 1);
    }
    for (int i=0; i<y.size(); ++i){
        if (y[i] == ' '){
            check = true;
            break;
        }
    }
    if (check == true){                                 // For more than 1 letter
        for(int i=0; i<y.size(); ++i){
            for (int j=i; j<y.size(); ++j){
                if (y[j] == ' '){
                    objo << ali_to_letter(y.substr(i, j-i));
                    i = j;
                    break;
                }
            }
            if (i == y.size()-1){
                for (int j=i; j>0; j--){
                    if (y[j] == ' '){
                        objo << ali_to_letter(y.substr(j+1, i-j));
                        break;
                    }
                }
            }
        }
    }
    if (!check){    // for 1 letter
        objo << ali_to_letter(y);
    }
    
    objo.close();
    ifstream obji("decryption.txt");
    obji >> y;
    return y;
}


//Main Function
int main(){
    char choice;
    string phrase;
    cout << "Press (1) to encrypt.\nPress (2) to decrypt.\n"
    << "Press ctrl + C to quit (for Windows use ctrl + Z).\n" << endl;
    while(cin >> choice){
        switch (choice){
            case '1':
                cout << "Give phrase to encrypt: ";
                cin.ignore();                               /*getline will look for the current line
                                                             http://stackoverflow.com/questions/10553597/cin-and-getline-skipping-input
                                                             cin.ignore() jumps to the next line*/
                getline(cin, phrase);
                cout << encrypt(phrase) << endl;
                break;
            case '2':
                cout << "Give phrase to decrypt: ";
                cin.ignore();
                getline(cin, phrase);
                cout << decrypt(phrase) << endl;
                break;
            default:
                cout << "Choose what you want to do by pressing 1 or 2 and Enter.\n";
        }
    }
}
