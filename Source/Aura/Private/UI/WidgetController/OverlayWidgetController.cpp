// VKGames


#include "UI/WidgetController/OverlayWidgetController.h"

#include "AbilitySystem/AuraAbilitySystemComponent.h"
#include "AbilitySystem/AuraAttributeSet.h"

void UOverlayWidgetController::BroadcastInitialValues()
{
	const UAuraAttributeSet* AuraAttributeSet = CastChecked<UAuraAttributeSet>(AttributeSet);

	OnHealthChanged.Broadcast(AuraAttributeSet->GetHealth());
	OnMaxHealthChanged.Broadcast(AuraAttributeSet->GetMaxHealth());
	OnManaChanged.Broadcast(AuraAttributeSet->GetMana());
	OnMaxManaChanged.Broadcast(AuraAttributeSet->GetMaxMana());
	OnEnergyChanged.Broadcast(AuraAttributeSet->GetEnergy());
	OnMaxEnergyChanged.Broadcast(AuraAttributeSet->GetMaxEnergy());

	

}

void UOverlayWidgetController::BindCallBacksToDependencies()
{
	const UAuraAttributeSet* AuraAttributeSet = CastChecked<UAuraAttributeSet>(AttributeSet);
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AuraAttributeSet->GetHealthAttribute()).AddUObject(this,
			&UOverlayWidgetController::HealthChanges
			);
			
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
	AuraAttributeSet->GetMaxHealthAttribute()).AddUObject(this,
		&UOverlayWidgetController::MaxHealthChanges
		);
	
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
AuraAttributeSet->GetManaAttribute()).AddUObject(this,
	&UOverlayWidgetController::ManaChanges
	);
	
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
AuraAttributeSet->GetMaxManaAttribute()).AddUObject(this,
	&UOverlayWidgetController::MaxManaChanges
	);
	
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
AuraAttributeSet->GetEnergyAttribute()).AddUObject(this,
	&UOverlayWidgetController::EnergyChanges
	);
	
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
AuraAttributeSet->GetMaxEnergyAttribute()).AddUObject(this,
	&UOverlayWidgetController::MaxEnergyChanges
	);

	Cast<UAuraAbilitySystemComponent>(AbilitySystemComponent)->EffectAssetsTags.AddLambda(
		[this](const FGameplayTagContainer& AssetTags) // [this] -> 'this' should be the class where the TClass come from.
		{
			for (const FGameplayTag& Tag : AssetTags)
			{

				// For Example say that Tag = Message.HealthPotion 
				//	 * "Message.HealthPotion".MatchesTag("Message") will return True, "Message".MatchesTag("Message.HealthPotion") will return False
				FGameplayTag MessageTag = FGameplayTag::RequestGameplayTag(FName("Message"));
				if (Tag.MatchesTag(MessageTag))
				{
					const FUIWidgetRow* Row = GetDataTableRowByTag<FUIWidgetRow>(MessageWidgetDataTable, Tag);
					MessageWidgetRowDelegate.Broadcast(*Row);
				}
			}
		}
	);
}

void UOverlayWidgetController::HealthChanges(const FOnAttributeChangeData& Data) const
{
	OnHealthChanged.Broadcast(Data.NewValue);

}

void UOverlayWidgetController::MaxHealthChanges(const FOnAttributeChangeData& Data) const
{
	OnMaxHealthChanged.Broadcast(Data.NewValue);
}

void UOverlayWidgetController::ManaChanges(const FOnAttributeChangeData& Data) const
{
	OnManaChanged.Broadcast(Data.NewValue);
}

void UOverlayWidgetController::MaxManaChanges(const FOnAttributeChangeData& Data) const
{
	OnMaxManaChanged.Broadcast(Data.NewValue);
}

void UOverlayWidgetController::EnergyChanges(const FOnAttributeChangeData& Data) const
{
	OnEnergyChanged.Broadcast(Data.NewValue);
}

void UOverlayWidgetController::MaxEnergyChanges(const FOnAttributeChangeData& Data) const
{
	OnMaxEnergyChanged.Broadcast(Data.NewValue);
}
