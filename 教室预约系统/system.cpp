#include"head.h"
extern void signin() {
	CLS
	printf("\t\t\t|                          ��ӭ����¼                                                            \n");
	printf("\t\t\t -----------------------------------------------------------------------|\n");
	printf("\t\t\t|                        �������������?                                |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|  -1-   ����ѧ����֯                                                   |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|  -2-   ���ǽ�ʦ                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|  -3-   ���ǹ���Ա                                                     |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|  -4-   û���˺ţ���Ҫע��                                             |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|_______________________________________________________________________|\n");
	int id;
	cin >> id;
	if (id < 1 || id>4) {
		CLS
			printf("\t\t\t���������������µ�¼��\n");
		buffer();
		buffer();
		CLS
			signin();
	}
	else if (id == 1) {
		string t_ac, t_key;
		printf("\t\t\t�����������˺�(���ȱ�����8-20֮��)��");
		scanf("%s", t_ac);
		printf("\t\t\t��������������(���ȱ�����8-20֮��)��");
		scanf("%s", t_key);
		if (check(t_ac, t_key, id)) {
			printf("��½�ɹ���\n");
			CLS
				work(id, t_ac, t_key);
		}
		else {
			CLS
				printf("\t\t\t �˺Ż���������������˺Ų����ڣ����������룡\n");
			buffer();
			buffer();
			signin();
			show();
		}
	}
	else if (id == 2) {
		string t_ac, t_key;
		printf("\t\t\t�����������˺�(���ȱ�����8-20֮��)��");
		cin >> t_ac;
		printf("\t\t\t��������������(���ȱ�����8-20֮��)��");
		cin >> t_key;
		if (check(t_ac, t_key, id)) {
			printf("��½�ɹ���\n");
			CLS
				work(id, t_ac, t_key);
		}
		else {
			CLS
				printf("\t\t\t �˺Ż����������������������룡\n");
			buffer();
			buffer();
			signin();
			show();
		}
	}
	else if (id == 3) {
		string t_ac, t_key;
		printf("\t\t\t�����������˺�(���ȱ�����8-20֮��)��");
		cin >> t_ac;
		printf("\t\t\t��������������(���ȱ�����8-20֮��)��");
		cin >> t_key;
		if (check(t_ac, t_key, id)) {
			printf("��½�ɹ���\n");
			CLS
				work(id, t_ac, t_key);
		}
		else {
			CLS
				printf("\t\t\t �˺Ż����������������������룡\n");
			buffer();
			buffer();
			signin();
			show();
		}
	}
	else {
		CLS
			show();
	}
}
extern void creat_ac() {
	printf("\t\t\t|                           ��ӭ��ע��                                                            \n");
	printf("\t\t\t -----------------------------------------------------------------------|\n");
	printf("\t\t\t|                         �������������?                               |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|  -1-   ����ѧ����֯                                                   |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|  -2-   ���ǽ�ʦ                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|_______________________________________________________________________|\n");
	int t_choice;
	cin >> t_choice;
	if (t_choice == 1) {
		G_insert();
	}
	else if (t_choice == 2) {
		T_insert();
	}
	else {
		CLS
			printf("\t\t\t�����������������룡\n");
		buffer();
		CLS;
		creat_ac();
	}
}
extern int Pnumber_check(string number)
{
	int len = number.size();
	bool flag = 1;
	for (int i = 0; number[i]; i++) {
		if (number[i] < '0' || number[i]>'9') flag = 0;
	}
	if (len < 8 || len>20 || !flag) return 0;
	return 1;
}
extern void show() {
	int t_choice;
	printf("\t\t\t -----------------------------------------------------------------------|\n");
	printf("\t\t\t|                      ��ӭ��������ԤԼϵͳ                             |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| ��Ҫ��ʲô��                                                          |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| 1-��Ҫ��¼                                                            |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| 2-��Ҫע��                                                            |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| 3-�˳�ϵͳ                                                            |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");;
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|_______________________________________________________________________|\n");
	cin >> t_choice;
	if (t_choice == 1) {
		CLS;
		signin();
	}
	else if (t_choice == 2) {
		CLS
			creat_ac();
		printf("\t\t\t��ϲ��ע��ɹ�\n");
		buffer();
		buffer();
		CLS
			show();
	}
	else if (t_choice == 3) {
		CLS
			printf("\t\t\t��ӭ���´�ʹ��\n ");
		All_to_File();
		exit(0);
	}
	else {
		CLS
			printf("\t\t\t������������������\n");
		buffer();
		buffer();
		show();
	}
}
extern void work(int id, string t_ac, string t_key) {
	if (id == 1) {
		work1(t_ac, t_key);
	}
	else if (id == 2) {
		work2(t_ac, t_key);
	}
	else work3();
}
extern void introduction() {
	printf("\t\t\t -----------------------------------------------------------------------|\n");
	printf("\t\t\t|                      ��ӭʹ�ý���ԤԼϵͳ                             |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|������������֪������һ������ԤԼϵͳ ............                      |\n");
	printf("\t\t\t|  ������ʹ����֪��                                                     |\n");
	printf("\t\t\t|  1> ÿ���������ϵͳ����ʾ���������Ԥ������1.5�������˽����ԭ��,  |\n");
	printf("\t\t\t|     �����������������ֱ�ӽ��������Ӳ˵�������������ĵط���        |\n");
	printf("\t\t\t|  tip:�˺�����ĳ��ȱ�����8-20λ��֮��                                 |\n");
	printf("\t\t\t|  2> ����ԤԼ�����Զ����ᱻ��Ϊ�ɹ�,�������,���״̬û�м�    ^v^     |\n");
	printf("\t\t\t|  3>��������Ľ���Ĭ���ǵ���¥��û��������������                       |\n");
	printf("\t\t\t|  4>����Ա�޶�ֻ��һ��,�����ǿ��Ը��ĵ�                                |\n");
	printf("\t\t\t|    ��ʼ����Ա�˺�:admin_nefu_2022                                     |\n");
	printf("\t\t\t|    ��ʼ����Ա����:admin_nefu_1952                                     |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                            һ����......                               |\n");
	printf("\t\t\t|                               1                                       |\n");
	printf("\t\t\t|                              / \\                                      |\n");
	printf("\t\t\t|                             2   3                                     |\n");
	printf("\t\t\t|                            /\\   /\\                                    |\n");
	printf("\t\t\t|                           4  5 6  7                                   |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|_______________________________________________________________________|\n");
	system("pause");
	CLS
}
extern void addOF(int type, string t_ac, int day, int number) {
	//Group
	ofstream ofs;
	ofs.open(OF, ios::out | ios::app);
	ofs << type << " " << t_ac << " " << day << " " << number << endl;
	ofs.close();
}
extern void addAC(int type, string t_ac, string t_key) {
	ofstream ofs;
	ofs.open(AC, ios::out | ios::app);
	ofs << type << " " << t_ac << " " << t_key << endl;
	ofs.close();
};
extern int Rpcheck(string ac) {
	ifstream ifs;
	ifs.open(AC, ios::in);
	int t_type;
	string t_ac;
	string t_key;
	while (ifs >> t_type && ifs >> t_ac && ifs >> t_key) {
		if (t_ac == ac) return 1;
	}
	ifs.close();
	return 0;
}
void All_to_File() {
	//��������ļ�
	ofstream ofs;
	ofs.open(OF, ios::trunc);
	ofs.close();
	ofs.open(AC, ios::trunc);
	ofs.close();
	vector<RM>rm;
	vector<ACM>acm;
	Gnode* p;
	p = GH->next;
	while (p != NULL) {
		acm.push_back({ 1,p->ac,p->key });
		Rnode* t;
		t = p->RH->next;
		while (t != NULL) {
			rm.push_back({ 1,p->ac,t->day,t->number });
			t = t->next;
		}
		p = p->next;
	}
	Tnode* pp = TH->next;
	while (pp != NULL) {
		acm.push_back({ 2,pp->ac,pp->key });
		Rnode* t;
		t = pp->RH->next;
		while (t != NULL)
		{
			rm.push_back({ 2,pp->ac,t->day,t->number });
			t = t->next;
		}
		pp = pp->next;
	}
	for (auto t : acm) {
		addAC(t.type, t.ac, t.key);
	}
	for (auto t : rm) {
		addOF(t.type, t.ac, t.day, t.num);
	}
}
void All_ACinsert(int type, string t_ac, string t_key) {
	if (type == 1) {
		Gnode* p = new Gnode;
		Rnode* TRH = new Rnode;
		TRH->next = NULL;
		p->RH = TRH;
		p->ac = t_ac;
		p->key = t_key;
		p->next = GH->next;
		GH->next = p;
	}
	else {
		Tnode* p = new Tnode;
		Rnode* TRH = new Rnode;
		TRH->next = NULL;
		p->RH = TRH;
		p->ac = t_ac;
		p->key == t_key;
		p->next = TH->next;
		TH->next = p;
	}
}
void All_Roominsert(int type, string t_ac, int day, int num) {
	if (Room[day][num / 100][num % 100]) return;
	if (type == 1) {
		Gnode* p = G_get(t_ac);
		p->add(day, num);
	}
	else {
		Tnode* p = T_get(t_ac);
		p->add(day, num);
	}
}
void All_to_Linknode() {
	/// <summary>
	/// �˺Ž�����
	/// </summary>
	vector<RM>rm;
	vector<ACM>acm;
	ifstream iac;
	iac.open(AC, ios::in);
	int type;
	string t_ac, t_key;
	while (iac >> type && iac >> t_ac && iac >> t_key) {
		acm.push_back({ type,t_ac,t_key });
	}
	iac.close();
	/// <summary>
	/// ���������
	/// </summary>
	ifstream iroom;
	iroom.open(OF, ios::in);
	int t_type;
	string ac;
	int day, num;
	while (iroom >> t_type && iroom >> ac && iroom >> day && iroom >> num) {
		//All_Roominsert(t_type, ac, day, num);
		rm.push_back({ t_type,ac,day,num });
	}
	iroom.close();
	for (auto t : acm) {
		All_ACinsert(t.type, t.ac, t.key);
	}
	for (auto t : rm) {
		All_Roominsert(t.type, t.ac, t.day, t.num);
	}
	//All_Roomget();

}
void All_clear() {
	Gnode* p, * nxt;
	p = GH->next;
	while (p != NULL) {
		p->clear();
		nxt = p->next;
		delete p;
		p = nxt;
	}
	GH->next = NULL;

	Tnode* q, * nnxt;
	q = TH->next;
	while (q != NULL) {
		q->clear();
		nnxt = q->next;
		delete q;
		q = nnxt;
	}
	TH->next = NULL;
}