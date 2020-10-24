/****************函数声明***********************/
int menu();
int check_in();
int register_();
int modify(char a[]);
int delete_(char a[]);
int find(char a[]);
list create_list(char filepath[]);
void print_by_num();
void print_by_pro();



/****************结构体声明**********************/
typedef struct student
{
	char num[10];
	char name[10];
	char gender[4];
	int age;
	char origin[10];
	char department[10];
	char profession[10];
	char class_[10];
}   Student;
typedef Student* List
typedef List Position

/***************函数定义**************************/

int menu()
{
	int choice;
	printf("欢迎来到学生学籍管理系统：\n
		    学生信息登记-------------------------1\n
			学生信息修改-------------------------2\n
			学生信息删除-------------------------3\n
			学生信息查找-------------------------4\n
			按学号输出信息表---------------------5\n
			按专业输出信息表---------------------6\n
			请输入您的选择:  ");
    scanf("%d",&choice);
	
}

list create_list(char filepath[30])
{
	List list,tmp;
	char ch,mid[10];
	FILE* in;
	if((in=fopen(filepath,"r"))==NULL)
	{
		print("无法打开此文件\n";
		exit(0);
	}
	


