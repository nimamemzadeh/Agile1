// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"
#include <cstdlib>
#include <ctime>

int32 UBullCowCartridge::Lives=4;

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();


    //Welcoming The Player
    PrintLine(TEXT("Welcome to Bull Cows! "));
    SetupGame();

}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{

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
        ++Lives;
    }
    else if(user == 3 && computer == 2)
    {
        PrintLine(TEXT("You Win"));
        ++Lives;
    }
    else if(user == 2 && computer == 1)
    {
        PrintLine(TEXT("You Win"));
        ++Lives;
    }
    else
    {
        PrintLine(TEXT("Computer Wins!"));
        --Lives;
    }


    if(Lives ==0 )
        EndGame();
    else
        UserInput();
    
}

void UBullCowCartridge::SetupGame()
{
    ClearScreen();
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

void UBullCowCartridge::EndGame()
{
    PrintLine(TEXT("==========Game over=========="));
    return;
}

