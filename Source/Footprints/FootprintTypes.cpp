// Fill out your copyright notice in the Description page of Project Settings.

#include "Footprints.h"
#include "FootprintTypes.h"

#include "Engine/DecalActor.h"
#include "PhysicalMaterials/PhysicalMaterial.h"


UParticleSystem* UFootprintTypes::GetFootprintFX(UPhysicalMaterial* PhysMaterial)
{
    EPhysicalSurface SurfaceType = UPhysicalMaterial::DetermineSurfaceType(PhysMaterial);

    UParticleSystem* Result = nullptr;

    switch (SurfaceType)
    {
    case FOOTPRINT_SURFACE_Sand:    Result = SandFX; break;
    default:                        Result = DefaultFX;  break;
    }

    return Result;
}

TSubclassOf<ADecalActor> UFootprintTypes::GetFootprintDecal(UPhysicalMaterial* PhysMaterial)
{
    EPhysicalSurface SurfaceType = UPhysicalMaterial::DetermineSurfaceType(PhysMaterial);

    TSubclassOf<ADecalActor> Result = nullptr;

    switch (SurfaceType)
    {
    case FOOTPRINT_SURFACE_Sand:    Result = SandFootprint; break;
    default:                        Result = DefaultFootprint;  break;
    }

    return Result;
}