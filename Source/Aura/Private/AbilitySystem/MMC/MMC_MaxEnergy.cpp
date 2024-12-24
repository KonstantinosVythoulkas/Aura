// VKGames


#include "AbilitySystem/MMC/MMC_MaxEnergy.h"

#include "AbilitySystem/AuraAttributeSet.h"
#include "Interaction/CombatInterface.h"

UMMC_MaxEnergy::UMMC_MaxEnergy()
{
	DexDef.AttributeToCapture = UAuraAttributeSet::GetDexterityAttribute();
	DexDef.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	DexDef.bSnapshot = false;

	RelevantAttributesToCapture.Add(DexDef);
}

float UMMC_MaxEnergy::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluateParams;
	EvaluateParams.SourceTags = SourceTags;
	EvaluateParams.TargetTags = TargetTags;

	float Dexterity = 0;
	GetCapturedAttributeMagnitude(DexDef, Spec, EvaluateParams, Dexterity);
	Dexterity = FMath::Max<float>(Dexterity, 0.f);

	ICombatInterface* CombatInterface = Cast<ICombatInterface>(Spec.GetContext().GetSourceObject());
	const int32 PlayerLevel = CombatInterface->GetPlayerLevel();

	return 60.f + 1.5f * Dexterity + 8.f * PlayerLevel;
}
