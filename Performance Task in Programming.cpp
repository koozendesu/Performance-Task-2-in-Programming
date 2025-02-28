#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std ;

int main () {
    
    // Seed the random number generator with current time
    srand (time(0)) ;
    
    int player1Score = 0, player2Score = 0 ;
    string player1, player2 ;
    char proceedGame ;
    int point = 1 ;
    int roundNum = 1 ;
    
    // Welcome Message
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ; 
    cout << "| Welcome to the Random Number Battle! |\n" ; 
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ; 
    cout << "\n" ; 
    cout << "    Would you like to proceed?\n" ; 
    cout << "    Input (Y/N): " ; 
    cin >> proceedGame ; 
    cout << "\n" ;
    
     // Main Code 
    if (proceedGame == 'y' || proceedGame == 'Y') { 
     
    // Choose either versus AI or Multiplayer 
    int chooseMode ; 
    cout << "   Choose Mode:\n" ;  
    cout << "    1 = Versus Computer\n" ; 
    cout << "    2 = Multiplayer\n" ; 
    cout << "\n" ; 
    cout << "   Enter Mode: " ; 
    cin >> chooseMode ;
    
     if (chooseMode == 1) { 
        cout << "\n" ; 
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ; 
    cout << "      Enter Player 1 name: " ; 
    cin >> player1 ; 
     
    player2 = "Computer" ; 
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ; 
    cout << "\n" ; 
     
    } else if (chooseMode == 2) { 
    // Inputting Names 
    cout << "\n" ; 
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ; 
    cout << "      Enter Player 1 name: " ;
     cin >> player1 ; 
    cout << "      Enter Player 2 name: " ; 
    cin >> player2 ; 
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ; 
    cout << "\n" ; 
    } else { 
        cout << "\n" ; 
        cout << "   Invalid Mode! Try Again Later!" ; 
        return 0 ; 
    } 
    char playAgain = 'Y' ; 
     
    while (playAgain == 'y' || playAgain == 'Y') { 
         
        // Generating random numbers for two playrs  
        int player1Roll = (rand() % 6) + 1 ; 
        int player2Roll = (rand() % 6) + 1 ; 
         
        // Printing the die roll results 
    cout << "=-=-=-=-=-= R O U N D  "<< roundNum << " =-=-=-=-=-=-=-=\n" ; 
    roundNum++ ; 
        cout <<"   "<< player1 << " rolled: " << player1Roll << endl ; 
        cout <<"   "<< player2 << " rolled: " << player2Roll << endl ; 
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n" ; 
        //Determining the winner 
        
        if (player1Roll > player2Roll) { 
            cout << "\n" ; 
            cout << "***************************************\n" ; 
            cout << "   "<< player1 << " wins!\n " ; 
            cout << "  Better luck next time " << player2 << " !\n" << endl ; 
            cout << "***************************************\n" ; 
            player1Score += point ; 
        } else if (player2Roll > player1Roll) { 
            cout << "\n" ; 
            cout << "***************************************\n" ; 
            cout <<"   "<< player2 << " wins!\n" ; 
            cout << "   Better luck next time " << player1 << " !\n" << endl ; 
            cout << "***************************************\n" ; 
            player2Score += point ; 
        } else { 
             
            // TIE 
            cout << "\n" ; 
    cout << "x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-\n" ;   
            cout << "         TIE! No points added. " << endl ; 
    cout << "x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-\n" ;   
        } 
     
        // Score 
         
        cout << "\n" ; 
        cout << "----------------------------------------\n" ; 
        cout << "|              S C O R E S             |\n" ;          
        cout << "----------------------------------------\n" ; 
        cout << "\n" ; 
        cout << "        "<< player1 << ": " << player1Score ;   
        cout << "\n" ; 
        cout << "        "<< player2 << ": " << player2Score ;
        cout << "\n" ;
    
        // Ask to play again 
        cout << "\n" ; 
        cout << "***************************************\n" ; 
        cout << "   Do you want to play again? (Y/N): " ; 
        cin >> playAgain ; 
        cout << "***************************************\n" ; 
        cout << "\n" ; 
    }  
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n" ; 
    cout << "  Thank you for playing! " ; 
    if (player1Score > player2Score) { 
        cout << player1 << " wins!\n" ; 
    } else if (player2Score > player1Score) { 
        cout << player2 << " wins!\n" ; 
    } else { 
        cout << "It's a TIE game!\n" ; 
    } 
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n" ; 
    } else if (proceedGame == 'N' || proceedGame == 'n') { 
    cout << "    Thank You for Playing!" ; 
    } else {
        cout << "    Invalid Respose, terminating game!" ;
    }    
}