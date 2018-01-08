#pragma once

#include "vector"

class UAttachableComponent;
class UInputSettings;
struct Fkey;

class ComponentController
{
public:
	ComponentController(const UInputSettings* InputSettings);
	~ComponentController();

	void AddComponent(UAttachableComponent Component, FKey& Key);

private:
	std::vector<UAttachableComponent> Components;
	const UInputSettings* InputSettings;
};
