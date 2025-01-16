// VKGames


#include "AuraGameplayTags.h"
#include "GameplayTagsManager.h"

FAuraGameplayTags FAuraGameplayTags::GameplayTags;

void FAuraGameplayTags::InitializeNativeGameplayTags()
{

	/** Primary Attributes **/
	GameplayTags.Attributes_Primary_Dexterity = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.Primary.Dexterity"),
	FString("Increases Eenergy"));

	GameplayTags.Attributes_Primary_Strength = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.Primary.Strength"),
FString("Increases Physical Damage"));

	GameplayTags.Attributes_Primary_Intelligence = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.Primary.Intelligence"),
FString("Increases magical damage"));

	GameplayTags.Attributes_Primary_Resilience = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.Primary.Resilience"),
FString("Increases Armor and Armor Penetration"));

	GameplayTags.Attributes_Primary_Vigor = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.Primary.Vigor"),
FString("Increases Health"));

	// Secondary Attributes
	GameplayTags.Attributes_Secondary_Armor = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attribute.Secondary.Armor"),
		FString("Reduces damage taken, improves Block chance"));

	GameplayTags.Attributes_Secondary_ArmorPenetration = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.Secondary.ArmorPenetration"),
	FString("Ignores Percentage of enemy Armor, Increases Critical Hit Chance"));

	GameplayTags.Attributes_Secondary_BlockChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.Secondary.BlockChance"),
FString("Chance to cut incoming damage in half"));

	
	GameplayTags.Attributes_Secondary_CriticalHitChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.Secondary.CriticalHitChance"),
FString("Chance to double damage plus critical hit bonus"));

	GameplayTags.Attributes_Secondary_CriticalHitDamage = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.Secondary.CriticalHitDamage"),
FString("Bonus damage added when critical hit is scored"));

	GameplayTags.Attributes_Secondary_CriticalHitResistance = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.Secondary.CriticalHitResistance"),
FString("Reduced Critical Hit Chance of attacking enemies"));

	GameplayTags.Attributes_Secondary_HealthRegeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.Secondary.HealthRegeneration"),
FString("Amount of Health regenerated every 1 second"));

	GameplayTags.Attributes_Secondary_ManaRegeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.Secondary.ManaRegeneration"),
FString("Amount of Mana regenerated every 1 second"));

	GameplayTags.Attributes_Secondary_EnergyRegeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.Secondary.EnergyRegeneration"),
FString("Amount of Energy regenerated every 1 second"));

	GameplayTags.Attributes_Secondary_MaxHealth = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.Secondary.MaxHealth"),
FString("Maximum amount of Health obtainable"));

	GameplayTags.Attributes_Secondary_MaxMana = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.Secondary.MaxMana"),
FString("Maximum amount of Mana obtainable"));

	GameplayTags.Attributes_Secondary_MaxEnergy = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("Attribute.Secondary.MaxEnergy"),
FString("Maximum amount of Energy obtainable"));

	// Input Attributes
	GameplayTags.InputTag_LMB = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.LMB"),
		FString("Input Tag for left Mouse Button"));
	
	GameplayTags.InputTag_RMB = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("InputTag.RMB"),
	FString("Input Tag for right Mouse Button"));

	GameplayTags.InputTag_1 = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("InputTag.1"),
	FString("Input Tag for Key 1 Button"));

	GameplayTags.InputTag_2 = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("InputTag.2"),
FString("Input Tag for Key 2 Button"));

	GameplayTags.InputTag_3 = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("InputTag.3"),
FString("Input Tag for Key 3 Button"));

	GameplayTags.InputTag_4 = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("InputTag.4"),
FString("Input Tag for Key 4 Button"));

	GameplayTags.InputTag_5 = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("InputTag.5"),
FString("Input Tag for Key 5 Button"));

	GameplayTags.InputTag_Q = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("InputTag.Q"),
FString("Input Tag for Key Q Button"));
}
