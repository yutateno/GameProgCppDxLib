#pragma once



class Component
{
public:
	Component(class Actor* t_owner);

	virtual ~Component();

	virtual void Update();


protected:
	class Actor* m_owner;
};

