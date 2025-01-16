// VKGames


#include "Input/AuraInputConfig.h"

const UInputAction* UAuraInputConfig::FindAbilityInputAvtionForTag(const FGameplayTag& InputTag,
	bool bLogNotFound) const
{
	for (const FAuraInputAction& Action: AbilityInputActions)
	{
		if (Action.InputAction && Action.InputTag == InputTag)
		{
			return Action.InputAction;
		}
	}
	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Cant Find AbilityInputAction"));
	}
	return nullptr;
}
