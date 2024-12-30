// VKGames


#include "AbilitySystem/Data/AttributeInfo.h"

FAuraAttributeInfo UAttributeInfo::FindAttributeInfoForTag(const FGameplayTag& AttributeTag, bool bLogNoFound) const
{
	for (const FAuraAttributeInfo& Info : AttributeInformation)
	{
		if (Info.AtributeTag == AttributeTag)
		{
			return Info;
		}
	}
	if (bLogNoFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't Find Info for AttributeTag [%s] on AttributeInfo [%s]"), *AttributeTag.ToString(), *GetNameSafe(this));
	}
	return FAuraAttributeInfo();
}
