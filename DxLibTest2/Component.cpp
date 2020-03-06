#include "Component.hpp"
#include "Actor.hpp"


Component::Component(Actor* t_owner)
	:m_owner(t_owner)
{
	m_owner->AddComponent(this);
}



Component::~Component()
{
	m_owner->RemoveComponent(this);
}



void Component::Update()
{
}