
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Console/Cartridge.h"
#include "BullCowCartridge.generated.h"



UCLASS(Blueprintable)
class BULLCOWGAME_API UBullCowCartridge : public UCartridge
{
    GENERATED_BODY()

    public:
    virtual void BeginPlay() override;
    virtual void OnInput(const FString& Input) override;
    void SetupGame();
    void UserInput();
    void ShowOutput();
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetLives();
    
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "TestCategory")
        int32 userWins = 0;
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "TestCategory")
        int32 computerWins = 0;

    // Your declarations go below!
    private:
    int32 computer;
};
