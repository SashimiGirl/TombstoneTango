#pragma once

#include "GameFramework/HUD.h"
#include "Components/Widget.h"
//#include "Blueprint/UserWidget.h"

#include "TTHUD.generated.h"

UCLASS()
class ATTHUD : public AHUD
{
	GENERATED_BODY()

public:

	ATTHUD(const FObjectInitializer& ObjectInitializer);

private:

	UPROPERTY()
	UWidget* HUDWidget;
};