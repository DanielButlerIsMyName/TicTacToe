//
//  Created by Delta on 28.02.22.
//

#include <iostream>
#define RESET   "\033[0m"
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */


using namespace std;


string filds[9] = {"1", "X", "3", "4", "5", "O", "7", "8", "9"};
bool winner = false
string turn = "X"


void getGridInfo(int x){

    string fildData =  filds[x];

    if (fildData == "X"){
        cout << BOLDRED << "X" << RESET;
    }else if (fildData == "O"){
        cout << BOLDBLUE << "O" << RESET;
    }else{
        cout << BOLDGREEN << fildData << RESET;
    }
    
}

void playerAction(){
    
}

int main(int argc, const char * argv[]) {

    while (winner == false)
    {

        cout << "  ";
        getGridInfo(0);
        cout << "  |  ";
        getGridInfo(1);
        cout << "  |  ";
        getGridInfo(2);
        cout << "\n";
        cout << "-----------------\n";
        cout << "  ";
        getGridInfo(3);
        cout << "  |  ";
        getGridInfo(4);
        cout << "  |  ";
        getGridInfo(5);
        cout << "\n";
        cout << "-----------------\n";
        cout << "  ";
        getGridInfo(6);
        cout << "  |  ";
        getGridInfo(7);
        cout << "  |  ";
        getGridInfo(8);
        cout << "\n";

    }
    return 0;
}
