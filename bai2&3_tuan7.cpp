#include <iostream>
using namespace std;
class CongDan
{
	protected:
		string ho_ten;
		string ngay_sinh;
		string gioi_tinh;
	public:
	    void nhap()
		{
		   cout<<"\nNhap vao ho ten: ";
		   fflush(stdin);
		   getline(cin,ho_ten);
		   cout<<"\nNhap vao ngay sinh: ";
		   fflush(stdin);
		   getline(cin,ngay_sinh);
		   cout<<"\nNhap vao gioi tinh: ";
		   fflush(stdin);
		   getline(cin,gioi_tinh);
		}
	    void xuat()
		{
		   cout<<"\nHo ten: "<<ho_ten;
		   cout<<"\nNgay sinh: "<<ngay_sinh;
		   cout<<"\nGioi tinh: "<<gioi_tinh;
		}
};	
class Sinh_Vien : public CongDan
{
	private:
		string truong_dai_hoc;
		string Khoa;
	public:
		void Nhap()
		{
			CongDan::nhap();
			cout<<"\nNhap vao truong Dai Hoc: ";
			fflush(stdin);
			getline(cin,truong_dai_hoc);
			cout<<"\nNhap vao khoa cua sinh vien: " ;
			fflush(stdin);
			getline(cin,Khoa);
		}
		void Xuat()
		{
			CongDan::xuat();
			cout<<"\nSinh vien cua Truong "<<truong_dai_hoc;
			cout<<"\nThuoc Khoa "<<Khoa;
		}
};
class Hoc_sinh :public CongDan
{
	private:
		int khoi_hoc;
	public:
		void Nhap()
		{
			CongDan::nhap();
			cout<<"Nhap vao khoi hoc cua hoc sinh: ";
			cin>>khoi_hoc;
		}
		void Xuat()
		{
			CongDan::xuat();
			cout<<"Hoc sinh khoi: "<<khoi_hoc;
		}
};
class Cong_Nhan : public CongDan
{
	public:
		void Nhap() {CongDan::nhap();}
		void Xuat() {CongDan::xuat();}
};
class Ca_si  :public CongDan
{
    private:
    	string ten_dong_nhac_chinh;
    	string nghe_danh;
		int nam_vao_nghe;
	public:
		void Nhap()
		{
			CongDan::nhap();
			cout<<"\nNhap vao ten dong nhac chinh: ";
			fflush(stdin);
			getline(cin,ten_dong_nhac_chinh);
			cout<<"\nNhap vao nghe danh: " ;
			fflush(stdin);
			getline(cin,nghe_danh);
			cout<<"Nhap vao nam vao nghe: ";
			cin>>nam_vao_nghe;
		}
		void Xuat()
		{
			CongDan::xuat();
			cout<<"\nTen dong nhac chinh: "<<ten_dong_nhac_chinh;
			cout<<"\nNghe danh: "<<nghe_danh;
			cout<<"\nNam vao nghe: "<<nam_vao_nghe;
		}
};		
int main()
{
	//CongDan cd;
    Sinh_Vien sv[100];
    Hoc_sinh hs[100];
    Cong_Nhan cn[100];
    Ca_si cs[100];
    int demsv=0,demhs=0,demcn=0,demcs=0;
	int n;
	cout<<"Nhap vao so luong doi tuong cho danh sach: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int type;
		cout<<"Enter the type(0=sinh_vien; 1=hoc_sinh; 2=cong_nhan; 3=ca_si): ";
		cin>>type;
		if(type==0) {sv[demsv].Nhap(); demsv++;}
		if(type==1) {hs[demhs].Nhap(); demhs++;}
		if(type==2) {cn[demcn].Nhap(); demcn++;}
		if(type==3) {cs[demcs].Nhap(); demcs++;}
	}
	cout<<"\n\n\t\t---------------DANH SACH CAC DOI TUONG--------------"<<endl;
	for(int i1=0;i1<demsv;i1++)
	{
		cout<<"Day la doi tuong sinh vien: "<<endl;
		sv[i1].Xuat();
		cout<<endl<<endl;
	}
	for(int i2=0;i2<demhs;i2++)
	{
		cout<<"Day la doi tuong hoc sinh: "<<endl;
		hs[i2].Xuat();
		cout<<endl<<endl;
	}
	for(int i3=0;i3<demcn;i3++)
	{
		cout<<"Day la doi tuong cong nhan: "<<endl;
		cn[i3].Xuat();
		cout<<endl<<endl;
	}
	for(int i4=0;i4<demcs;i4++)
	{
		cout<<"Day la doi tuong ca si: "<<endl;
		cs[i4].Xuat();
		cout<<endl<<endl;
	}
	return 0;
}
