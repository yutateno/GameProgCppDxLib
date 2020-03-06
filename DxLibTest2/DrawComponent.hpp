#pragma once
#include "Component.hpp"
#include "DxLib.h"
#include <string>


class DrawComponent:public Component
{
public:
	DrawComponent(class Actor* owner);
	~DrawComponent();

	virtual void Draw();

	void Load(std::string t_str);



private:
	int m_loadData;


protected:
	int GetData() const { return m_loadData; }
};

