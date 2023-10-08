#pragma once

#include "GameFramework/HUD.h"
//#include "GameFramework/Widget.h"

#include "TTHUD.generated.h"

UCLASS()
class ATTHUD : public AHUD
{
	GENERATED_BODY()

	ATTHUD(const FObjectInitializer& ObjectInitializer);

private:
	/*UPROPERTY(EditDefaultsOnly)
	UWidget* HUDWidget;*/
};