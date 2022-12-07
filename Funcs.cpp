#include<iostream>
void init(){//初始化卡牌 
	CARDs[0].name="默认卡牌";
	CARDs[0].cardtype=defaults;
	CARDs[0].cardattack_wu=0;
	CARDs[0].cardattack_fa=0;
	CARDs[0].carddefend_wu=0;
	CARDs[0].carddefend_fa=0;
	CARDs[0].carddefend_fan=0;
	CARDs[0].cardtypenames[0]=none;
	CARDs[0].cardtypenames_index=1;
	
	CARDs[1].name="破剑";
	CARDs[1].cardtype=often;
	CARDs[1].cardattack_wu=6;
	CARDs[1].cardattack_fa=0;
	CARDs[1].carddefend_wu=0;
	CARDs[1].carddefend_fa=0;
	CARDs[1].carddefend_fan=0;
	CARDs[1].cardtypenames[0]=attacker;
	CARDs[1].cardtypenames_index=1;
	
	CARDs[2].name="破盾";
	CARDs[2].cardtype=often;
	CARDs[2].cardattack_wu=0;
	CARDs[2].cardattack_fa=0;
	CARDs[2].carddefend_wu=7;
	CARDs[2].carddefend_fa=0;
	CARDs[2].carddefend_fan=0;
	CARDs[2].cardtypenames[0]=dun;
	CARDs[2].cardtypenames_index=1;
} 
void show(int id){//展示卡牌 
	using namespace std;
	cout << "卡牌详情：" << endl;
	cout << "卡牌名称\t" << CARDs[id].name << endl;
	cout << "卡牌类型\t";
	switch(CARDs[id].cardtype){
		case defaults:
			cout << "无" << endl;
			break;
		case NPCs:
			cout << "NPC卡牌" << endl;
			break;
		case often:
			cout << "普通卡牌" << endl;
			break;
		case sometimes:
			cout << "优秀卡牌" << endl;
			break;
		case never:
			cout << "大师卡牌" << endl;
			break;
		case amazing:
			cout << "顶级卡牌" << endl;
			break;
		case unbeliveble:
			cout << "史诗卡牌" << endl;
			break;
		case legend:
			cout << "传奇卡牌" << endl;
			break;
		default:
			cout << "未知" << endl;
			break;
	}
	cout << "卡牌功能\t";
	if(CARDs[id].cardattack_wu){
		cout << CARDs[id].cardattack_wu << "点物理攻击；\n\t\t";
	}
	if(CARDs[id].cardattack_fa){
		cout << CARDs[id].cardattack_fa << "点法术攻击；\n\t\t";
	}
	if(CARDs[id].carddefend_wu){
		cout << CARDs[id].carddefend_wu << "点物理防御；\n\t\t";
	}
	if(CARDs[id].carddefend_fa){
		cout << CARDs[id].carddefend_fa << "点法术防御；\n\t\t";
	}
	if(CARDs[id].carddefend_fan){
		cout << CARDs[id].carddefend_fan << "点防御反伤；\n\t\t"; 
	}
	cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cout << "卡牌属性\t";
	switch(CARDs[id].cardtypenames[0]){
		case none:
			cout << "无属性";
			break;
		case knife:
			cout << "刀";
			break;
		case attacker:
			cout << "剑";
			break;
		case fu:
			cout << "斧";
			break;
		case dun:
			cout << "盾";
			break;
		case fire:
			cout << "火";
			break;
		case ice:
			cout << "冰";
			break;
		case magical:
			cout << "神奇";
			break;
		default:
			cout << "未知";
	}
	for(int i=1;i<CARDs[id].cardtypenames_index;i++){
		cout << "、";
		switch(CARDs[id].cardtypenames[i]){
			case none:
				cout << "无属性";
				break;
			case knife:
				cout << "刀";
				break;
			case attacker:
				cout << "剑";
				break;
			case fu:
				cout << "斧";
				break;
			case dun:
				cout << "盾";
				break;
			case fire:
				cout << "火";
				break;
			case ice:
				cout << "冰";
				break;
			case magical:
				cout << "神奇";
				break;
			default:
				cout << "未知";
		}
	}
	cout << endl;
}
void show(people &p){//展示玩家详情 
	cout << "人物属性：" << endl;
	cout << "等级" << p.level << ',' << "进度" << p.experience << '/' << need_exp(p.level);
} 
void attack(people &p,NPC &n){//对战系统 
	static default_random_engine e(time(0));
	cout << "对战开始！\n";
//	cout << "" 
} 
int show_menu(const string show_content,initializer_list<string> strs){//菜单界面 
	cout << show_content << endl;
	for(size_t cnt=1;cnt<=strs.size();++cnt){
		if(cnt%3==0)	cout << endl;
		cout << cnt << '.' << *(strs.begin()+cnt-1) << '\t';
	}
	cout << endl << ">>>";
	int res;
	cin >> res;
	return res;
}
