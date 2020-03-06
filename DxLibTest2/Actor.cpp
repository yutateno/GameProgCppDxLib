#include "Actor.hpp"
#include "Component.hpp"
#include "Game.hpp"



Actor::Actor(Game* t_game)
	:m_state(EState::Active)
	, m_game(t_game)
{
	m_game->AddActor(this);
	m_x = 0;
	m_y = 0;
}


Actor::~Actor()
{
	m_game->RemoveActor(this);

	while (!m_components.empty())
	{
		delete m_components.back();
	}
}


void Actor::Update()
{
	if (m_state == Active)
	{
		UpdateComponents();
		UpdateActor();
	}
}



void Actor::UpdateComponents()
{
	for (auto comp : m_components)
	{
		comp->Update();
	}
}


void Actor::UpdateActor()
{

}


void Actor::AddComponent(Component* t_component)
{
	m_components.push_back(t_component);
}


void Actor::RemoveComponent(Component* t_component)
{
	auto iter = std::find(m_components.begin(), m_components.end(), t_component);
	if (iter != m_components.end())
	{
		m_components.erase(iter);
	}
}