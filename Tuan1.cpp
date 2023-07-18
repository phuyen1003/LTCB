#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double PI = 3.14;
int main() {
    int choice;
    double dienTich, theTich;
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Bai 1" << endl;
        cout << "2. Bai 2" << endl;
        cout << "3. Bai 3" << endl;
        cout << "4. Bai 4 " << endl;
        cout << "5. Bai 5" << endl;
        cout << "6. Bai 6" << endl;
        cout << "7. Bai 7" << endl;
        cout << "8. Bai 8" << endl;
         cout << "9. Bai 9" << endl;
          cout << "10. Bai 10" << endl;
          cout << "11. Bai 11" << endl;
          cout << "12. Bai 12" << endl;
          cout << "13. Bai 13" << endl;
          cout << "14. Bai 14" << endl;
          cout << "15. Bai 15" << endl;
        cout << "16. Thoat" << endl;
        cout << "Nhap lua chon (1-6): ";
        cin >> choice;

        switch (choice) {
            case 1:{
                cout << "Bai 1" << endl;
                cout << "**********************" << endl;
                cout << "* THAO CHUONG BANG   *" << endl;
                cout << "*  NGON NGU C        *" << endl;
                cout << "**********************" << endl;

                break;
            case 2:
                cout << "BAI 2" << endl;
                int namsinh, tuoi ;
                cout << "Nhap nam sinh cua ban: ";
                cin >> namsinh;
                tuoi = 2023 - namsinh;
                cout << "Ban sinh nam " << namsinh << " vay ban " << tuoi <<" tuoi" << endl;
         
                break;
            case 3: {
                while (true) {
                    cout << "Bai 3" << endl;
                    cout << "Chon mot lua chon sau:" << endl;
                    cout << "a. Lua chon A" << endl;
                    cout << "b. Lua chon B" << endl;
                    cout << "0. Quay lai menu chinh" << endl;
                    cout << "Nhap lua chon: ";
                    char choice_3;
                    cin >> choice_3;

                    switch (choice_3) {
                        case 'a':
{
    char inputChar;
    cout << "Nhap vao mot ky tu: ";
    cin >> inputChar;

    // Lưu giá trị của ký tự vào biến kiểu int để lấy mã ASCII
    int asciiValue = inputChar;

    cout << "Ma ASCII cua ky tu '" << inputChar << "' la: " << asciiValue << endl;

    return 0;
    break;
}
                       case 'b': {
    int number;
    cout << "Nhap vao mot so nguyen trong khoang tu 1 den 255: ";
    cin >> number;

    if (number >= 1 && number <= 255) {
        // Ép kiểu số nguyên thành ký tự (mã ASCII)
        char asciiChar = char(number);

        cout << "Ky tu tuong ung voi ma ASCII " << number << " la: " << asciiChar << endl;
    } else {
        cout << "So nhap vao khong hop le. Vui long nhap mot so nguyen trong khoang tu 1 den 255." << endl;
    }

    return 0;
    break;
}
                        case '0':
                          
                            break;
                        default:
                            cout << "Lua chon khong hop le. Vui long chon lai." << endl;
                    }

                    if (choice_3 == '0') 
                        break;
                }
                break;
            }
            case 4: {
                cout << "Bai 4" << endl;
                double bankinh;
                cout << "Nhap ban kinh hinh tron ";
                cin >> bankinh;
                double chuvi = 2 * PI * bankinh;
                double dientich = PI * bankinh * bankinh;
                cout << "Chu vi hinh tron : " << chuvi << endl;
                cout << "Dien tich hinh tron: " << dientich << endl;
                break;
            }
            case 5:
                cout << "Bai 5" << endl;
                int so1, so2;
                cout << "Nhap so thu nhat : ";
                cin >> so1;
                cout << "Nhap so thu hai: ";
                cin >> so2;

                int min, max;
                if (so1 < so2) {
                    min = so1;
                    max = so2;
                } else {
                    min = so2;
                    max = so1;
                }
                cout << "min: " << min << endl;
                cout << "max: " << max << endl;
                break;
            
   case 6:
                cout << "Bai 6" << endl;
                double banKinh;
                cout << "Nhap vao ban kinh hinh cau: ";
                cin >> banKinh;

                dienTich = 4 * PI * pow(banKinh, 2);
                cout << "Dien tich cua hinh cau la: " << dienTich << endl;
                theTich = (4.0 / 3.0) * PI * pow(banKinh, 3);
                cout << "The tich cua hinh cau la: " << theTich << endl;
                break;
                 case 7: {
                double hsg;
                double khoangcach;
                while (true) {
                    cout << "Bai 7" << endl;
                    cout << "Chon mot lua chon sau:" << endl;
                    cout << "a. Lua chon A" << endl;
                    cout << "b. Lua chon B" << endl;
                    cout << "0. Quay lai menu chinh" << endl;
                    cout << "Nhap lua chon: ";
                    char choice_7;
                    cin >> choice_7;

                    switch (choice_7) {
                        case 'a':
                            cout << "Ban da chon lua chon B trong case 7" << endl;
                            double x1, y1, x2, y2;
                            cout << "Nhap toa do diem thu nhat (x1, y1): ";
                            cin >> x1 >> y1;
                            cout << "Nhap toa do diem thu hai (x2, y2): ";
                            cin >> x2 >> y2;

                            hsg = (y2 - y1) / (x2 - x1);
                            cout << "He so goc cua duong thang di qua hai diem la: " << hsg << endl;
                            break;

                        case 'b': {
                             cout << "Ban da chon lua chon B trong case 7" << endl;
                            double x1, y1, x2, y2;
                            cout << "Nhap toa do diem thu nhat (x1, y1): ";
                            cin >> x1 >> y1;
                            cout << "Nhap toa do diem thu hai (x2, y2): ";
                            cin >> x2 >> y2;

                            hsg = (y2 - y1) / (x2 - x1);
                            khoangcach= sqrt(hsg);

                            cout << "Khoang cach giua hai diem: " << khoangcach << endl;
                            break;
                        }

                        case '0':
                            break;

                        default:
                            cout << "Lua chon khong hop le. Vui long chon lai." << endl;
                    }

                    if (choice_7 == '0') 
                        break;
                }
                break;
            }
 case 8:  {
               
               while (true) {
        cout << "Bai 8" << endl;
        cout << "Chon mot lua chon sau:" << endl;
        cout << "1" << endl;
        cout << "2" << endl;
        cout << "0. Quay lai menu chinh" << endl;
        cout << "Nhap lua chon: ";
        char choice_8;
        cin >> choice_8;

        switch (choice_8) {
            case '1': {
                while (true) {
                   
                    cout << "Cac lua chon con trong case 1:" << endl;
                    cout << "a" << endl;
                    cout << "b" << endl;
                    cout << "0. Quay lai menu chinh" << endl;
                    cout << "Nhap lua chon: ";
                    char choice_1;
                    cin >> choice_1;

                    switch (choice_1) {
                        case 'a':
                           {
    char inputChar;
    cout << "Nhap vao mot ky tu: ";
    cin >> inputChar;

    
    int asciiValue = static_cast<int>(inputChar);

    cout << "Ma ASCII cua ky tu '" << inputChar << "' la: " << asciiValue << endl;

    return 0;
    break;
}

                        case 'b':{
    char inputChar;
    cout << "Nhap vao mot ky tu: ";
    cin >> inputChar;

    // Tăng giá trị của ký tự lên 1 để lấy ký tự kế tiếp trong bảng mã ASCII
    char nextChar = inputChar + 1;

    cout << "Ky tu ke tiep trong bang ma ASCII la: " << nextChar << endl;

    return 0;
    break;
}

                        case '0':
                            break;

                        default:
                            cout << "Lua chon khong hop le. Vui long chon lai." << endl;
                    }

                    if (choice_1 == '0')
                        break;
                }
                break;
            }

            case '2': {
                while (true) {
                    cout << "2" << endl;
                    cout << "Cac lua chon con trong case 2:" << endl;
                    cout << "a. " << endl;
                    cout << "b. " << endl;
                    cout << "0. Quay lai menu chinh" << endl;
                    cout << "Nhap lua chon: ";
                    char choice_2;
                    cin >> choice_2;

                    switch (choice_2) {
                        case 'a': {
    int number;
    cout << "Nhap vao mot so tu nhien trong khoang tu 0 den 255: ";
    cin >> number;

    if (number >= 0 && number <= 255) {
       
        char asciiChar = static_cast<char>(number);

        cout << "Ky tu tuong ung voi ma ASCII " << number << " la: " << asciiChar << endl;
    } else {
        cout << "So nhap vao khong hop le. Vui long nhap mot so tu nhien trong khoang tu 0 den 255." << endl;
    }

    return 0;
    break;
}

                     case 'b':{
    int number;
    cout << "Nhap vao mot so tu nhien trong khoang tu 0 den 255: ";
    cin >> number;

    if (number >= 0 && number <= 255) {
        // Tăng giá trị của số lên 1 để lấy ký tự kế tiếp trong bảng mã ASCII
        number++;

        // Ép kiểu số nguyên sang ký tự (mã ASCII)
        char asciiChar = static_cast<char>(number);

        cout << "Ky tu ke tiep trong bang ma ASCII la: " << asciiChar << endl;
    } else {
        cout << "So nhap vao khong hop le. Vui long nhap mot so tu nhien trong khoang tu 0 den 255." << endl;
    }

    return 0;
    break;
}
                           

                        case '0':
                            break;

                        default:
                            cout << "Lua chon khong hop le. Vui long chon lai." << endl;
                    }

                    if (choice_2 == '0')
                        break;
                }
                break;
            }

            case '0':
                break;

            default:
                cout << "Lua chon khong hop le. Vui long chon lai." << endl;
        }

        if (choice_8 == '0')
            break;
    }

    return 0;

}
case 9:
{
                cout << "Chọn yêu cầu 4." << endl;
                double R1, R2, R3, R;
                cout << "Nhập giá trị điển trở R1: ";
                cin >> R1;
                cout << "Nhập giá trị điển trở R2: ";
                cin >> R2;
                cout << "Nhập giá trị điển trở R3: ";
                cin >> R3;
                R = (R1*R2*R3)/(R1+R2+R3);
                cout << "Điện trở tương đương: " << R;
                break;
            }
case 10:{
                cout << "Chọn yêu cầu 5." << endl;
                int n;
                cout << "Nhập số tự nhiên n";
                cin >> n;
                double S1 = 0;
                for (int i = 1; i <= n; i++) {
                    S1 += 1.0 / i;
                }

              
                int S2 = 0;
                for (int i = 1; i <= n; i++) {
                    S2 += i;
                }

                int S3 = 0;
                for (int i = 1; i <= n; i += 2) {
                    S3 += i;
                }

                int S4 = 0;
                for (int i = 2; i <= n; i += 2) {
                    S4 += i;
                }

                
                int S5 = 0;
                for (int i = 7; i <= n; i += 7) {
                    S5 += i;
                }

                
                int S6 = 0;
                for (int i = 1; i <= n; i++) {
                    if (i % 7 != 0) {
                        S6 += i;
                    }
                }

                cout << "S1 = " << S1 << endl;
                cout << "S2 = " << S2 << endl;
                cout << "S3 = " << S3 << endl;
                cout << "S4 = " << S4 << endl;
                cout << "S5 = " << S5 << endl;
                cout << "S6 = " << S6 << endl;
                break;
            }
case 11: 
{
    double a;
    cout << "Nhap vao canh a cua tam giac deu: ";
    cin >> a;
    double dienTich = (a * a * sqrt(3)) / 4;
    double chuVi = a * 3;
    cout << "Dien tich tam giac deu: " << dienTich << endl;
    cout << "Chu vi tam giac deu: " << chuVi << endl;

    return 0;
}
break;
case 12:
 {
    int gio, phut, giay;
    cout << "Nhap gio: ";
    cin >> gio;

    cout << "Nhap phut: ";
    cin >> phut;

    cout << "Nhap giay: ";
    cin >> giay;
    int tongGiay = gio * 3600 + phut * 60 + giay;
    cout << "Tong so giay: " << tongGiay << " giay" << endl;

    return 0;


 break;
 }
case 13:
 {
    int tongthoigian, gio, phut, giay;

    cout << "Nhap vao thoi gian (tinh bang giay): ";
    cin >> tongthoigian;

    gio = tongthoigian / 3600; 
    tongthoigian %= 3600;

    phut = tongthoigian / 60; 
    giay = tongthoigian % 60;


    cout << "Thoi gian la: " << gio << " gio, " << phut << " phut, " << giay << " giay." << endl;

    return 0;
    break;
}
case 14:
{
    int tongthoigian;
    
    cout << "Nhap vao tong so giay: ";
    cin >> tongthoigian;

  
    int gio= tongthoigian / 3600;
    int phut = (tongthoigian % 3600) / 60;
    int giay = tongthoigian% 60;
    cout << "Ket qua: ";
    if (gio < 10) cout << "0"; 
    cout << gio << ":";
    if (phut < 10) cout << "0"; 
    cout << phut << ":";
    if (giay< 10) cout << "0"; 
    cout << giay << endl;

    return 0;
    break;
}
case 15:
 {
    int x;
    
    cout << "Nhap vao mot so nguyen duong co 3 chu so: ";
    cin >> x;

    if (x >= 100 && x <= 999) {
        int reversedNumber = (x % 10) * 100 + ((x / 10) % 10) * 10 + x / 100;
        cout << "So dao nguoc: " << reversedNumber << endl;
    } else {
        cout << "So nhap vao khong co 3 chu so!" << endl;
    }
    return 0;
    break;
}


 case 16:
                cout << "Tạm biệt!" << endl;
                return 0; 

            default:
                cout << "Lựa chọn không hợp lệ. Vui lòng chọn lại." << endl;
        }
    }

    return 0;
}
