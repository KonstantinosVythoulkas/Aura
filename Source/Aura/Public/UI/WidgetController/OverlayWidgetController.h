// VKGames

#pragma once

#include "CoreMinimal.h"
#include "UI/WidgetController/AuraWidgetController.h"
#include "OverlayWidgetController.generated.h"


USTRUCT(BlueprintType)
struct FUIWidgetRow : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayTag MessageTag = FGameplayTag();


	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Message = FText();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<class UAuraUserWidget> MessageWidget;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UTexture2D* Image = nullptr;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttributeChnageSignature, float, NewValue);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMessageWidgetRowSignature, FUIWidgetRow, Row);




/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class AURA_API UOverlayWidgetController : public UAuraWidgetController
{
	GENERATED_BODY()
public:
	virtual void BroadcastInitialValues() override;
	virtual void BindCallBacksToDependencies() override;

	UPROPERTY(BlueprintAssignable, Category = "Gas|Attributes")
	FOnAttributeChnageSignature OnHealthChanged;

	UPROPERTY(BlueprintAssignable, Category = "Gas|Attributes")
	FOnAttributeChnageSignature OnMaxHealthChanged;

	UPROPERTY(BlueprintAssignable, Category = "Gas|Attributes")
	FOnAttributeChnageSignature OnManaChanged;

	UPROPERTY(BlueprintAssignable, Category = "Gas|Attributes")
	FOnAttributeChnageSignature OnMaxManaChanged;

	UPROPERTY(BlueprintAssignable, Category = "Gas|Attributes")
	FOnAttributeChnageSignature OnEnergyChanged;

	UPROPERTY(BlueprintAssignable, Category = "Gas|Attributes")
	FOnAttributeChnageSignature OnMaxEnergyChanged;

	UPROPERTY(BlueprintAssignable, Category = "Gas|Messages")
	FMessageWidgetRowSignature MessageWidgetRowDelegate;

protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Widgets Data")
	TObjectPtr<UDataTable> MessageWidgetDataTable;
	

	template<typename T>
	T* GetDataTableRowByTag(UDataTable* DataTable, const FGameplayTag& Tag);
};

template <typename T>
T* UOverlayWidgetController::GetDataTableRowByTag(UDataTable* DataTable, const FGameplayTag& Tag)
{
	return  DataTable->FindRow<T>(Tag.GetTagName(), TEXT(""));

}


