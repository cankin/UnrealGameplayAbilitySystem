// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

/**
 * Aura Gameplay Tags
 *
 * singleton containing native gameplay tags
 */

struct FAuraGameplayTags
{
public:
 static const FAuraGameplayTags& Get() { return GameplayTags;}
 static void InitializeNativeGameplayTags();

 FGameplayTag Attributes_Secondary_Armor;
protected:
private:
 static FAuraGameplayTags GameplayTags;
};
