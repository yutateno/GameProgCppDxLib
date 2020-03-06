#include "BGDrawComponent.hpp"
#include "Actor.hpp"



BGDrawComponent::BGDrawComponent(Actor* t_owner)
	:DrawComponent(t_owner)
{
}



BGDrawComponent::~BGDrawComponent()
{
}



void BGDrawComponent::Update()
{
}



void BGDrawComponent::Draw()
{
	DrawGraph(0, 0, GetData(), false);
}
