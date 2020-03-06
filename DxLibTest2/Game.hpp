#pragma once
#include <vector>
#include <string>


/*
�Q�[������
*/
class Game
{
public:
	// �R���X�g���N�^�ƃf�X�g���N�^
	Game();
	~Game();

	// ���C������
	void RunLoop();

	// �A�N�^�[�̒ǉ��ƍ폜
	void AddActor(class Actor* t_actor);
	void RemoveActor(class Actor* t_actor);

	// �`��R���|�[�l���g�̒ǉ��ƍ폜
	void AddDrawComponent(class DrawComponent* t_drawComponent);
	void RemoveDrawComponent(class DrawComponent* t_drawComponent);



private:
	// �S�A�N�^�[�ƕ`��R���|�[�l���g
	std::vector<class Actor*> m_actor;
	std::vector<class DrawComponent*> m_drawComponent;

	// �L�����N�^�[
	class Character* mp_character;
};

