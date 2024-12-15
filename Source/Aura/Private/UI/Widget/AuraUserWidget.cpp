// VKGames


#include "UI/Widget/AuraUserWidget.h"

void UAuraUserWidget::SetWidegetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
}
