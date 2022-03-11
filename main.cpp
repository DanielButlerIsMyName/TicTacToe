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



string filds[9] = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
bool winner = false;
string turn = "X";

void clear(){
    system("clear");
}

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

void printGrid(){
    cout << "\n";
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
    cout << "\n";
}

void playerAction(){
    int chosenFild;
    cout << "Player " << turn << " choose a fild: ";
    cin >> chosenFild;
    chosenFild = chosenFild -1;

    if (filds[chosenFild] == "X"){
        cout << "\n This fild is taken by a player please choose another one\n";
        playerAction();
    }else if (filds[chosenFild] == "O")
    {
        cout << "\nThis fild is taken by a player please choose another one\n";
        playerAction();
    }else if (chosenFild == 1  || 2 || 3 || 4 || 5 || 6 || 7 || 8 || 9){
        filds[chosenFild] = turn;

    }else{
        cout << "pleas enter a number of the grid\n";
        playerAction();
    }
}

void checkForWinner(){
    if (filds[0] == "X"  &&  filds[1] == "X" && filds[2] == "X"){
        system("clear");
        printGrid();
        winner = true;
    }else if (filds[0] == "O"  &&  filds[1] == "O" && filds[2] == "O"){
        system("clear");
        printGrid();
        winner = true;
    }else if (filds[3] == "X"  &&  filds[4] == "X" && filds[5] == "X"){
        system("clear");
        printGrid();
        winner = true;
    }else if (filds[3] == "O"  &&  filds[4] == "O" && filds[5] == "O"){
        system("clear");
        printGrid();
        winner = true;
    }else if (filds[6] == "X"  &&  filds[7] == "X" && filds[8] == "X"){
        system("clear");
        printGrid();
        winner = true;
    }else if (filds[6] == "O"  &&  filds[7] == "O" && filds[8] == "O"){
        system("clear");
        printGrid();
        winner = true;
    }else if (filds[0] == "X"  &&  filds[3] == "X" && filds[6] == "X"){
        system("clear");
        printGrid();
        winner = true;
    }else if (filds[0] == "O"  &&  filds[3] == "O" && filds[6] == "O"){
        system("clear");
        printGrid();
        winner = true;
    }else if (filds[1] == "X"  &&  filds[4] == "X" && filds[7] == "X"){
        system("clear");
        printGrid();
        winner = true;
    }else if (filds[1] == "O"  &&  filds[4] == "O" && filds[7] == "O"){
        system("clear");
        printGrid();
        winner = true;
    }else if (filds[2] == "X"  &&  filds[5] == "X" && filds[8] == "X"){
        system("clear");
        printGrid();
        winner = true;
    }else if (filds[2] == "O"  &&  filds[5] == "O" && filds[8] == "O"){
        system("clear");
        printGrid();
        winner = true;
    }else if (filds[0] == "X"  &&  filds[4] == "X" && filds[8] == "X"){
        system("clear");
        printGrid();
        winner = true;
    }else if (filds[0] == "O"  &&  filds[4] == "O" && filds[8] == "O"){
        system("clear");
        printGrid();
        winner = true;
    }else if (filds[2] == "X"  &&  filds[4] == "X" && filds[6] == "X"){
        system("clear");
        printGrid();
        winner = true;
    }else if (filds[2] == "O"  &&  filds[4] == "O" && filds[6] == "O"){
        system("clear");
        printGrid();
        winner = true;
    }
}

void announceWinner(){
    if (turn == "X")
    {
        cout << BOLDRED << "**********************************\n";
        cout << "******* " << BOLDWHITE <<turn << " is the winner.  " << BOLDRED << "********\n";
        cout << "**********************************\n";
    }else if (turn == "O")
    {
        cout << BOLDBLUE << "**********************************";
        cout << "*******" << BOLDWHITE <<turn << "  is the winner.  " << BOLDBLUE << "********";
        cout << "**********************************\n";
    }
    
    
}


int main(int argc, const char * argv[]) {

    while (winner == false)
    {
        if (winner == false){
            turn = "X";
            printGrid();
            playerAction();
            checkForWinner();
        }else if (winner == true){
            announceWinner();
        }else{
            return 0;
        }
        
        if (winner == false){
            turn = "O";
            printGrid();
            playerAction();
            checkForWinner();
        }else if (winner == true){
            announceWinner();
        }else{
            return 0;
        }

    }
    return 0;
}
