// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"


void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    //Welcoming The Player
    PrintLine(TEXT("Welcome to Bull Cow!"));
    PrintLine(TEXT("Guess the 4 letter word!"));
    PrintLine(TEXT("Please enter to continue..."));


    SetUpGame();// Setting Up Game


    // Prompt Player For Guess
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();

    if(Input == HiddenWord)
        PrintLine(TEXT("You have Won!"));
    else
        PrintLine(TEXT("You have Lost!"));


    // Check If isogram
    // Prompt To Guess Again
    // Check Right Number of Characters
    //Prompt to Check Again

    // Remove Life

    // Check if Lives > 0
    // If Yes GuessAgain
    // Show Lives Left 
    // If No Show GameOver and HiddenWord?
    // Prompt To Play Again, Press Enter To Play Again?
    // Check User Input      
    // PlayAgain Or Quit
}

void UBullCowCartridge::SetUpGame()
{
    HiddenWord = TEXT("cake"); // Set the HiddenWord
    Lives = 4;// Set Lives
}