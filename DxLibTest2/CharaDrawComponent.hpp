#pragma once
#include "DrawComponent.hpp"



class CharaDrawComponent : public DrawComponent
{
public:
	CharaDrawComponent(class Actor* t_owner);
	~CharaDrawComponent();

	void Update() override;

	void Draw() override;
};

