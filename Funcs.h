#ifndef FUNCS_H_
#define FUNCS_H_
#include<windows.h>
#include<map>
#include<random>
#include<ctime>
using namespace std;
const int MAX=10001;
struct card{//��Ƭ������� 
	string name;//��Ƭ���� 
	int cardtype;//��Ƭ���� 
	int cardattack_wu;//��Ƭ������ 
	int cardattack_fa;//��Ƭ�������� 
	int carddefend_wu;//��Ƭ������� 
	int carddefend_fa;//��Ƭ�������� 
	int carddefend_fan;//��Ƭ�������� 
	int cardtypenames[MAX]={};//��Ƭ���� 
	int cardtypenames_index;//��¼��Ƭ������ 
}; 
class people{
	private:
		string name;//���� 
		card cards[MAX]={};//ӵ�еĿ���
		int cards_num;//ӵ�еĿ�����
		int things[MAX]={};//ӵ�е���Ʒ
		int things_num;//ӵ�е���Ʒ��
		map<card,int> cardnums;//��Ӧ��Ƭ������
		map<int,int> thingnums;//��Ӧ��Ʒ�ĸ���
		int level=1;//�ȼ� 
		int health=11; //����ֵ  
		int experience=0;//����ֵ 
	public:
		people(int a,int b,int c):level
}; 
struct NPC{
	string name;//���� 
	card cards[MAX]={};//ӵ�еĿ���
	int cards_num;//ӵ�еĿ�����
	int things[MAX]={};//�������Ʒ 
	int things_num;//�������Ʒ��
	map<card,int> cardnums;//��Ӧ��Ƭ������
	map<int,int> thingnums;//��Ӧ��Ʒ�ĸ���
	int level;//�ȼ� 
	int health; //����ֵ  
	int experience;//�����ľ��� 
};
card CARDs[MAX]; 
enum cartype{
	defaults=-1,//Ĭ��
	NPCs=0,//���Կ��ƣ���Ҳ��ɻ��
	often=1,//��ͨ����
	sometimes=2,//���㿨��
	never=3,//��ʦ����
	amazing=4,//��������
	unbeliveble=5,//ʷʫ����
	legend=6//���濨�� 
}; 
enum cartypenames{
	none=-1,//������ 
	knife=0,//��
	attacker=1,//��
	fu=2,//��
	dun=3,//��
	fire=4,//��
	ice=5,//��
	magical=6//���� 
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
