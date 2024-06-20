//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//typedef struct {
//    string name;
//    int price;
//    int number;
//}Basket;
//
//class Clothes {
//public:
//    string name;
//    int price;
//    string brand;
//    int number;
//
//public:
//    Clothes()
//    {
//
//    }
//    Clothes(int number, string name, int price, string brand) : name(name), price(price), brand(brand), number(number)
//    {
//
//    }
//    
//};
//
//
//class Outer : public Clothes {
//private:
//    string outer_Type;
//    string outer_Down;
//    string outer_Length;
//    string outer_Size;
//
//public:
//    Outer()
//    {
//
//    }
//    Outer(int number, string name, int price, string brand, string outer_Type, string outer_Down, string outer_Length, string outer_Size) : Clothes(number, name, price, brand), outer_Type(outer_Type), outer_Down(outer_Down), outer_Length(outer_Length), outer_Size(outer_Size)
//    {
//
//    }
//    void print_Outer() const {
//        cout << "-------------------------------------------------------------" << endl << endl;
//        cout << "ǰ �� : " << number << endl;
//        cout << "�� �� : " << name << endl;
//        cout << "�� �� : " << price << "��" << endl;
//        cout << "�귣�� : " << brand << endl;
//        cout << "���� ���� : " << outer_Type << endl;
//        cout << "�ܺ� ������ : " << outer_Size << endl;
//        cout << "���� ���� : " << outer_Length << endl;
//        cout << endl;
//    }
//
//
//};
//
//
//class Top : public Clothes {
//private:
//    string top_Type;
//    string top_Length;
//    string top_Size;
//public:
//    Top()
//    {
//
//    }
//    Top(int number, string name, int price, string brand, string top_Type, string top_Length, string top_Size) : Clothes(number, name, price, brand), top_Type(top_Type), top_Length(top_Length), top_Size(top_Size)
//    {
//
//    }
//
//    void print_Top() const {
//        cout << "-------------------------------------------------------------" << endl << endl;
//        cout << "ǰ �� : " << number << endl;
//        cout << "�� �� : " << name << endl;
//        cout << "�� �� : " << price << "��" << endl;
//        cout << "�귣�� : " << brand << endl;
//        cout << "���� ���� : " << top_Type << endl;
//        cout << "���� ������ : " << top_Size << endl;
//        cout << "���� ���� : " << top_Length << endl;
//        cout << endl;
//    }
//};
//
//
//class Pants :public Clothes
//{
//public:
//    string pants_Shape;
//    string pants_Size; //M // L // XL
//    string pants_Length; //����
//public:
//    Pants()
//    {
//
//    }
//    Pants(int number, string name, int price, string brand, string pants_Shape, string pants_Size, string pants_Length) : Clothes(number, name, price, brand), pants_Shape(pants_Shape), pants_Size(pants_Size), pants_Length(pants_Length)
//    {
//
//    }
//    void print_Pants() const {                
//        cout << "-------------------------------------------------------------" << endl << endl;
//        cout << "ǰ �� : " << number << endl;
//        cout << "�� �� : " << name << endl;
//        cout << "�� �� : " << price << "��" << endl;
//        cout << "�귣�� : " << brand << endl;
//        cout << "���� ���� : " << pants_Shape << endl;
//        cout << "���� ������ : " << pants_Size << endl;
//        cout << "���� ���� : " << pants_Length << endl;
//        cout << endl;
//    }
//};
//
//class Shoes : public Clothes
//{
//public:
//    string shoes_Type;
//    int shoes_Size;
//    int shoes_Heel;
//
//public:
//    Shoes() {}
//    Shoes(int number, string name, int price, string brand, string shoes_Type, int shoes_Size, int shoes_Heel) :Clothes(number, name, price, brand), shoes_Type(shoes_Type), shoes_Size(shoes_Size), shoes_Heel(shoes_Heel)
//    {
//
//    }
//
//    void print_Shoes() const {
//        cout << "-------------------------------------------------------------" << endl << endl;
//        cout << "ǰ �� : " << number << endl;
//        cout << "�� �� : " << name << endl;
//        cout << "�� �� : " << price << "��" << endl;
//        cout << "�귣�� : " << brand << endl;
//        cout << "�Ź� ���� : " << shoes_Type << endl;
//        cout << "�Ź� ������ : " << shoes_Size << endl;
//        cout << "�� ���� : " << shoes_Heel << endl;
//        cout << endl;
//    }
//
//};
//
//vector <Outer> vo;
//vector <Top> vt;
//vector <Pants> vp;
//vector <Shoes> vs;
//vector <Basket> vb;
//
//
//
//void Make_Vector()
//{
//    Outer o1(1, "������ ����Ʈ", 240000, "COOR", "����Ʈ", "NONE", "87.5", "M");
//    Outer o2(2, "�ĵ� ���� ��Ʈ", 70000, "CAPITAL RADIO TUNES", "���� ��Ʈ", "NONE", "109", "L");
//    Outer o3(3, "���� �º� ����", 230000, "THE NORTH FACE", "���е�", "���������� 100%", "70", "XL");
//    Outer o4(4, "���� ��Ƽġ ��������", 50000, "TRILLION", "Ʈ��Ŀ ��Ŷ", "NONE", "74.5", "XXL");
//    Outer o5(5, "��Ƽ�� ������ ����", 180000, "PANICALE", "������", "NONE", "69", "XL");
//    ///////////����//////////
//    vo.push_back(o1);
//    vo.push_back(o2);
//    vo.push_back(o3);
//    vo.push_back(o4);
//    vo.push_back(o5);
//
//    Top t1(6, "�ö�� �޸���", 70000, "�޸��� �޸�ũ��", "������", "63", "Free");
//    Top t2(7, "�츮Ƽ�� �� ���̺� ��Ʈ", 60000, "����", "��Ʈ", "52", "S");
//    Top t3(8, "�Ǳ׸�Ʈ �� �ĵ�", 70000, "�ҹ���Ʈ", "�ĵ�Ƽ����", "69", "M");
//    Top t4(9, "�ΰ� Ƽ����", 50000, "������׹���", "Ƽ����", "72", "L");
//    Top t5(10, "�������� ����", 70000, "���� ���� �η�", "ī�� Ƽ����", "84", "XL");
//    ///////////����//////////
//    vt.push_back(t1);
//    vt.push_back(t2);
//    vt.push_back(t3);
//    vt.push_back(t4);
//    vt.push_back(t5);
//
//    Pants p1(11, "���� Ʈ���̴� ����", 30000, "�귻��", "���̵� Ʈ���̴� ����", "L", "106");
//    Pants p2(12, "���� ���� ���� ����", 20000, "���Ż�", "���� ����", "XL", "56"); //Ʈ����
//    Pants p3(13, "���� ���̵� ��Ƽ�� ������ ", 10000, "���Ż�", "���̵� ����", "M", "103");
//    Pants p4(14, "���� ���� ����", 50000, "Ŀ����", "���� ����", "M", "102");
//    Pants p5(15, "���뽺 ����", 100000, "������", "���뽺 ����", "S", "95");
//    ///////////����//////////
//    vp.push_back(p1);
//    vp.push_back(p2);
//    vp.push_back(p3);
//    vp.push_back(p4);
//    vp.push_back(p5);
//
//    Shoes s1(16, "�Ƶ�ٽ� ���۽�Ÿ 82 Black White", 104000, "�Ƶ�ٽ�", "�ȭ", 290, 3);
//    Shoes s2(17, "�Ƶ�ٽ� �Ƶ��ƽ Olive Strata Wonder Beige", 100000, "�Ƶ�ٽ�", "�ȭ", 290, 3);
//    Shoes s3(18, "�ٿ�� ���� R21M041 (BX ��)", 137000, "�θ�ƽ����", "����", 270, 4);
//    Shoes s4(19, "�� ī�� �����̵� ������ (����Ʈ) W - ü���� / 5125CHE", 178000, "���", "������", 240, 1);
//    Shoes s5(20, "���� 1 Retro High OG University Blue", 330000, "����Ű", "��������", 270, 1);
//    ///////////�Ź�//////////
//    vs.push_back(s1);
//    vs.push_back(s2);
//    vs.push_back(s3);
//    vs.push_back(s4);
//    vs.push_back(s5);
//
//
//}
//int total = 0;
//
//void Buy()
//{
//    char c = ' ';
//    int num = 50;
//
//    cout << "��ǰ�� ��ٱ��Ͽ� �����ðڽ��ϱ�? (Y/N) : ";
//    cin >> c;
//    switch (c)
//    {
//    case 'N':
//    case'n':
//        return;
//    case 'Y':
//    case 'y':
//    {
//        while (num != 0)
//        {
//            cout << "��ǰ ������ �����Ͻ÷��� '0'�� ��������" << endl;
//            cout << "��ǰ ���� : ";
//            cin >> num;
//            if (num < 0 || num>20)
//            {
//                cout << "���� ��ǰ ��ȣ�Դϴ�." << endl << endl;
//                continue;
//            }
//            for (int i = 0; i < 5; i++) {
//                if (vo.at(i).number == num) {
//                    vo.at(i).print_Outer();   // ��ǰ���� ���
//
//                    Basket b1;
//                    b1.name = vo.at(i).name;   // ��ٱ��Ͽ� �̸� �ֱ�
//                    b1.price = vo.at(i).price;   // ��ٱ��Ͽ� ���� �ֱ�
//                    total += vo.at(i).price;
//                    b1.number = vo.at(i).number;
//                    vb.push_back(b1);
//
//                    //cout << vb.at(0).name << endl << endl;
//                }
//
//            }
//            for (int i = 0; i < 5; i++) {
//                if (vt.at(i).number == num) {
//                    vt.at(i).print_Top();
//
//                    Basket b2;
//                    b2.name = vt.at(i).name;   // ��ٱ��Ͽ� �̸� �ֱ�  //vt�� �����ؾ��� �Ƹ�?
//                    b2.price = vt.at(i).price;   // ��ٱ��Ͽ� ���� �ֱ�
//                    total += vt.at(i).price;
//
//                    b2.number = vt.at(i).number;
//
//                    vb.push_back(b2);
//                }
//
//            }
//            for (int i = 0; i < 5; i++) {
//                if (vp.at(i).number == num) {
//                    vp.at(i).print_Pants();
//
//                    Basket b3;
//                    b3.name = vp.at(i).name;   // ��ٱ��Ͽ� �̸� �ֱ� //vp
//                    b3.price = vp.at(i).price;   // ��ٱ��Ͽ� ���� �ֱ�
//                    total += vp.at(i).price;
//
//                    b3.number = vp.at(i).number;
//
//
//                    vb.push_back(b3);
//                }
//
//            }
//            for (int i = 0; i < 5; i++) {
//                if (vs.at(i).number == num) {
//                    vs.at(i).print_Shoes();
//
//                    Basket b4;
//                    b4.name = vs.at(i).name;   // ��ٱ��Ͽ� �̸� �ֱ�  //vs
//                    b4.price = vs.at(i).price;   // ��ٱ��Ͽ� ���� �ֱ�
//                    total += vs.at(i).price;
//
//                    b4.number = vs.at(i).number;
//
//
//                    vb.push_back(b4);
//                }
//
//            }
//        }
//    }
//    break;
//    default:
//        cout << "�� �� �Է��ϼ̽��ϴ�. " << endl << endl;
//        break;
//    }
//}
//
//void Show_All(void) {        // ��ü ���� ǥ��
//    for (int i = 0; i < 5; i++)
//    {
//        vo.at(i).print_Outer();
//    }
//
//    for (int i = 0; i < 5; i++)
//    {
//        vt.at(i).print_Top();
//    }
//
//    for (int i = 0; i < 5; i++)
//    {
//        vp.at(i).print_Pants();
//    }
//
//    for (int i = 0; i < 5; i++)
//    {
//        vs.at(i).print_Shoes();
//    }
//    Buy();
//}
//
//void Show_Kategorie()
//{
//
//    int select;
//
//    cout << "1. ����" << endl;
//    cout << "2. ����" << endl;
//    cout << "3. ����" << endl;
//    cout << "4. �Ź�" << endl;
//    cout << "ī�װ��� �������ּ��� : ";
//    cin >> select;
//    system("cls");
//
//    switch (select)
//    {
//    case 1:
//        for (int i = 0; i < 5; i++)
//        {
//            vo.at(i).print_Outer();
//        }      break;
//    case 2:
//        for (int i = 0; i < 5; i++)
//        {
//            vt.at(i).print_Top();
//        }
//        break;
//    case 3:
//        for (int i = 0; i < 5; i++)
//        {
//            vp.at(i).print_Pants();
//        }
//        break;
//    case 4:
//        for (int i = 0; i < 5; i++)
//        {
//            vs.at(i).print_Shoes();
//        }
//        break;
//    default:
//        cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
//
//    }
//    Buy();
//
//
//}
//
//void Find_Name() //�̸��� �˻��ϴ� �ڵ�
//{
//    system("cls");
//    cout << "�̸� �Է� : ";
//    string c;
//    cin >> c;
//
//    bool found = false; // �˻� ����� ã�Ҵ��� ���θ� �����ϴ� ����
//
//    for (int i = 0; i < 5; i++) {
//        if (vo.at(i).name.find(c) != string::npos) {
//            vo.at(i).print_Outer();
//            found = true;
//        }
//        else if (vt.at(i).name.find(c) != string::npos) {
//            vt.at(i).print_Top();
//            found = true;
//        }
//        else if (vp.at(i).name.find(c) != string::npos) {
//            vp.at(i).print_Pants();
//            found = true;
//        }
//        else if (vs.at(i).name.find(c) != string::npos) {
//            vs.at(i).print_Shoes();
//            found = true;
//        }
//    }
//
//    if (!found) { // �˻� ����� ���� ��� �޽��� ���
//        cout << "���� ��ǰ�Դϴ�." << endl << endl;
//    }
//}
//
//void Check_Price()
//{
//    int i = 0;
//    vector <Basket>::iterator itr_b;
//    cout << "---------------------------��ٱ���---------------------------" << endl << endl;
//    for (itr_b = vb.begin(); itr_b != vb.end(); itr_b++)
//    {
//
//        cout << "��ǰ�� : " << vb.at(i).name;
//        cout << ", ���� : " << vb.at(i).price << endl << endl;
//        /*total += vb.at(i).price;*/
//        i++;
//    }
//    cout << "�� �� : " << total << "��" << endl << endl;
//    cout << "--------------------------------------------------------------" << endl << endl;
//}
//
//void Payment()
//{
//    int pay;
//
//    while (true)
//    {
//        if (total == 0)
//        {
//            cout << "������ ��ǰ�� �����ϴ�" << endl << endl;
//            break;
//        }
//
//        cout << "���� �ݾ�: " << total << "��" << endl;
//        cout << "�󸶸� ���ðڽ��ϱ�? ";
//        cin >> pay;
//
//        if (pay >= total)
//        {
//            cout << "�Ž�����: " << pay - total << "�� �Դϴ�." << endl << endl;
//            total = 0;
//            cout << "������ �Ϸ�Ǿ����ϴ�." << endl << endl;
//            cout << "--------------------------------------------" << endl << endl;
//            vb.clear();
//            break;
//        }
//
//        else if (pay < total)
//        {
//            total -= pay;
//            cout << total << "���� �����մϴ�." << endl << endl;
//            cout << "--------------------------------------------" << endl << endl;
//        }
//    }
//}
//
//void Menu()
//{
//    while (1)
//    {
//        system("cls");
//
//        cout << "1. ��ü ��ǰ ����" << endl;
//        cout << "2. ī�װ��� ����" << endl;
//        cout << "3. �̸� �˻� �ϱ�" << endl;
//        cout << "4. ��ٱ��� Ȯ���ϱ� " << endl;
//        cout << "5. �����ϱ� " << endl;
//        cout << "�޴��� ����ּ��� : ";
//        int select;
//        cin >> select;
//
//        switch (select)
//        {
//        case 1:
//            system("cls");
//            Show_All();
//            system("pause");
//
//            break;
//
//        case 2:
//            system("cls");
//            Show_Kategorie();
//            system("pause");
//
//            break;
//
//        case 3:
//            system("cls");
//            Find_Name();
//            system("pause");
//            break;
//
//        case 4://��ٱ��� Ȯ���ϱ�
//            system("cls");
//            Check_Price();
//            system("pause");
//
//            break;
//
//        case 5:
//            system("cls");
//            Payment();
//            system("pause");
//            break;
//
//
//        default:
//            cout << "���� �޴��Դϴ�." << endl << endl;
//        }
//    }
//
//}
//
//
//
//int main(void)
//{
//
//    Make_Vector();
//    Menu();
//    return 0;
//}