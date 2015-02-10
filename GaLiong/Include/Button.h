#pragma once
#include "Preprocess.h"
#include "Entity.h"
#include "Renderer.h"
#include "IClickable.h"

_L_BEGIN
class _L_ Button : public Entity, public IClickable
{
public:
	Button();
	bool CheckClick(Size window, Point point) override final;
	void ClickEventHandler(Point point) override final;
	~Button();
};
_L_END