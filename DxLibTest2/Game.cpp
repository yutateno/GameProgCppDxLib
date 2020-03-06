#include "Game.hpp"
#include "Actor.hpp"
#include "DrawComponent.hpp"
#include "Character.hpp"
#include "BGDrawComponent.hpp"


Game::Game()
{
	// 背景の生成
	Actor* actor = new Actor(this);
	actor->SetX(0);
	actor->SetY(0);

	BGDrawComponent* bdc = new BGDrawComponent(actor);
	bdc->Load("back.bmp");


	// キャラクターの生成
	mp_character = new Character(this);
}



Game::~Game()
{
	while (!m_actor.empty())
	{
		delete m_actor.back();
	}
	std::vector<Actor*>().swap(m_actor);
	
	while (!m_drawComponent.empty())
	{
		delete m_drawComponent.back();
	}
	std::vector<DrawComponent*>().swap(m_drawComponent);
}



void Game::RunLoop()
{
	for (auto actor : m_actor)
	{
		actor->Update();
	}

	for (auto drawComponent : m_drawComponent)
	{
		drawComponent->Draw();
	}
}



void Game::AddActor(Actor* t_actor)
{
	m_actor.push_back(t_actor);
}



void Game::RemoveActor(Actor* t_actor)
{
	auto iter = std::find(m_actor.begin(), m_actor.end(), t_actor);
	if (iter != m_actor.end())
	{
		std::iter_swap(iter, m_actor.end() - 1);
		m_actor.pop_back();
	}
}



void Game::AddDrawComponent(DrawComponent* t_drawComponent)
{
	m_drawComponent.push_back(t_drawComponent);
}



void Game::RemoveDrawComponent(DrawComponent* t_drawComponent)
{
	auto iter = std::find(m_drawComponent.begin(), m_drawComponent.end(), t_drawComponent);
	m_drawComponent.erase(iter);
}
