// VKGames

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "MMC_MaxEnergy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UMMC_MaxEnergy : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()
	UMMC_MaxEnergy();

	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

	private:
	FGameplayEffectAttributeCaptureDefinition DexDef;
	
};
