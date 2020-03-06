#pragma once
#include <vector>
#include <string>


/*
ゲーム部分
*/
class Game
{
public:
	// コンストラクタとデストラクタ
	Game();
	~Game();

	// メイン部分
	void RunLoop();

	// アクターの追加と削除
	void AddActor(class Actor* t_actor);
	void RemoveActor(class Actor* t_actor);

	// 描画コンポーネントの追加と削除
	void AddDrawComponent(class DrawComponent* t_drawComponent);
	void RemoveDrawComponent(class DrawComponent* t_drawComponent);



private:
	// 全アクターと描画コンポーネント
	std::vector<class Actor*> m_actor;
	std::vector<class DrawComponent*> m_drawComponent;

	// キャラクター
	class Character* mp_character;
};

