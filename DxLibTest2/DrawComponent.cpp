#include "DrawComponent.hpp"
#include "Actor.hpp"
#include "Game.hpp"



DrawComponent::DrawComponent(Actor* t_owner)
	:Component(t_owner)
{
	m_loadData = 0;

	m_owner->GetGame()->AddDrawComponent(this);
}




DrawComponent::~DrawComponent()
{
	DeleteGraph(m_loadData);

	m_owner->GetGame()->RemoveDrawComponent(this);
}




void DrawComponent::Draw()
{
}



void DrawComponent::Load(std::string t_str)
{
	m_loadData = LoadGraph(t_str.c_str());
}
