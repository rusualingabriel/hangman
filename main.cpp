#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

std::string words[] {"pizza", "eat", "hangman"};
std::string currentword;
std::string guessword;
int gindex;
int cwords[] {5, 3, 7};

void selectword();
void startgame();

int main(){
    std::cout << "==========================Hangman==========================\n";
    selectword();
    startgame();
    return 0;
}

void selectword(){
    srand(time(NULL));
    gindex = rand() % (sizeof(words) / sizeof(words[0]));
    currentword = words[gindex];
    guessword = "";
    for(int i = 0; i < cwords[gindex]; i++)
        guessword.append("*");
}

void listen(){
    
}

void startgame(){
    std::cout << "Cuvantul tau are " << cwords[gindex] << "!\n" << guessword << std::endl;
    std::cout << "Ghiceste:"
}

void checkletter(){
    
}

void refresh(){

}
