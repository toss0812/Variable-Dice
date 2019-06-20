###################################
 Made by: 	Tom Dingenouts
###################################
 Project Name: 	Variable DnD Dice
###################################
/## DESRIPTION ##\
An arduino project using an accelerometer and buttons to randomize a value between 1 and another given value.
used buttons to

## FIELDS ##
diceIndex: int
 *used as index in "diceValues[]" used in "rollDice(int)"

diceValues[]: int
 *array used to store the maxiumum values of the dice

## METHODS ##
rollDice(int): int
 *parameter: index of the dice in "diceValues[]"
 *returns: value between 1 and "parameter"

shiftDice(int): void
 *parameter: direction of dice shifting