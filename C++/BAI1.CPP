#include<iostream>

using namespace std;

class SinhVien
    {
	private:
		char HoTen[30];
		char MSSV[8];
		float Dtb;
        int toan;
        int ly;
        int hoa;
	public:
		friend istream& operator>>(SinhVien &sv,istream &is)
        {
            cout<<"Nhap ho ten : ";  
		    is>>sv.HoTen;
		    cout<<"Ma so sv : ";
		    is>>sv.MSSV;
		    cout<<"Diem: ";
		    is>>sv.toan;
            is >> sv.hoa;
            is >> sv.toan;
        }
        

		friend ostream& operator <<(SinhVien &sv,ostream &os)
        {
            os<<sv.HoTen<<"\n"<<sv.MSSV<<"\n"<<sv.hoa<<"\n"<<sv.ly<<endl;
        }

        friend ostream& operator<<(SinhVien &sv,ostream &os){
            os<<sv.toan<<"+j"<<sv.hoa<<"+j"<<sv.ly<<endl;
            return os;
        }
    };

int main()
    {
        SinhVien a;
        a>>cin;
        a<<cout;
        return 0;
    }

