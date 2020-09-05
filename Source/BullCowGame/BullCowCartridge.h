
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Console/Cartridge.h"
#include "BullCowCartridge.generated.h"

static int32 userWins;
static int32 computerWins;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BULLCOWGAME_API UBullCowCartridge : public UCartridge
{
    GENERATED_BODY()

    public:
    virtual void BeginPlay() override;
    virtual void OnInput(const FString& Input) override;
    void SetupGame();
    void UserInput();
    void ShowOutput();

    // Your declarations go below!
    private:
    int32 computer;
};
