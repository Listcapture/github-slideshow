#include"head.h"
Tnode* T_get(string t_ac) {
	Tnode* p;
	p = TH->next;
	while (p != nullptr) {
		if (p->ac == t_ac)
		{
			return p;
		}
		p = p->next;
	}
	return NULL;
}
void T_insert() {
	string t_ac, t_key, tt_key, Pnumber;
	printf("\t\t\t���������ĵ绰���룬����������ϵ����");
	cin >> Pnumber;
	if (Pnumber_check(Pnumber)) {
		printf("\t\t\t�����������˺ţ�");
		cin >> t_ac;

		if (Rpcheck(t_ac)) {//�ʺ�ȥ��!!
			CLS
				printf("���˻��Ѿ����ڣ������´�����\n");
			buffer();
			buffer();
			creat_ac();
		}
		else {
			printf("\t\t\t�������������룺");
			cin >> t_key;
			printf("\t\t\t�����������������룺");
			cin >> tt_key;
			if (okac(t_ac, t_key))
			{
				if (t_key == tt_key) {
					CLS;
					addAC(2, t_ac, t_key);
					Tnode* p = new Tnode;
					Rnode* TRH = new Rnode;
					TRH->next = NULL;
					p->RH = TRH;
					p->ac = t_ac;
					p->key = t_key;
					p->Phone_number = Pnumber;
					p->next = TH->next;
					TH->next = p;
					printf("\t\t\t��ϲ��ɹ��������˺ţ�\n");
					buffer();
					buffer();
					CLS
						show();
				}
				else {
					CLS
						printf("��������ǰ��һ�£�������ע�ᣡ\n");
					buffer();
					buffer();
					creat_ac();
				}


			}
			else {
				printf("\t\t\t�˺ź�����ĳ��ȱ�����8-20֮�䣡\n");
				buffer();
				buffer();
				T_insert();

			}



		}

	}
	else {
		CLS
			printf("��������������ע�ᣡ\n");
		buffer();
		buffer();
		creat_ac();
	}

}
bool T_find(string t_ac, string t_key) {
	Tnode* p;
	p = TH->next;
	while (p != NULL) {
		if (p->ac == t_ac && p->key == t_key) {
			return 1;
		}
		p = p->next;
	}
	return 0;
}
 void work2(string t_ac, string t_key) {
	printf("\t\t\t|                  ��ӭ    *��ʦ*   �û�:"); cout << t_ac << endl;
	printf("\t\t\t ----------------------------------------------------------------------- \n");
	printf("\t\t\t|                       ��ӭʹ�ý���ԤԼϵͳ                            |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| ��Ҫ��ʲô                                                            |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -1- ��ѯ���ý���                                                      |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -2- ����ԤԼ����                                                      |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -3- �鿴�ҵ�ԤԼ                                                      |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -4- ȡ��ԤԼ                                                          |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -5- �޸�ԤԼ                                                          |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -6- �ǳ�                                                              |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t ----------------------------------------------------------------------- \n");
	int op;
	cin >> op;
	Tnode* p;
	p = T_get(t_ac);
	if (op == 1)
	{
		int day;
		printf("\t\t\t|                   ��ӭ - * ��ʦ *- �û�:"); cout << t_ac << endl;
		printf("\t\t\t ----------------------------------------------------------------------- \n");
		printf("\t\t\t|                       ��ӭʹ�ý���ԤԼϵͳ                            |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|  ��ѯ�ܼ��ģ�                                                         |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -1- ��һ                                                              |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -2- �ܶ�                                                              |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -3- ����                                                              |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -4- ����                                                              |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -5- ����                                                              |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -6- ����                                                              |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -7- ����                                                              |\n");
		printf("\t\t\t|_______________________________________________________________________|\n");
		cin >> day;
		if (day == 1) {
			print_using_room(day);
			work2(t_ac, t_key);
		}
		else if (day == 2) {
			print_using_room(day);
			work2(t_ac, t_key);
		}
		else if (day == 3) {
			print_using_room(day);
			work2(t_ac, t_key);
		}
		else if (day == 4) {
			print_using_room(day);
			work2(t_ac, t_key);
		}
		else if (day == 5) {
			print_using_room(day);
			work2(t_ac, t_key);
		}
		else if (day == 6) {
			print_using_room(day);
			work2(t_ac, t_key);
		}
		else if (day == 7) {
			print_using_room(day);
			work2(t_ac, t_key);
		}
		else {
			CLS
				printf("�����������������룡");
			buffer();
			buffer();
			CLS
				work2(t_ac, t_key);

		}
	}
	else if (op == 2) {
		int num, day;
		printf("\t\t\t����������___������ң�\n");
		cin >> day;
		if (day < 1 || day>7) {
			CLS
				printf("\t\t\t������������������\n");
			buffer();
			buffer();
			work2(t_ac, t_key);
		}
		printf("\t\t\t����������Ҫ����ĵ������(�����ż���)��");
		cin >> num;
		if (Is_exist(num)) {
			//����ɹ��Ľ���ҲҪ���ڶ�����
			if (room_check(num, day)) {
				CLS
					if (p->cnt <= 5) {
						p->add(day, num);
						printf("\t\t\t����ɹ�,��ȴ�����Ա��ˣ�\n");
						buffer();
						buffer();
						work2(t_ac, t_key);
					}
					else {
						CLS
							printf("\t\t\t��ǰ��������Ѿ������������\n");
						buffer();
						buffer();
						work2(t_ac, t_key);
					}


			}
			else {
				CLS
					printf("\t\t\t��ǰ����Ľ����ѱ�ռ�ã����������룡\n");
				buffer();
				buffer();
				work2(t_ac, t_key);
			}

		}
		else {
			CLS
				printf("\t\t\t���ұ�Ų����ڣ����������룡\n");
			buffer();
			buffer();
			work1(t_ac, t_key);
		}


	}
	else if (op == 3) {
		if (p->cnt == 0) {
			printf("\t\t\t����ǰ��δ�����κν��ң�\n");
			system("pause");
			work2(t_ac, t_key);
		}
		else {
			p->print();
			system("pause");
			work2(t_ac, t_key);
		}
	}
	else if (op == 4) {
		printf("\t\t\t��Ҫ�������ڼ�(1-7)��ԤԼ��\n");
		int day;
		cin >> day;
		if (day < 1 || day>7) {
			CLS;
			printf("\t\t\t��������������ԤԼ��\n");
			buffer();
			buffer();
			work2(t_ac, t_key);
		}
		else {
			int num;
			printf("\t\t\t��������Ҫ�������ң�\n");
			cin >> num;
			int flag = p->has(day, num);
			if (flag) {
				p->erase(day, num);
				//modify
				printf("\t\t\t�Ѿ�ȡ����ԤԼ!\n");
				buffer();
				buffer();
				work2(t_ac, t_key);
			}
			else {
				CLS
					printf("\t\t\t����û��ԤԼ���ý��ң�\n");
				buffer();
				buffer();
				work2(t_ac, t_key);
			}
		}
	}
	else if (op == 5) {
		int num, day;
		printf("\t\t\t�����޸�����___ԤԼ��");
		cin >> day;
		if (day < 1 || day>7) {
			CLS
				printf("\t\t\t������������������\n");
			buffer();
			buffer();
			work2(t_ac, t_key);
		}
		else {
			printf("\t\t\t����������Ҫ�޸ĵĵ������(�����ż���)��");
			cin >> num;
			if (Is_exist(num)) {
				int t_day, t_num;
				//����ɹ��Ľ���ҲҪ���ڶ�����
				printf("\t\t\t�����޸ĳ��ܼ���ԤԼ:");
				cin >> t_day;
				if (t_day < 1 || t_day>7) {
					printf("\t\t\t�����������������룡");
					system("pause");
					CLS
						work2(t_ac, t_key);
				}
				else {
					printf("\t\t\t��������������ҪԤԼ�Ľ��ұ�ţ�");
					cin >> t_num;
					if (Is_exist(t_num)) {
						p->modify(day, num, t_day, t_num);
						work2(t_ac, t_key);
					}
					else
					{
						CLS
							printf("\t\t\t���ұ�Ų����ڣ����������룡\n");
						buffer();
						buffer();
						work2(t_ac, t_key);


					}
				}

			}
			else {
				CLS
					printf("\t\t\t���ұ�Ų����ڣ����������룡\n");
				buffer();
				buffer();
				work2(t_ac, t_key);
			}


		}



	}
	else if (op == 6) {
		printf("\t\t\t���Ѿ��ɹ��ǳ���\n");
		system("pause");
		CLS
			show();
	}
	else {
		printf("\t\t\t�����������������룡");
		buffer();
		buffer();
		work2(t_ac, t_key);

	}
}