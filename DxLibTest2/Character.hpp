#pragma once
#include "Actor.hpp"



class Character: public Actor
{
public:
	Character(class Game* t_game);
	~Character();

	void UpdateActor() override;


private:
	float m_moveSpeed;
};

