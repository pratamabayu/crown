/*
 * Copyright (c) 2012-2017 Daniele Bartolini and individual contributors.
 * License: https://github.com/taylor001/crown/blob/master/LICENSE
 */

#pragma once

#include "core/containers/types.h"
#include "core/math/types.h"
#include "core/memory/types.h"
#include "resource/types.h"
#include "world/types.h"

namespace crown
{
/// Game level.
///
/// @ingroup World
struct Level
{
	u32 _marker;
	Allocator* _allocator;
	UnitManager* _unit_manager;
	World* _world;
	const LevelResource* _resource;
	Array<UnitId> _unit_lookup;

	///
	Level(Allocator& a, UnitManager& um, World& w, const LevelResource& lr);

	///
	~Level();

	///
	void load(const Vector3& pos, const Quaternion& rot);
};

} // namespace crown
