int s1,s2;

class Sea_battle
{
	private:
		int field_1[10][10];
		int field_1_c[10][10];
		int field_2[10][10];
		int field_2_c[10][10];
	public:
		void Enter_1(int x, int y, int l, int number);
		void Enter_2(int x, int y, int l, int number);
		void Move_1(int x, int y);
		void Move_2(int x, int y);
		void See_field_1();
		void See_field_2();
		void Summ();
}
