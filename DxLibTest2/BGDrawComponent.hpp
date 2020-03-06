#pragma once
#include "DrawComponent.hpp"



class BGDrawComponent : public DrawComponent
{
public:
	BGDrawComponent(class Actor* t_owner);
	~BGDrawComponent();

	void Update() override;

	void Draw() override;
};

