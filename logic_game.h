#pragma once
#include<iostream>
#include<random>
#include<fstream>

//using namespace std;


void clen() {

}
struct stek {
	int num;
	stek* next;
};
void push(stek*& stk, int n, int& size) {
	stek* temp = new stek;
	temp->next = stk;
	temp->num = n;
	stk = temp;
	size++;
}
int findAverage(stek* stk, int size) {
	int amount = 0, i = 0;
	for (stek* temp = stk; temp; temp = temp->next, i++)
		amount += temp->num;
	return amount;
}

void cleanOut(stek*& stk) {
	for (stek* temp = stk->next; stk->next; temp = stk->next) {
		delete stk;
		stk = temp;
	}
}

int pop(stek*& NEXT)
{
	int temp = NEXT->num;
	return temp;
}
stek* stk = new stek;
stek* stk1 = new stek;
int size = 0;
int size1 = 0;
//////////////////////
const int size_n = 5, size_m = 5;
int** arr_game = new int* [size_n];
int chet[3] = { 2,4,8 };
bool start = true;
bool cont = false;
int score_arr = 0;
bool show_arr = false;
bool konec = false;
bool start_con = false;
int pop_stek;
int zapis_varr;
int gamescore = 0;
//=============================================
bool but_start = true;
bool but_end = false;
bool but_cancel = false;
//=============================================
int buton_0 = 0, buton_1 = 1, buton_2 = 2, buton_3 = 3, buton_4 = 4, buton_5 = 5, buton_6 = 6, buton_7 = 7, buton_8 = 8, buton_9 = 9, buton_10 = 10, buton_11 = 11, buton_12 = 12,
buton_13 = 13, buton_14 = 14, buton_15 = 15, buton_16 = 16, buton_17 = 17, buton_18 = 18, buton_19 = 19, buton_20 = 20, buton_21 = 21, buton_22 = 22, buton_23 = 23, buton_24 = 24;
bool cont0 = false, cont1 = false, cont2 = false, cont3 = false, cont4 = false, cont5 = false, cont6 = false, cont7 = false, cont8 = false, cont9 = false, cont10 = false, cont11 = false,
cont12 = false, cont13 = false, cont14 = false, cont15 = false, cont16 = false, cont17 = false, cont18 = false, cont19 = false, cont20 = false, cont21 = false, cont22 = false, cont23 = false, cont24 = false;
bool start0 = false, start1 = false, start2 = false, start3 = false, start4 = false, start5 = false, start6 = false, start7 = false, start8 = false, start9 = false, start10 = false, start11 = false, start12 = false, start13 = false, start14 = false, start15 = false,
start16 = false, start17 = false, start18 = false, start19 = false, start20 = false, start21 = false, start22 = false, start23 = false, start24 = false;
bool defend0 = true, defend1 = true, defend2 = true, defend3 = true, defend4 = true, defend5 = true, defend6 = true, defend7 = true, defend8 = true, defend9 = true, defend10 = true, defend11 = true, defend12 = true, defend13 = true, defend14 = true, defend15 = true,
defend16 = true, defend17 = true, defend18 = true, defend19 = true, defend20 = true, defend21 = true, defend22 = true, defend23 = true, defend24 = true;
void create_arr_game(int** arr_game, int size_n, int size_m, int* chet) {
	for (int i = 0; i < size_n; i++)
		arr_game[i] = new int[size_m];
	int p = 1;
	std::random_device rd;  std::uniform_int_distribution<int> uid(0, 2);
	for (int i = 0; i < size_n; i++)
		for (int j = 0, g = 0; j < size_m; j++, g = p) {
			std::mt19937 gen(rd());
			p = uid(rd);
			arr_game[i][j] = chet[g];
		}
}
int sum(int score_game) {
	if (score_game >= 65536) return 65536;
	if (score_game >= 32768) return 32768;
	if (score_game >= 16384) return 16384;
	if (score_game >= 8192) return 8192;
	if (score_game >= 4096) return 4096;
	if (score_game >= 2048) return 2048;
	if (score_game >= 1024) return 1024;
	if (score_game >= 512) return 512;
	if (score_game >= 256) return 256;
	if (score_game >= 128) return 128;
	if (score_game >= 64) return 64;
	if (score_game >= 32) return 32;
	if (score_game >= 16) return 16;
	if (score_game >= 8) return 8;
	if (score_game >= 4) return 4;
	if (score_game >= 2) return 2;

}
void bool_return() {
	cont0 = false, cont1 = false, cont2 = false, cont3 = false, cont4 = false, cont5 = false, cont6 = false, cont7 = false, cont8 = false, cont9 = false, cont10 = false, cont11 = false,
		cont12 = false, cont13 = false, cont14 = false, cont15 = false, cont16 = false, cont17 = false, cont18 = false, cont19 = false, cont20 = false, cont21 = false, cont22 = false, cont23 = false, cont24 = false;
	start0 = false, start1 = false, start2 = false, start3 = false, start4 = false, start5 = false, start6 = false, start7 = false, start8 = false, start9 = false, start10 = false, start11 = false, start12 = false, start13 = false, start14 = false, start15 = false,
		start16 = false, start17 = false, start18 = false, start19 = false, start20 = false, start21 = false, start22 = false, start23 = false, start24 = false;
	start_con = false;
}
void return_start() {
	start0 = false, start1 = false, start2 = false, start3 = false, start4 = false, start5 = false, start6 = false, start7 = false, start8 = false, start9 = false, start10 = false, start11 = false, start12 = false, start13 = false, start14 = false, start15 = false,
		start16 = false, start17 = false, start18 = false, start19 = false, start20 = false, start21 = false, start22 = false, start23 = false, start24 = false;
}
void start_true() {
	start0 = true, start1 = true, start2 = true, start3 = true, start4 = true, start5 = true, start6 = true, start7 = true, start8 = true, start9 = true, start10 = true, start11 = true, start12 = true, start13 = true, start14 = true, start15 = true,
		start16 = true, start17 = true, start18 = true, start19 = true, start20 = true, start21 = true, start22 = true, start23 = true, start24 = true;
}
void cont0_24() {
	cont0 = true, cont1 = true, cont2 = true, cont3 = true, cont4 = true, cont5 = true, cont6 = true, cont7 = true, cont8 = true, cont9 = true, cont10 = true, cont11 = true,
		cont12 = true, cont13 = true, cont14 = true, cont15 = true, cont16 = true, cont17 = true, cont18 = true, cont19 = true, cont20 = true, cont21 = true, cont22 = true, cont23 = true, cont24 = true;
}
void true_defend() {
	defend0 = true, defend1 = true, defend2 = true, defend3 = true, defend4 = true, defend5 = true, defend6 = true, defend7 = true, defend8 = true, defend9 = true, defend10 = true, defend11 = true, defend12 = true, defend13 = true, defend14 = true, defend15 = true,
		defend16 = true, defend17 = true, defend18 = true, defend19 = true, defend20 = true, defend21 = true, defend22 = true, defend23 = true, defend24 = true;
}

bool proverka_end() {
	bool arr_bol[25]{};
	arr_bol[0] = cont0; arr_bol[1] = cont1; arr_bol[2] = cont2; arr_bol[3] = cont3; arr_bol[4] = cont4; arr_bol[5] = cont5; arr_bol[6] = cont6; arr_bol[7] = cont7; arr_bol[8] = cont8;
	arr_bol[9] = cont9; arr_bol[10] = cont10; arr_bol[11] = cont11; arr_bol[12] = cont12; arr_bol[13] = cont13; arr_bol[14] = cont14; arr_bol[15] = cont15; arr_bol[16] = cont16; arr_bol[17] = cont17;
	arr_bol[18] = cont18; arr_bol[19] = cont19; arr_bol[20] = cont20; arr_bol[21] = cont21; arr_bol[22] = cont22; arr_bol[23] = cont23; arr_bol[24] = cont24;
	for (int i = 0; i <= 25; i++) {
		if (arr_bol[i] == true)
			return true;
	}
}
int arr[9] = { 2, 4, 8, 16, 32, 64, 128, 256, 512 };
int r = 0;
int n_rand = 0;
void sosi(stek* stk)
{
	int* arr_rand = new int[size1];
	int i = 0;
	for (stek* temp = stk; temp; temp = temp->next, i++)
		arr_rand[i] = temp->num;

	for (int i = 1; i < size1; i++)
	{
		if (arr_rand[i] == 0)
			arr_game[0][0] = 0;
		if (arr_rand[i] == 1)
			arr_game[0][1] = 0;
		if (arr_rand[i] == 2)
			arr_game[0][2] = 0;
		if (arr_rand[i] == 3)
			arr_game[0][3] = 0;
		if (arr_rand[i] == 4)
			arr_game[0][4] = 0;
		if (arr_rand[i] == 5)
			arr_game[1][0] = 0;
		if (arr_rand[i] == 6)
			arr_game[1][1] = 0;
		if (arr_rand[i] == 7)
			arr_game[1][2] = 0;
		if (arr_rand[i] == 8)
			arr_game[1][3] = 0;
		if (arr_rand[i] == 9)
			arr_game[1][4] = 0;
		if (arr_rand[i] == 10)
			arr_game[2][0] = 0;
		if (arr_rand[i] == 11)
			arr_game[2][1] = 0;
		if (arr_rand[i] == 12)
			arr_game[2][2] = 0;
		if (arr_rand[i] == 13)
			arr_game[2][3] = 0;
		if (arr_rand[i] == 14)
			arr_game[2][4] = 0;
		if (arr_rand[i] == 15)
			arr_game[3][0] = 0;
		if (arr_rand[i] == 16)
			arr_game[3][1] = 0;
		if (arr_rand[i] == 17)
			arr_game[3][2] = 0;
		if (arr_rand[i] == 18)
			arr_game[3][3] = 0;
		if (arr_rand[i] == 19)
			arr_game[3][4] = 0;
		if (arr_rand[i] == 20)
			arr_game[4][0] = 0;
		if (arr_rand[i] == 21)
			arr_game[4][1] = 0;
		if (arr_rand[i] == 22)
			arr_game[4][2] = 0;
		if (arr_rand[i] == 23)
			arr_game[4][3] = 0;
		if (arr_rand[i] == 24)
			arr_game[4][4] = 0;
	}
}
int randmix() {
	if (gamescore >= 4500)return 8;
	if (gamescore >= 4000)return 7;
	if (gamescore >= 3250)return 6;
	if (gamescore >= 2500)return 5;
	if (gamescore >= 1250)return 4;
	if (gamescore >= 750)return 3;
	if (gamescore >= 150)return 2;
	if (gamescore <= 100)return 2;
	return 2;
}
std::ofstream write("Save\\Records.txt", std::ios_base::app);
std::ifstream read("Save\\Records.txt");
bool lose()
{
	if (arr_game[0][0] == arr_game[0][1] || arr_game[0][0] == arr_game[1][0] || arr_game[0][0] == arr_game[1][1]) { return true; }
	if (arr_game[0][1] == arr_game[0][0] || arr_game[0][1] == arr_game[1][0] || arr_game[0][1] == arr_game[1][1] || arr_game[0][1] == arr_game[1][2] || arr_game[0][1] == arr_game[0][2]) { return true; }
	if (arr_game[0][2] == arr_game[0][1] || arr_game[0][2] == arr_game[1][1] || arr_game[0][2] == arr_game[1][1] || arr_game[0][2] == arr_game[1][2] || arr_game[0][2] == arr_game[0][3]) { return true; }
	if (arr_game[0][3] == arr_game[0][2] || arr_game[0][3] == arr_game[1][2] || arr_game[0][3] == arr_game[1][3] || arr_game[0][3] == arr_game[1][4] || arr_game[0][3] == arr_game[0][4]) { return true; }
	if (arr_game[0][4] == arr_game[0][3] || arr_game[0][4] == arr_game[1][3] || arr_game[0][4] == arr_game[1][3]) { return true; }
	if (arr_game[1][0] == arr_game[0][0] || arr_game[1][0] == arr_game[0][1] || arr_game[1][0] == arr_game[1][1] || arr_game[1][0] == arr_game[2][0] || arr_game[1][0] == arr_game[2][1]) { return true; }
	if (arr_game[1][1] == arr_game[0][0] || arr_game[1][1] == arr_game[0][1] || arr_game[1][1] == arr_game[0][2] || arr_game[1][1] == arr_game[1][2] || arr_game[1][1] == arr_game[1][0] || arr_game[1][1] == arr_game[2][0] || arr_game[1][1] == arr_game[2][1] || arr_game[1][1] == arr_game[2][2]) { return true; }
	if (arr_game[1][2] == arr_game[0][1] || arr_game[1][2] == arr_game[0][2] || arr_game[1][2] == arr_game[0][3] || arr_game[1][2] == arr_game[1][1] || arr_game[1][2] == arr_game[1][3] || arr_game[1][2] == arr_game[2][1] || arr_game[1][2] == arr_game[2][2] || arr_game[1][2] == arr_game[2][3]) { return true; }
	if (arr_game[1][3] == arr_game[0][2] || arr_game[1][3] == arr_game[0][3] || arr_game[1][3] == arr_game[0][4] || arr_game[1][3] == arr_game[1][2] || arr_game[1][3] == arr_game[1][4] || arr_game[1][3] == arr_game[2][2] || arr_game[1][3] == arr_game[2][3] || arr_game[1][3] == arr_game[2][4]) { return true; }
	if (arr_game[1][4] == arr_game[0][3] || arr_game[1][4] == arr_game[0][4] || arr_game[1][4] == arr_game[1][3] || arr_game[1][4] == arr_game[2][3] || arr_game[1][4] == arr_game[2][4]) { return true; }
	if (arr_game[2][0] == arr_game[1][0] || arr_game[2][0] == arr_game[1][1] || arr_game[2][0] == arr_game[2][1] || arr_game[2][0] == arr_game[3][0] || arr_game[2][0] == arr_game[3][1]) { return true; }
	if (arr_game[2][1] == arr_game[2][0] || arr_game[2][1] == arr_game[2][2] || arr_game[2][1] == arr_game[1][0] || arr_game[2][1] == arr_game[1][1] || arr_game[2][1] == arr_game[1][2] || arr_game[2][1] == arr_game[3][2] || arr_game[2][1] == arr_game[3][1] || arr_game[2][1] == arr_game[3][2]) { return true; }
	if (arr_game[2][2] == arr_game[2][1] || arr_game[2][2] == arr_game[2][3] || arr_game[2][2] == arr_game[1][1] || arr_game[2][2] == arr_game[1][2] || arr_game[2][2] == arr_game[1][3] || arr_game[2][2] == arr_game[3][1] || arr_game[2][2] == arr_game[3][2] || arr_game[2][2] == arr_game[3][3]) { return true; }
	if (arr_game[2][3] == arr_game[2][2] || arr_game[2][3] == arr_game[2][4] || arr_game[2][3] == arr_game[1][2] || arr_game[2][3] == arr_game[1][3] || arr_game[2][3] == arr_game[1][4] || arr_game[2][3] == arr_game[3][2] || arr_game[2][3] == arr_game[3][3] || arr_game[2][3] == arr_game[3][4]) { return true; }
	if (arr_game[2][4] == arr_game[2][3] || arr_game[2][4] == arr_game[1][3] || arr_game[2][4] == arr_game[1][4] || arr_game[2][4] == arr_game[3][3] || arr_game[2][4] == arr_game[3][4]) { return true; }
	if (arr_game[3][0] == arr_game[2][0] || arr_game[3][0] == arr_game[2][1] || arr_game[3][0] == arr_game[3][1] || arr_game[3][0] == arr_game[4][0] || arr_game[3][0] == arr_game[4][1]) { return true; }
	if (arr_game[3][1] == arr_game[3][0] || arr_game[3][1] == arr_game[3][2] || arr_game[3][1] == arr_game[2][0] || arr_game[3][1] == arr_game[2][1] || arr_game[3][1] == arr_game[2][2] || arr_game[3][1] == arr_game[4][0] || arr_game[3][1] == arr_game[4][1] || arr_game[3][1] == arr_game[4][2]) { return true; }
	if (arr_game[3][2] == arr_game[3][1] || arr_game[3][2] == arr_game[3][3] || arr_game[3][2] == arr_game[2][1] || arr_game[3][2] == arr_game[2][2] || arr_game[3][2] == arr_game[2][3] || arr_game[3][2] == arr_game[4][1] || arr_game[3][2] == arr_game[4][2] || arr_game[3][2] == arr_game[4][3]) { return true; }
	if (arr_game[3][3] == arr_game[3][2] || arr_game[3][3] == arr_game[3][4] || arr_game[3][3] == arr_game[2][2] || arr_game[3][3] == arr_game[2][3] || arr_game[3][3] == arr_game[2][4] || arr_game[3][3] == arr_game[4][2] || arr_game[3][3] == arr_game[4][3] || arr_game[3][3] == arr_game[4][4]) { return true; }
	if (arr_game[3][4] == arr_game[3][3] || arr_game[3][4] == arr_game[2][3] || arr_game[3][4] == arr_game[2][4] || arr_game[3][4] == arr_game[4][3] || arr_game[3][4] == arr_game[4][4]) { return true; }
	if (arr_game[4][0] == arr_game[3][0] || arr_game[4][0] == arr_game[3][1] || arr_game[4][0] == arr_game[4][1]) { return true; }
	if (arr_game[4][1] == arr_game[4][0] || arr_game[4][1] == arr_game[4][2] || arr_game[4][1] == arr_game[3][0] || arr_game[4][1] == arr_game[3][1] || arr_game[4][1] == arr_game[3][2]) { return true; }
	if (arr_game[4][2] == arr_game[4][3] || arr_game[4][2] == arr_game[4][1] || arr_game[4][2] == arr_game[3][1] || arr_game[4][2] == arr_game[3][2] || arr_game[4][2] == arr_game[3][3]) { return true; }
	if (arr_game[4][3] == arr_game[4][2] || arr_game[4][3] == arr_game[4][4] || arr_game[4][3] == arr_game[3][2] || arr_game[4][3] == arr_game[3][3] || arr_game[4][3] == arr_game[3][4]) { return true; }
	if (arr_game[4][4] == arr_game[4][3] || arr_game[4][4] == arr_game[3][3] || arr_game[4][4] == arr_game[3][4]) { return true; }
	return false;
}
bool win()
{
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			if (arr_game[i][j] == 65536)
				return true;
	return false;
}
int GLAVNOE()
{

	if (arr_game[0][0] == 0)
	{
		n_rand = 0;
		r = 0;
		n_rand = randmix();
		std::random_device rd;  std::uniform_int_distribution<int> uid(0, n_rand);
		std::mt19937 gen(rd());
		r = arr[uid(rd)];
		arr_game[0][0] = r;
		GLAVNOE();
	}
	if (arr_game[0][1] == 0)
	{
		n_rand = 0;
		r = 0;
		n_rand = randmix();
		std::random_device rd;  std::uniform_int_distribution<int> uid(0, n_rand);
		std::mt19937 gen(rd());
		r = arr[uid(rd)];
		arr_game[0][1] = r;
		GLAVNOE();
	}
	if (arr_game[0][2] == 0)
	{
		n_rand = 0;
		r = 0;
		n_rand = randmix();
		std::random_device rd;  std::uniform_int_distribution<int> uid(0, n_rand);
		std::mt19937 gen(rd());
		r = arr[uid(rd)];
		arr_game[0][2] = r;
		GLAVNOE();
	}

	if (arr_game[0][3] == 0)
	{
		n_rand = 0;
		r = 0;
		n_rand = randmix();
		std::random_device rd;  std::uniform_int_distribution<int> uid(0, n_rand);
		std::mt19937 gen(rd());
		r = arr[uid(rd)];
		arr_game[0][3] = r;
		GLAVNOE();
	}
	if (arr_game[0][4] == 0)
	{
		n_rand = 0;
		r = 0;
		n_rand = randmix();
		std::random_device rd;  std::uniform_int_distribution<int> uid(0, n_rand);
		std::mt19937 gen(rd());
		r = arr[uid(rd)];
		arr_game[0][4] = r;
		GLAVNOE();
	}
	if (arr_game[1][0] == 0)
	{
		arr_game[1][0] = arr_game[0][0];
		arr_game[0][0] = 0;
		GLAVNOE();
	}
	if (arr_game[1][1] == 0)
	{
		arr_game[1][1] = arr_game[0][1];
		arr_game[0][1] = 0;
		GLAVNOE();
	}
	if (arr_game[1][2] == 0)
	{
		arr_game[1][2] = arr_game[0][2];
		arr_game[0][2] = 0;
		GLAVNOE();
	}
	if (arr_game[1][3] == 0)
	{
		arr_game[1][3] = arr_game[0][3];
		arr_game[0][3] = 0;
		GLAVNOE();
	}
	if (arr_game[1][4] == 0)
	{
		arr_game[1][4] = arr_game[0][4];
		arr_game[0][4] = 0;
		GLAVNOE();
	}
	if (arr_game[2][0] == 0)
	{
		arr_game[2][0] = arr_game[1][0];
		arr_game[1][0] = 0;
		GLAVNOE();
	}
	if (arr_game[2][1] == 0)
	{
		arr_game[2][1] = arr_game[1][1];
		arr_game[1][1] = 0;
		GLAVNOE();
	}
	if (arr_game[2][2] == 0)
	{
		arr_game[2][2] = arr_game[1][2];
		arr_game[1][2] = 0;
		GLAVNOE();
	}
	if (arr_game[2][3] == 0)
	{
		arr_game[2][3] = arr_game[1][3];
		arr_game[1][3] = 0;
		GLAVNOE();
	}
	if (arr_game[2][4] == 0)
	{
		arr_game[2][4] = arr_game[1][4];
		arr_game[1][4] = 0;
		GLAVNOE();
	}
	if (arr_game[3][0] == 0)
	{
		arr_game[3][0] = arr_game[2][0];
		arr_game[2][0] = 0;
		GLAVNOE();
	}
	if (arr_game[3][1] == 0)
	{
		arr_game[3][1] = arr_game[2][1];
		arr_game[2][1] = 0;
		GLAVNOE();
	}
	if (arr_game[3][2] == 0)
	{
		arr_game[3][2] = arr_game[2][2];
		arr_game[2][2] = 0;
		GLAVNOE();
	}
	if (arr_game[3][3] == 0)
	{
		arr_game[3][3] = arr_game[2][3];
		arr_game[2][3] = 0;
		GLAVNOE();
	}
	if (arr_game[3][4] == 0)
	{
		arr_game[3][4] = arr_game[2][4];
		arr_game[2][4] = 0;
		GLAVNOE();
	}
	if (arr_game[4][0] == 0)
	{
		arr_game[4][0] = arr_game[3][0];
		arr_game[3][0] = 0;
		GLAVNOE();
	}
	if (arr_game[4][1] == 0)
	{
		arr_game[4][1] = arr_game[3][1];
		arr_game[3][1] = 0;
		GLAVNOE();
	}
	if (arr_game[4][2] == 0)
	{
		arr_game[4][2] = arr_game[3][2];
		arr_game[3][2] = 0;
		GLAVNOE();
	}
	if (arr_game[4][3] == 0) {

		arr_game[4][3] = arr_game[3][3];
		arr_game[3][3] = 0;
		GLAVNOE();
	}
	if (arr_game[4][4] == 0)
	{
		arr_game[4][4] = arr_game[3][4];
		arr_game[3][4] = 0;
		GLAVNOE();
	}
	return 0;
}
bool end_game()
{
	return true;
}
