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
	printf("\t\t\t请输入您的电话号码，便于我们联系您：");
	cin >> Pnumber;
	if (Pnumber_check(Pnumber)) {
		printf("\t\t\t请输入您的账号：");
		cin >> t_ac;

		if (Rpcheck(t_ac)) {//帐号去重!!
			CLS
				printf("该账户已经存在，请重新创建！\n");
			buffer();
			buffer();
			creat_ac();
		}
		else {
			printf("\t\t\t请输入您的密码：");
			cin >> t_key;
			printf("\t\t\t请重新输入您的密码：");
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
					printf("\t\t\t恭喜你成功创建了账号！\n");
					buffer();
					buffer();
					CLS
						show();
				}
				else {
					CLS
						printf("输入密码前后不一致，请重新注册！\n");
					buffer();
					buffer();
					creat_ac();
				}


			}
			else {
				printf("\t\t\t账号和密码的长度必须再8-20之间！\n");
				buffer();
				buffer();
				T_insert();

			}



		}

	}
	else {
		CLS
			printf("输入有误，请重新注册！\n");
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
	printf("\t\t\t|                  欢迎    *教师*   用户:"); cout << t_ac << endl;
	printf("\t\t\t ----------------------------------------------------------------------- \n");
	printf("\t\t\t|                       欢迎使用教室预约系统                            |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| 您要做什么                                                            |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -1- 查询可用教室                                                      |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -2- 申请预约教室                                                      |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -3- 查看我的预约                                                      |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -4- 取消预约                                                          |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -5- 修改预约                                                          |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t| -6- 登出                                                              |\n");
	printf("\t\t\t|                                                                       |\n");
	printf("\t\t\t ----------------------------------------------------------------------- \n");
	int op;
	cin >> op;
	Tnode* p;
	p = T_get(t_ac);
	if (op == 1)
	{
		int day;
		printf("\t\t\t|                   欢迎 - * 教师 *- 用户:"); cout << t_ac << endl;
		printf("\t\t\t ----------------------------------------------------------------------- \n");
		printf("\t\t\t|                       欢迎使用教室预约系统                            |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|  查询周几的？                                                         |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -1- 周一                                                              |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -2- 周二                                                              |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -3- 周三                                                              |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -4- 周四                                                              |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -5- 周五                                                              |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -6- 周六                                                              |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t|                                                                       |\n");
		printf("\t\t\t| -7- 周日                                                              |\n");
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
				printf("输入有误，请重新输入！");
			buffer();
			buffer();
			CLS
				work2(t_ac, t_key);

		}
	}
	else if (op == 2) {
		int num, day;
		printf("\t\t\t您想在星期___申请教室？\n");
		cin >> day;
		if (day < 1 || day>7) {
			CLS
				printf("\t\t\t输入有误，请重新输入\n");
			buffer();
			buffer();
			work2(t_ac, t_key);
		}
		printf("\t\t\t请输入您想要申请的丹青教室(输入编号即可)：");
		cin >> num;
		if (Is_exist(num)) {
			//申请成功的教室也要加在对象上
			if (room_check(num, day)) {
				CLS
					if (p->cnt <= 5) {
						p->add(day, num);
						printf("\t\t\t申请成功,请等待管理员审核！\n");
						buffer();
						buffer();
						work2(t_ac, t_key);
					}
					else {
						CLS
							printf("\t\t\t当前申请教室已经超过五个啦！\n");
						buffer();
						buffer();
						work2(t_ac, t_key);
					}


			}
			else {
				CLS
					printf("\t\t\t当前申请的教室已被占用，请重新申请！\n");
				buffer();
				buffer();
				work2(t_ac, t_key);
			}

		}
		else {
			CLS
				printf("\t\t\t教室编号不存在，请重新输入！\n");
			buffer();
			buffer();
			work1(t_ac, t_key);
		}


	}
	else if (op == 3) {
		if (p->cnt == 0) {
			printf("\t\t\t您当前并未申请任何教室！\n");
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
		printf("\t\t\t您要撤销星期几(1-7)的预约：\n");
		int day;
		cin >> day;
		if (day < 1 || day>7) {
			CLS;
			printf("\t\t\t输入有误，请重新预约！\n");
			buffer();
			buffer();
			work2(t_ac, t_key);
		}
		else {
			int num;
			printf("\t\t\t请输入您要撤销教室：\n");
			cin >> num;
			int flag = p->has(day, num);
			if (flag) {
				p->erase(day, num);
				//modify
				printf("\t\t\t已经取消该预约!\n");
				buffer();
				buffer();
				work2(t_ac, t_key);
			}
			else {
				CLS
					printf("\t\t\t您并没有预约过该教室！\n");
				buffer();
				buffer();
				work2(t_ac, t_key);
			}
		}
	}
	else if (op == 5) {
		int num, day;
		printf("\t\t\t您想修改星期___预约？");
		cin >> day;
		if (day < 1 || day>7) {
			CLS
				printf("\t\t\t输入有误，请重新输入\n");
			buffer();
			buffer();
			work2(t_ac, t_key);
		}
		else {
			printf("\t\t\t请输入您想要修改的丹青教室(输入编号即可)：");
			cin >> num;
			if (Is_exist(num)) {
				int t_day, t_num;
				//申请成功的教室也要加在对象上
				printf("\t\t\t您想修改成周几的预约:");
				cin >> t_day;
				if (t_day < 1 || t_day>7) {
					printf("\t\t\t输入有误，请重新输入！");
					system("pause");
					CLS
						work2(t_ac, t_key);
				}
				else {
					printf("\t\t\t请输入您现在想要预约的教室编号：");
					cin >> t_num;
					if (Is_exist(t_num)) {
						p->modify(day, num, t_day, t_num);
						work2(t_ac, t_key);
					}
					else
					{
						CLS
							printf("\t\t\t教室编号不存在，请重新输入！\n");
						buffer();
						buffer();
						work2(t_ac, t_key);


					}
				}

			}
			else {
				CLS
					printf("\t\t\t教室编号不存在，请重新输入！\n");
				buffer();
				buffer();
				work2(t_ac, t_key);
			}


		}



	}
	else if (op == 6) {
		printf("\t\t\t您已经成功登出！\n");
		system("pause");
		CLS
			show();
	}
	else {
		printf("\t\t\t输入有误，请重新输入！");
		buffer();
		buffer();
		work2(t_ac, t_key);

	}
}