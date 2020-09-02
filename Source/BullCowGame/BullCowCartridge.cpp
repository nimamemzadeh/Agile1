// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"
#include <cstdlib>
#include <ctime>


void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Welcome to Bull Cows! "));
    PrintLine(TEXT("Press enter to continue..."));
    FString roc = "1) Rock\n";
    FString pap = "2) Paper\n";
    FString sci = "3) Scissors\n";
    
    PrintLine(TEXT("====================\n"));
    PrintLine(TEXT("rock paper scissors!\n"));
    PrintLine(TEXT("====================\n"));
    
    PrintLine(roc);
    PrintLine(pap);
    PrintLine(sci);
    
    PrintLine(TEXT("Choose: "));
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{

    
    srand(time(NULL));

    int32 computer = rand() % 3 + 1;

    int32 user = 0;
    FString roc = "1) Rock\n";
    FString pap = "2) Paper\n";
    FString sci = "3) Scissors\n";
    
    if (Input == "rock")
    {
        user = 1;
    }
    else if (Input == "paper")
    {
        user = 2;
    }
    else if (Input == "Scissors")
    {
        user = 3;
    }
    else
    {
        PrintLine("Wrong input");
    }

    
    switch(computer){
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
    
    
    
    if(user == computer){
       PrintLine(TEXT("Draw Game\n"));
    }
    else if(user == 1 && computer == 3){
        PrintLine(TEXT("You Win\n"));
        
    }
    else if(user == 3 && computer == 2){
        PrintLine(TEXT("You Win\n"));
        
    }
    else if(user == 2 && computer == 1){
      PrintLine(TEXT("You Win\n"));
    }
    else{
        PrintLine(TEXT("Computer Wins!\n"));
       
    }
    
    
    
}


