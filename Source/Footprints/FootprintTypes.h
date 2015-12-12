// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/DataAsset.h"
#include "FootprintTypes.generated.h"

/**
 *
 */
UCLASS()
class FOOTPRINTS_API UFootprintTypes : public UDataAsset
{
    GENERATED_BODY()

    /** FX for footprints on the default material */
    UPROPERTY(EditDefaultsOnly, Category = Effect)
    UParticleSystem* DefaultFX;

    /** decal for footprints on the default material */
    UPROPERTY(EditDefaultsOnly, Category = Effect)
    TSubclassOf<class ADecalActor> DefaultFootprint;

    /** FX for footprints on sand */
    UPROPERTY(EditDefaultsOnly, Category = Effect)
    UParticleSystem* SandFX;
    
    /** decal for footprints on sand */
    UPROPERTY(EditDefaultsOnly, Category = Effect)
    TSubclassOf<class ADecalActor> SandFootprint;

public:

    UParticleSystem* GetFootprintFX(UPhysicalMaterial* PhysMaterial);
    TSubclassOf<class ADecalActor> GetFootprintDecal(UPhysicalMaterial* PhysMaterial);

};

#define FOOTPRINT_SURFACE_Default   SurfaceType_Default
#define FOOTPRINT_SURFACE_Sand     	SurfaceType1