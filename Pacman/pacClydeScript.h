#pragma once

#include "pacGhostScript.h"

namespace pac
{
	class ClydeScript : public GhostScript
	{
	public:
		ClydeScript();
		~ClydeScript() = default;

		void		Initialize() override;

	protected:
		void		PlayAnimByDir(const Vector2& direction) override;

		Vector2		GetTargetPosition(const Vector2& playerPos) override;
	};
}

