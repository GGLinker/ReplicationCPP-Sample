// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGameMode.h"

#include "LobbyGameState.h"
#include "ReplicationSample/UI/BaseSampleHUD.h"

ALobbyGameMode::ALobbyGameMode()
{
	static ConstructorHelpers::FClassFinder<ABaseSampleHUD> HUD_BP(TEXT("/Game/ThirdPerson/Blueprints/UI/BP_Lobby_HUD"));
	HUDClass = HUD_BP.Class;
	
	GameStateClass = ALobbyGameState::StaticClass();
	DefaultPawnClass = APawn::StaticClass();
}
