// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"
#include <cstdlib>
#include <ctime>


void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();


    //Welcoming The Player
    PrintLine(TEXT("Welcome to Bull Cows! "));
    SetupGame();

}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();

    srand(time(NULL));

    int32 computer = rand() % 3 + 1;

    int32 user = 0;
    FString roc = "Computer: Rock";
    FString pap = "Computer: Paper";
    FString sci = "Computer: Scissors";
    
    if (Input == "rock")
    {
        user = 1;
    }
    else if (Input == "paper")
    {
        user = 2;
    }
    else if (Input == "scissors")
    {
        user = 3;
    }
    else
    {
        PrintLine("Wrong input!");
        return;
    }

    
    switch(computer)
    {
    case 1 :
        PrintLine(roc);
        break;
    case 2 :
        PrintLine(pap);
        break;
    case 3 :
        PrintLine(sci);
        break;
    default :
        PrintLine(TEXT("Invalid Option\n"));
    }
    
    
    
    if(user == computer)
    {
        PrintLine(TEXT("Draw Game"));
    }
    else if(user == 1 && computer == 3)
    {
        PrintLine(TEXT("You Win"));
        ++userWins;
    }
    else if(user == 3 && computer == 2)
    {
        PrintLine(TEXT("You Win"));
        ++userWins;
    }
    else if(user == 2 && computer == 1)
    {
        PrintLine(TEXT("You Win"));
        ++userWins;
    }
    else
    {
        PrintLine(TEXT("Computer Wins!"));
        ++computerWins;
    }

     ShowOutput();
     UserInput();
    
}

void UBullCowCartridge::SetupGame()
{
    ClearScreen();
    userWins = 0;
    computerWins = 0;
    UserInput();
}

void UBullCowCartridge::UserInput()
{
    FString roc = "1) Rock";
    FString pap = "2) Paper";
    FString sci = "3) Scissors";
    
    PrintLine(TEXT("===================="));
    PrintLine(TEXT("rock paper scissors!"));
    PrintLine(TEXT("===================="));
    
    PrintLine(roc);
    PrintLine(pap);
    PrintLine(sci);
    
    PrintLine(TEXT("Choose: "));
}

void UBullCowCartridge::ShowOutput()
{
    PrintLine(TEXT("Computer : You"));
    PrintLine(TEXT("%i : %i"), computerWins, userWins);
    return;
}

