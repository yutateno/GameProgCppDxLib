#pragma once
#include <vector>



class Actor
{
public:
	enum EState
	{
		Active
		, Dead
	};

	Actor(class Game* t_game);
	virtual ~Actor();

	void Update();

	void UpdateComponents();

	virtual void UpdateActor();

	void AddComponent(class Component* t_component);

	void RemoveComponent(class Component* t_component);

	float GetX() const { return m_x; }
	void SetX(float t_x) { m_x = t_x; }

	float GetY() const { return m_y; }
	void SetY(float t_y) { m_y = t_y; }

	class Game* GetGame() { return m_game; }


private:
	EState m_state;

	float m_x, m_y;

	std::vector<class Component*> m_components;

	class Game* m_game;
};

