/*################################
 * Made by: Tom Dingenouts
 *################################
 * [ Variable DnD dice ]
 * 
 * uses buttons to cycle dice type
 * shake dice to randomize number
 * 
 *###############################*/

#include <arduinio.h>

//## Die Definition ##//
const int diceValues[] = {2, 4, 6, 8, 10, 12, 20, 100};

int dice_value = 7;

const int minValue = 0;
const int maxValue = 7;

//## Button Definition ##//
#define dice_UP 2;
#define dice_DN 3;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
  Serial.println("Startup Complete! :)");
}

void loop() {
  //TODO: Buttons Implementeren

  // if [UP] is pressed
  if(){
    shiftDice(true);
  }
  
  // if [DN] is pressed
  if(){
    shiftDice(false);
  }

  //TODO: Gyroscope Implementeren

  rollDice(diceValues[dice_value]);
  shiftDice(true);
  delay(1000);
}


/* ====================
 * Roll Dice Function
 * ====================
 * Parameter is the index of the dice value array
 * 
 * returns a value between 1 and the given parameter
 */
int rollDice(int i){
  int j = i + 1; 
  int r = random(1, j);

  cout << "d" << i << " gives: " << r << endl;
  return r;
  
}

/* ====================================================
 * Shift Dice Function 
 * ====================================================
 * if the parameter is true shift the dice up
 * if the parameter is false shift dice down
 * 
 * shifting up from the maximum shifts to the minimum
 * shifting down from the minumum shifts to the maximum
 */
void shiftDice(bool e){
  cout << "dice was: d" << diceValues[dice_value];
  switch(e){
    case true:
      ++dice_value;
    break;

    case false:
      --dice_value;
    break;
  }
  
  switch(dice_value){
    case -1:
      dice_value = maxValue;
    break;

    case 8:
      dice_value = minValue;
    break;

    default:
    ;
    break;
  }
  cout << " now is " << diceValues[dice_value] << endl;
}

