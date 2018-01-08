#pragma once

#include "string"

#include "CoreMinimal.h"

#include "Components/ActorComponent.h"

#include "AttachableComponent.generated.h"

class AVehicle;

UCLASS()
class PROJECT_API UAttachableComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UAttachableComponent(TSharedPtr<AVehicle> Owner, std::string Name);
	~UAttachableComponent();
	
	std::string GetName() { return Name; }
	virtual void Activate();

private:
	UAttachableComponent();

private:
	TSharedPtr<AVehicle> Owner;
	std::string Name;
};

