#ifndef FUNCS_H_
#define FUNCS_H_
#include<windows.h>
#include<map>
#include<random>
#include<ctime>
using namespace std;
const int MAX=10001;
struct card{//卡片属性面板 
	string name;//卡片名字 
	int cardtype;//卡片类型 
	int cardattack_wu;//卡片物理攻击 
	int cardattack_fa;//卡片法术攻击 
	int carddefend_wu;//卡片物理防御 
	int carddefend_fa;//卡片法术防御 
	int carddefend_fan;//卡片防御反伤 
	int cardtypenames[MAX]={};//卡片属性 
	int cardtypenames_index;//记录卡片属性数 
}; 
class people{
	private:
		string name;//名字 
		card cards[MAX]={};//拥有的卡牌
		int cards_num;//拥有的卡牌数
		int things[MAX]={};//拥有的物品
		int things_num;//拥有的物品数
		map<card,int> cardnums;//对应卡片的张数
		map<int,int> thingnums;//对应物品的个数
		int level=1;//等级 
		int health=11; //生命值  
		int experience=0;//经验值 
	public:
		people(int a,int b,int c):level
}; 
struct NPC{
	string name;//名字 
	card cards[MAX]={};//拥有的卡牌
	int cards_num;//拥有的卡牌数
	int things[MAX]={};//掉落的物品 
	int things_num;//掉落的物品数
	map<card,int> cardnums;//对应卡片的张数
	map<int,int> thingnums;//对应物品的个数
	int level;//等级 
	int health; //生命值  
	int experience;//奖励的经验 
};
card CARDs[MAX]; 
enum cartype{
	defaults=-1,//默认
	NPCs=0,//电脑卡牌，玩家不可获得
	often=1,//普通卡牌
	sometimes=2,//优秀卡牌
	never=3,//大师卡牌
	amazing=4,//顶级卡牌
	unbeliveble=5,//史诗卡牌
	legend=6//传奇卡牌 
}; 
enum cartypenames{
	none=-1,//无属性 
	knife=0,//刀
	attacker=1,//剑
	fu=2,//斧
	dun=3,//盾
	fire=4,//火
	ice=5,//冰
	magical=6//神奇 
}; 
void init();
void show(int id);
void show(people p);
void attack(people &p,NPC &n);
int show_menu(const string show_content,initializer_list<string> strs);
inline int max_card(int level,people p){
	if(level==1)	return 2;
	return level*level+p.health/level;
}
inline int basic_health(int level){
	return level*10+1;
} 
inline int need_exp(int level){
	switch(level){
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 5;
		case 5:
			return 10;
		case 6:
			return 20;
		case 7:
			return 40;
		case 8:
			return 80;
		case 9:
			return 160;
		case 10:
			return 320;
		case 11:
			return 640;
		case 12:
			return 1000;
		case 13:
			return 2000;
		case 14:
			return 4000;
		case 15:
			return 6000;
		default:
			return (level-14)*5000;
	}
}
#include "Funcs.cpp"
#endif
