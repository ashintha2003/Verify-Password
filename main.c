#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

//MAKE GLOBAL VARIABLES
char PASSWORD[50];
int LENGTH_OF_PASSWORD = 0;
bool PASSWORD_SATISFIED = true;
//

void CHECKER();
int main(void) {

    //GET THE PASSWORD FROM THE USER
    printf("GIVE THE PASSWORD: ");
    scanf("%s", &PASSWORD);
    printf("THE PASSWORD YOU ENTERED: %s", PASSWORD);  //PRINT THE PASSWORD AGAIN TO BE SEEN BY THE USER
    LENGTH_OF_PASSWORD = (int)strlen(PASSWORD);  //STORE THE NUMBER OF CHARACTERS THAT THE USER ENTERED
    //

    //CHECK WHETHER IT IS ACCEPTABLE
    CHECKER();
    //

    //PRINT THE RESULTS
    if (PASSWORD_SATISFIED == true){printf("\n\nYES");}else{printf("\n\nFALSE");}
    //

}

void CHECKER() {
    //MAKE VARIABLES TO STORE THE CURRENT MAX NUMBER AND CURRENT MAX CHARACTER
    int MAX_NUMBER = 0;
    char MAX_CHARACTER;
    bool PREVIOUS_LETTER = false;
    int dummy = 0;
    //
  for (int i=0; i<LENGTH_OF_PASSWORD; i++) {  //GO THROUGH THE PASSWORD
     if (isdigit(PASSWORD[i])) {  //NUMBER
         //CHECK WHETHER THE NUMBER IS GREATER THAN OR EQUAL TO THE MAX NUMBER AND PREVIOUS_LETTER MUST BE FALSE, THEN STORE THE NUMBER ELSE BREAK
         if (PASSWORD[i] - '0' >= MAX_NUMBER  && PREVIOUS_LETTER == false) {
             MAX_NUMBER = PASSWORD[i] - '0';
         }else {
             PASSWORD_SATISFIED = false;
             break;
         }
         //
     }else {  //LETTER
      if (dummy == 0){MAX_CHARACTER = PASSWORD[i]; dummy++; }
      PREVIOUS_LETTER = true;  //ONCE IT ENTER, MAKE PREVIOUS_LETTER AS TRUE
      //CHECK WHETHER THE LETTER IS LOWER CASE
      if (PASSWORD[i] < 'a' || PASSWORD[i] > 'z') {
          PASSWORD_SATISFIED = false;
          break;
      }
      //
      //CHECK WHETHER THE LETTER IS GREATER THAN THE MAX_CHARACTER ELSE BREAK
      if (PASSWORD[i] < MAX_CHARACTER) {
          PASSWORD_SATISFIED = false;
          break;
      }
     }
  }
}