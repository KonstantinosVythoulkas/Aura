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
}
