#pragma once

#include "CoreMinimal.h"

#include "GameFramework/Pawn.h"

#include "ComponentController.h"

#include "Vehicle.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class PROJECT_API AVehicle : public APawn
{
	GENERATED_BODY()

public:
	AVehicle();

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	virtual void BeginPlay() override;

private:
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);

	USpringArmComponent* CameraSpringArm;
	UCameraComponent* Camera;

	ComponentController* CControler;

	FVector2D MovementInput;
};
