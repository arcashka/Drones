#include "ComponentController.h"

#include "GameFramework/InputSettings.h"

#include "AttachableComponent.h"
#include "string"
#include "string.h"

ComponentController::ComponentController(const UInputSettings* InputSettings)
	: InputSettings(InputSettings)
{
}

ComponentController::~ComponentController()
{
}

void ComponentController::AddComponent(UAttachableComponent Component, FKey& Key)
{
	int ComponentsNumber = Components.size();
	const FInputAxisKeyMapping AxisMapping(FName(Component.GetName().data()), Key);
	((UInputSettings*)InputSettings)->AddAxisMapping(AxisMapping);
}
