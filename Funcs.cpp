#include<iostream>
void init(){//��ʼ������ 
	CARDs[0].name="Ĭ�Ͽ���";
	CARDs[0].cardtype=defaults;
	CARDs[0].cardattack_wu=0;
	CARDs[0].cardattack_fa=0;
	CARDs[0].carddefend_wu=0;
	CARDs[0].carddefend_fa=0;
	CARDs[0].carddefend_fan=0;
	CARDs[0].cardtypenames[0]=none;
	CARDs[0].cardtypenames_index=1;
	
	CARDs[1].name="�ƽ�";
	CARDs[1].cardtype=often;
	CARDs[1].cardattack_wu=6;
	CARDs[1].cardattack_fa=0;
	CARDs[1].carddefend_wu=0;
	CARDs[1].carddefend_fa=0;
	CARDs[1].carddefend_fan=0;
	CARDs[1].cardtypenames[0]=attacker;
	CARDs[1].cardtypenames_index=1;
	
	CARDs[2].name="�ƶ�";
	CARDs[2].cardtype=often;
	CARDs[2].cardattack_wu=0;
	CARDs[2].cardattack_fa=0;
	CARDs[2].carddefend_wu=7;
	CARDs[2].carddefend_fa=0;
	CARDs[2].carddefend_fan=0;
	CARDs[2].cardtypenames[0]=dun;
	CARDs[2].cardtypenames_index=1;
} 
void show(int id){//չʾ���� 
	using namespace std;
	cout << "�������飺" << endl;
	cout << "��������\t" << CARDs[id].name << endl;
	cout << "��������\t";
	switch(CARDs[id].cardtype){
		case defaults:
			cout << "��" << endl;
			break;
		case NPCs:
			cout << "NPC����" << endl;
			break;
		case often:
			cout << "��ͨ����" << endl;
			break;
		case sometimes:
			cout << "���㿨��" << endl;
			break;
		case never:
			cout << "��ʦ����" << endl;
			break;
		case amazing:
			cout << "��������" << endl;
			break;
		case unbeliveble:
			cout << "ʷʫ����" << endl;
			break;
		case legend:
			cout << "���濨��" << endl;
			break;
		default:
			cout << "δ֪" << endl;
			break;
	}
	cout << "���ƹ���\t";
	if(CARDs[id].cardattack_wu){
		cout << CARDs[id].cardattack_wu << "����������\n\t\t";
	}
	if(CARDs[id].cardattack_fa){
		cout << CARDs[id].cardattack_fa << "�㷨��������\n\t\t";
	}
	if(CARDs[id].carddefend_wu){
		cout << CARDs[id].carddefend_wu << "�����������\n\t\t";
	}
	if(CARDs[id].carddefend_fa){
		cout << CARDs[id].carddefend_fa << "�㷨��������\n\t\t";
	}
	if(CARDs[id].carddefend_fan){
		cout << CARDs[id].carddefend_fan << "��������ˣ�\n\t\t"; 
	}
	cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cout << "��������\t";
	switch(CARDs[id].cardtypenames[0]){
		case none:
			cout << "������";
			break;
		case knife:
			cout << "��";
			break;
		case attacker:
			cout << "��";
			break;
		case fu:
			cout << "��";
			break;
		case dun:
			cout << "��";
			break;
		case fire:
			cout << "��";
			break;
		case ice:
			cout << "��";
			break;
		case magical:
			cout << "����";
			break;
		default:
			cout << "δ֪";
	}
	for(int i=1;i<CARDs[id].cardtypenames_index;i++){
		cout << "��";
		switch(CARDs[id].cardtypenames[i]){
			case none:
				cout << "������";
				break;
			case knife:
				cout << "��";
				break;
			case attacker:
				cout << "��";
				break;
			case fu:
				cout << "��";
				break;
			case dun:
				cout << "��";
				break;
			case fire:
				cout << "��";
				break;
			case ice:
				cout << "��";
				break;
			case magical:
				cout << "����";
				break;
			default:
				cout << "δ֪";
		}
	}
	cout << endl;
}
void show(people &p){//չʾ������� 
	cout << "�������ԣ�" << endl;
	cout << "�ȼ�" << p.level << ',' << "����" << p.experience << '/' << need_exp(p.level);
} 
void attack(people &p,NPC &n){//��սϵͳ 
	static default_random_engine e(time(0));
	cout << "��ս��ʼ��\n";
//	cout << "" 
} 
int show_menu(const string show_content,initializer_list<string> strs){//�˵����� 
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
