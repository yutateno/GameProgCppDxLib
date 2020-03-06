#include "CharaDrawComponent.hpp"
#include "Actor.hpp"



CharaDrawComponent::CharaDrawComponent(Actor* t_owner)
	:DrawComponent(t_owner)
{
}



CharaDrawComponent::~CharaDrawComponent()
{
}



void CharaDrawComponent::Update()
{
}



void CharaDrawComponent::Draw()
{
	DrawGraph(m_owner->GetX(), m_owner->GetY(), GetData(), true);
}
