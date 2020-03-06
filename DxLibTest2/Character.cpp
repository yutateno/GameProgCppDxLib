#include "Character.hpp"
#include "CharaDrawComponent.hpp"
#include "Game.hpp"


Character::Character(Game* t_game)
	:Actor(t_game)
{
	SetY(240);
	CharaDrawComponent* cdc = new CharaDrawComponent(this);
	cdc->Load("0.png");

	m_moveSpeed = 10;
}


Character::~Character()
{
}


void Character::UpdateActor()
{
	float x = GetX();
	x += m_moveSpeed;
	if (x > 640)
	{
		x = 0;
	}
	SetX(x);
}
