
#include <iostream>
#include <Math.h>
#include <time.h>
#include <string>
#include <stdio.h>
#include "ConsValueTAXI.h"
#include "Header.h"

using namespace constants;
using namespace std;

const string currentDateTime(){
	time_t now = time(0);
	struct tm tStruct;
	char buf[80];
	tStruct = *localtime(&now);
	strftime(buf,sizeof(buf),"%Y",&tStruct);
	
	return buf;
}

int main()
{
	int old=0;
	double s;
	int chosse(0);
	int nInputInteger,a,b;
	int yStart,yEnd, day, month, year;
	

	while (chosse < 81)
	{
		cout << "___Menu___\n";
#pragma region exerciseMenu
		cout << "___Bai 1 Tinh tien Taxi___\n";
		cout << "___Bai 2 Tinh Tuoi___\n";
		cout << "___Bai 3 Tinh tong cac chu so cua so nguyen___\n";
		cout << "___Bai 4 Kiem tra doi xung ___\n";
		cout << "___Bai 5 Dem chu so cua so nguyen duong ___\n";
		cout << "___Bai 6 Tim giai thua cua mot so___\n";
		cout << "___Bai 7 Kiem tra so tu. man~ ___\n";
		cout << "___Bai 8 Kiem tra nam nhuan ___\n";
		cout << "___Bai 9 Kiem tra ngay hop le___\n";
		cout << "___Bai 10 Tim ngay truoc va ngay sau cua mot ngay ___\n";
		cout << "___Bai 11 Tinh thu tu ngay trong nam___\n";
		cout << "___Bai 12 Kiem tra N co phai so nguyen to khong ___\n";
		cout << "___Bai 13 Tim uoc chung lon nhat va boi so chung nho nhat cua a-b___\n";
		cout << "___Bai 14 Viet chuong trinh dem uocw so cua so nguyen duong n___\n";
		cout << "___Bai 15 Viet chuong trinh kiem tra so n co phai so hoan thien khong ?___\n";
		cout << "___Bai 16 Tinh n!(n>0)___\n";
		cout << "___Bai 17 Tinh Tính P(n)=1.3.5...(2n+1) (n>=0)___\n";
		cout << "___Bai 18 Tinh S(n)= 1+3+5+n+...+(2n+1)___";
		cout << "___Bai 19 Tinh S()=1-2+3-4+5+..+((-1)^(n+1))*n (n>0)___\n";
		cout << "___Bai 20 Tinh S(n)= 1+1.2+1.2.3+...+1.2.3.n   (n>0)___\n";
		cout << "___Bai 21 Tinh S(n)= 1^2+2^2+3^2+...+n^2   (n>0)___\n";
		cout << "___Bai 22 Tinh S(n)= 1+1/2+1/3+...+1/n   (n>0)___\n";
		cout << "___Bai 23 Tinh S(n)= 1 + 2^2 + 3^3 + ... + n^n (n>=0)___\n";
		cout << "___Bai 24 Tinh S(n)=1/2 + 2/3 + 3/4 + ... + n/(n+1)   (n>0)___\n";
		cout << "___Bai 25 Tinh S(n)=1 + 1/2! + 1/3! + ... + 1/n! (n>0) ___\n";
		cout << "___Bai 26 Tinh S(n)= 1 + (1+2)/2! + (1+2+3)/3! + ... + (1+2+3+..+n)/n! (n>0)  ___\n";
		cout << "___Bai 27 Tinh S(n)= 1 + 1/(1+2) + 1/(1+2+3) + ... + 1/(1+2+3+..+n) (n>0)  ___\n";
		cout << "___Bai 28 Tinh P(x,y)=x^y ___\n";
		cout << "___Bai 29 Tinh S(n)= 1+(1+2)+(1+2+3)+...+(1+2+3+...+n) ___\n";
		cout << "___Bai 30 Xuat ra day so Fibonacci ___\n";
		cout << "___Bai 31 Chuong trinh nhap xuat mang mot chieu cac so nguyen ___\n";
		cout << "___Bai 32 Viet chuong trinh khoi tao 1 mang n phan tu voi gia tri = 0 ___\n";
		cout << "___Bai 33 Viet chuong trinh phat sinh ngau nhien mang 1 chieu cac so nguyen am ___\n";
		cout << "___Bai 34 Viet chuong trinh phat sinh ngau nhien mang 1 chieu cac so nguyen tang dan ___\n";
		cout << "___Bai 35 Viet chuong trinh nhap mang cac so nguyen va xuat cac phan tu am trong mang ___\n";
		cout << "___Bai 36 Viet chuong trinh nhap mang cac so nguyen va xuat cac phan le co trong mang ___\n";
		cout << "___Bai 37 Viet chuong trinh nhap vao mang mnot chieu cac so nguyen va xuat ra cac phan tu chan<20 ___\n";
		cout << "___Bai 38 Viet Chuong trinh xuat ra man hinh cac phan tu la so nguyen to trong mang 1 chieu ___\n";
		cout << "___Bai 39 Viet chuong trinh in ra cac phan tu la so chinh phuong o vi tri le trong mang 1 chieu  ___\n";
		cout << "___Bai 40 Viet ham tim vi tri phan tu co gia tri x xuat hien cuoi cung co trong mang ___\n";
		cout << "___Bai 41 Viet ham tim vi tri cua phan tu nho nhat trong mang cac so nguyen___\n";
		cout << "___Bai 42 Viet ham tim vi tri cua phan tu lon nhat trong mang cac so nguyen___\n";
		cout << "___Bai 43 Viet ham in cac phan tu nguyen to trong mang cac so nguyen___\n";
		cout << "___Bai 44 Viet ham in cac phan tu nguyen to lon hon 23 trong mang cac so nguyen   ___\n";
		cout << "___Bai 45 Viet ham tim vi tri phan tu am dau tien trong mang  ___\n";
		cout << "___Bai 46 Viet ham tim vi tri phan tu am lon nhat trong mang  ___\n";
		cout << "___Bai 47 Viet ham tim vi tri phan tu duong dau tien trong mang___\n";
		cout << "___Bai 48 Viet ham tim vi tri phan tu duong be nhat trong mang___\n";
		cout << "___Bai 49 Viet ham in tat ca phan tu la boi cua 3 va 5___\n";
		cout << "___Bai 50 Viet ham tim so chan cuoi cung co trong mang___\n";
		cout << "___Bai 51 Viet ham tim so le lon nhat co trong mang___\n";
		cout << "___Bai 52 Viet ham tim va doi cho cho phan tu lon nhat va nho nhat trong mang so nguyen ___\n";
		cout << "___Bai 53 Viet ham tim va doi cho^~ cho phan tu lon nhat va nho nhat trong mang___\n";
		cout << "___Bai 54 Viet chuong trinh ra cac phan tu? tu 2 day so thuc theo yeu cau___\n";
		cout << "___Bai 55 Viet ham dem cac phan tu am , ham dem cac phan tu duong trong mang___\n";
		cout << "___Bai 56 Viet ham dem cac phan tu chan , ham dem cac phan tu le trong mang___\n";
		cout << "___Bai 57 Viet ham dem so lan xuat hien phan tu x co trong mang___\n";
		cout << "___Bai 58 Viet ham dem cac phan tu nho hon x trong mang___\n";
		cout << "___Bai 59 Viet ham dem cac phan tu la so nguyen to trong mang___\n";
		cout << "___Bai 60 Viet ham dem cac phan tu la boi cua 3 hoac 5 co trong mang cac so nguyen ___\n";
		cout << "___Bai 61 Viet ham tinh tong cac phan tu chan trong mang___\n";
		cout << "___Bai 62 Viet ham tinh tong cac phan tu le trong mang cac so nguyen ___\n";
		cout << "___Bai 63 Viet ham tinh tong cac phan tu la so nguyen to trong mang___\n";
		cout << "___Bai 64 Viet ham tinh tong cac phan tu nam o vi tri chan trong mang cac so nguyen___\n";
		cout << "___Bai 65 Viet ham tinh tong cac phan tu chia het cho 5 co trong mang ___\n";
		cout << "___Bai 66 Viet ham tinh tong cac phan tu cuc dai co trong mang so nguyen___\n";
		cout << "___Bai 67 Viet ham tinh tong cac phan tu cuc tieu co trong mang so nguyen___\n";
		cout << "___Bai 68 Viet ham tinh tong cac phan tu la boi cua 3 hoan 5 trong mang so nguyen ___\n";
		cout << "___Bai 69 Viet ham tinh tong cac phan tu la so hoan thien trong mang cac so nguyen___\n";
		cout << "___Bai 70 Viet ham tinh gia tri trung binh cac so hoan thien trong mang cac so nguyen ___\n";
		cout << "___Bai 71 Viet ham tinh gia tri trung binh cac phan co gia tri le trong mang so nguyen___\n";
		cout << "___Bai 72 Viet ham tinh gia tri trung binh cac phan tu co gia tri la uoc so cua x trong mang so nguyen___\n";
		cout << "___Bai 73 Viet ham sap xep mang theo thu tu giam dan___\n";
		cout << "___Bai 74 Viet ham sap xep mang theo thu tu tang dan cua cac tu so nguyen___\n";
		cout << "___Bai 75 Viet ham sap xep cac phan tu le tang dan___\n";
		cout << "___Bai 76 Viet ham sap xep cac phan tu chan giam dan___\n";
		cout << "___Bai 77 Dem ky tu chu a co trong chuoi___\n";
		cout << "___Bai 78 Viet chuong trinh nhap vao 2 chuoi ky tu str1 va str2___\n";
		cout << "___Bai 79 Viet chuong trinh nhap toa do 2 diem va tinh khoang cach giua chung ___\n";
		cout << "___Bai 80 Viet chuong trinh nhap va tinh tong, hieu, tich, thuong cua 2 phan so___\n";
		cout << "___Bai Viet chuong trinh so sanh 2 thoi gian nhap vao va in ra ket qua ___\n";
#pragma endregion
		cout << "___----------Exit-----------___\n";

		cout << "Chosse your option : "; cin >> chosse;
		switch (chosse)
		{
		case 1:
			cout << "Quang duong ban muon di : ";
			cin >> s;
			cout << tinhTienTaxi(s) << "VND\n";
			break;

		case 2:
			cout << "\nNhap vao nam sinh cua ban";
			cin >> old;
			cout << "Ban sinh nam :" << old << endl;
			cout << "Ban " << std::stoi(currentDateTime()) - old << "tuoi" << endl;
			break;

		case 3:
			cout << "\nNhap vao so nguyen ";
			cin >> nInputInteger;
			cout <<"Tong so nguyen : "<< tinhTongSoNguyen(nInputInteger);
			break;

		case 4:
			cout << "\nNhap vao so nguyen ";
			cin >> nInputInteger;
			if (laSoDoiXung(nInputInteger))
			{
				cout << "YES\n";
			}
			else
			{
				cout << "NO\n";
			}
			break;
		case 5:
			cout << "\nNhap vao so nguyen ";
			cin >> nInputInteger;
			cout << "Dem so nguyen : Co " << demChuSoNguyenDuong(nInputInteger)<<" so\n";
			cout << "Dem so nguyen(Phuong Phap De Quy ) : Co " << demsoNguyenDuongDEQUY(nInputInteger) << " so \n";
			break;
		case 6:
			cout << "\nNhap vao so nguyen ";
			cin >> nInputInteger;
			cout << "Giai thua DE QUY " << tinhGiaiThua(nInputInteger) << " \n";
			cout << "Giai thua FOR " << tinhGiaiThuaFOR(nInputInteger) << " \n";

			
			break;
		case 7:
			cout << "\nNhap vao so nguyen ";
			cin >> nInputInteger;
			if (laSoTuMan(nInputInteger))
			{
				cout << "YES\n";
			}
			else
			{
				cout << "NO\n";
			}
			break;
		case 8:
			cout << "\nNhap vao nam bat dau : ";
			cin >> yStart;

			cout << "\nNhap vao nam ket thuc : ";
			cin >> yEnd;
			inNamNhuanGiuaCacMocThoiGian(yStart,yEnd);
			break;
		case 9:
			cout << "\nNhap vao ngay - thang - nam ";
			cin >>day>>month>>year ;
			if (laNgayHopLe(day,month,year))
			{
				cout << "YES\n";
			}
			else
			{
				cout << "NO\n";
			}
			break;
		case 10:
			cout << "\nNhap vao ngay - thang - nam ";
			cin >> day >> month >> year;
			
			if (laNgayHopLe(day,month,year))
			{
				int tempDAY = day;
				int tempMONTH = month;
				int tempYEAR = year;

				cout << "\nYesterday:";
				findYesterday(tempDAY, tempMONTH, tempYEAR);
				cout << tempDAY << "/" << tempMONTH << "/" << tempYEAR;

				tempDAY = day;
				tempMONTH = month;
				tempYEAR = year;

				cout << "\nTomorrow:";
				findTomorrow(tempDAY, tempMONTH, tempYEAR);
				cout << tempDAY << "/" << tempMONTH << "/" << tempYEAR;
			}
			else
			{
				cout << "Ngay Khong Hop Le ! ...\n";
			}
				
			
			break;
		case 11 : 
			cout << "\nNhap vao ngay - thang - nam ";
			cin >> day >> month >> year;
			if (laNgayHopLe(day, month, year))
			{
				int tempDAY = day;
				int tempMONTH = month;
				int tempYEAR = year;
				cout << "So ngay da troi qua : " << countDaysOfYear(tempDAY, tempMONTH, tempYEAR) << " ngay \n";
			}
			else
			{
				cout << "Ngay khong hop le !...";
			}
			break;
		case 12:
			cout << "\nNhap vao so nguyen ";
			cin >> nInputInteger;
			if (checkNumberINTEGER(nInputInteger))
			{
				cout << "YES\n";
			}
			else
			{
				cout << "NO\n";
			}
			break;
		case 13:
			cout << "Nhap a :\n";
			cin >> a;

			cout << "Nhap b :\n";
			cin >> b;

			cout << "UCLN - " << UCLN(a, b) << " - BCNN - " << BCNN(a,b)<<endl;
			break;
		case 14:
			cout << "Nhap a :\n";
			cin >> nInputInteger;
			cout << "So uoc cua so nguyen duong :" << demUocSoCuaSoNguyenDuong(nInputInteger) << endl;
			break;
		case 15:
			cout << "Nhap a :\n";
			cin >> nInputInteger;
			if (kiemTraSoHoanThien(nInputInteger))
			{
				cout << "YES\n";
			}
			else
			{
				cout << "NO\n";
			}
			break;
		case 16:
			cout << "Nhap a :\n";
			cin >> nInputInteger;
			cout << "Gia tri giai thua :" << tinhGiaiThuaFOR(nInputInteger) << endl;
			break;
		case 17:
		case 18:
			cout << "Nhap a :\n";
			cin >> nInputInteger;
			cout << "Gia tri P(n)=1.3.5...(2n+1) (n>=0) :" << tinhTichCacSoLe(nInputInteger) << endl;
			break;
		case 19:
		
			cout << "Nhap a :\n";
			cin >> nInputInteger;
			cout << "Gia tri S(n) = 1-2+3-4+5+...+((-1)^(n+1))*n (n>0) :" << tinhTongCacSoLevaHieuCacSoChan(nInputInteger) << endl;
			break;
		case 20:

			cout << "Nhap a :\n";
			cin >> nInputInteger;
			cout << "Gia tri S(n) = 1 + 1.2 + 1.2.3 +...+ 1.2.3...n (n>0) :" << tinhTongTich(nInputInteger) << endl;
			break;
		default: 
			cout << "\nKhong tim thay du kien !...\n";
			break;
		}
	} 

	return 0;

}
double tinhTienTaxi(double s) {
	double total(0);
	if (s <= MUC_1)
	{
		total = s * GIA_1;

	}
	else {
		if (s <= MUC_2)
		{
			total = MUC_1 * GIA_1 + (s - MUC_1) * GIA_2;

		}
		else
		{
			if (s > MUC_2)
			{
				total = (MUC_1 * GIA_1) + ((MUC_2 - MUC_1) * GIA_2) + ((s - MUC_2) * GIA_3);
				if (s > MUC_3)
				{
					total = total * (1 - PHAN_TRAM);
				}
			}
		}

	}

	return total;
}
int tinhTongSoNguyen(int nInput) {

	int nRem, nSum(0);
	while (nInput!=0)
	{
		// cat lay chu so cuoi cung cua so nguyen (Chia lay du )
		nRem = nInput % 10;
		// Luu va cong chu so vao bien Sum
		nSum = nSum + nRem;
		// Xoa chu so cuoi (Chia lay phan nguyen)
		nInput = nInput / 10;
	}
	return nSum;
}
bool laSoDoiXung(int nInt) {
	if (nInt== kiemTraSoDao(nInt))
	{
		return true;
	}
	else
	{
		return false;
	}
}
int kiemTraSoDao(int nInt) {
	int nRem,nSoDao(0);
	while (nInt!= 0 )
	{
		//Tach so cuoi (Chia lay du)
		nRem = nInt % 10;
		//Nhan ket qua voi 10 cong voi so vau tach duoc 
		nSoDao = (nSoDao * 10) + nRem;
		//Xoa so vua tach
		nInt = nInt / 10;
	}
	return nSoDao;
}
int demChuSoNguyenDuong(int nInput) {
	int nCount(0);
	while (nInput!=0)
	{
		nInput /= 10;
		nCount++;
	}
	return nCount;
}
int demsoNguyenDuongDEQUY(int nInput) {
	if (nInput<10)//Phan co so thoat chuong trinh
	{
		return 1;
	}
	return 1+ demsoNguyenDuongDEQUY(nInput / 10);//Phan De Quy

}
int tinhGiaiThua(int nInput) {
	if (nInput<=1)
	{
		return 1;
	}
	return nInput * tinhGiaiThua(nInput-1);
}
int tinhGiaiThuaFOR(int nInput ) {
	int nResult(1);
	for (int i = nInput; i > 0; i--)
	{
		nResult =nResult*i;
	}
	return nResult;
}
bool laSoTuMan(int nInput) {
	int numOfDigits = demChuSoNguyenDuong(nInput);
	int nREM, nSum(0),nTemp=nInput;

	while (nTemp!=0)
	{
		//tach so cuoi cua so nguyen (Chia lay du)
		nREM = nTemp % 10;
		//Tong cac chu so mu luu vao bien SUM
		nSum = nSum + (int)pow(nREM,numOfDigits);
		//loai bo so cuoi(chia lay phan nguyen)
		nTemp = nTemp / 10;

	}
	return (nSum==nInput);
}
bool laNamNhuan(int nInput) {
	if (nInput%400==0||(nInput%4==0&&nInput%100!=0))
	{
		return true;
	}
	return false;
}
void inNamNhuanGiuaCacMocThoiGian(int ystr,int yend) {
	for (int i = ystr; i <= yend; i++)
	{
		if (laNamNhuan(i))
		{
			cout << "Nam :" << i << "\t";
		}
	}
 }
int numDaysOfMonth(int month, int year) {
	int numOfDays;
	switch (month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			 	numOfDays = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			 numOfDays = 30;
			break;
		case 2:
			if (laNamNhuan(year))
			{
				 numOfDays = 29;
			}
			else
			{
				 numOfDays = 28;
			}
		break;
	
		
	}
	return numOfDays;	
}
bool laNgayHopLe(int day, int month, int year) {
	if (year<0)
	{
		return false;
	}

	if (month<1|| month>12)
	{
		return false;
	}
	
	if (day<1||day>numDaysOfMonth(month,year))
	{
		return false;
	}

	return true;
}
void findYesterday(int& day,int& month,int& year) {
	day--;
	if (day==0)
	{
		month--;
		if (month==0)
		{
			month = 12;
			year--;
		}
		day = numDaysOfMonth(month,year);
	}
}
void findTomorrow(int& day, int& month, int& year) {
	day++;
	if (day > numDaysOfMonth(month,year))
	{
		day = 1;
		month++;
		if (month>12)
		{
			month = 1;
			year++;
		}
		
	}
}
int countDaysOfYear(int day, int month,int year){
	int countDay = day;
	for (int i = 1; i < month; i++)
	{
		countDay += numDaysOfMonth(i,year);
	}
	return countDay;
}
bool checkNumberINTEGER(int nInput) {
	if (nInput<2)
	{
		return false;
	}
	else
	{
		for (int i = 2; i < nInput/2; i++)
		{
			if (nInput%i == 0)
			{
				return false;
			}
		}
		return true;
	}	
}
int UCLN(int a,int b) {
	while (a!=b)
	{
		if (a>b)
		{
			a = a- b;
		}
		else
			b = b- a;
	}
	return a;
}
int BCNN(int a,int b) {
	int result = UCLN(a, b);
	return a * b / result;
}
int demUocSoCuaSoNguyenDuong(int nInput) {
	int count(0);
	for (int i = 1; i <= nInput; i++)
	{
		if (nInput%i==0)
		{
			count++;
		}
	}


	return count;
}
bool kiemTraSoHoanThien(int nInput) {
	int nSum(0);
	for (int i = 1; i < nInput -1 ; i++)
	{
		if (nInput%i==0)
		{
			nSum += i;
		}
	}


	return (nSum==nInput);
}
int tinhTichCacSoLe(int nInput) {
	int result(1);
	for (int i = 0; i <= nInput; i++)
	{
			result =result*(2*i+1);		
	}
	return result;
}
long tinhTongCacSoLevaHieuCacSoChan(int nInput) {
	long result(0);
	long tmp(1);
	for (long i = 1; i <= nInput; i++)
	{
		result = result + (tmp * i);
		tmp = tmp* -1;
	}

	return result;
}
int tinhTongTich(int nInput) {
	int result(0);
	int tmp(1);
	for (int i = 1; i <= nInput; i++)
	{
		tmp *= i;
		result = result + (tmp);
		
	}
	return result;
}