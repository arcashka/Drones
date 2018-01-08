#include "AttachableComponent.h"

UAttachableComponent::UAttachableComponent(TSharedPtr<AVehicle> Owner, std::string Name)
	: Owner(Owner)
	, Name(Name)
{
}

UAttachableComponent::~UAttachableComponent()
{
}

void UAttachableComponent::Activate()
{
}

UAttachableComponent::UAttachableComponent()
{
}
