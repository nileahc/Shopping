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
//        cout << "품 번 : " << number << endl;
//        cout << "이 름 : " << name << endl;
//        cout << "가 격 : " << price << "원" << endl;
//        cout << "브랜드 : " << brand << endl;
//        cout << "외투 형태 : " << outer_Type << endl;
//        cout << "외부 사이즈 : " << outer_Size << endl;
//        cout << "총장 길이 : " << outer_Length << endl;
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
//        cout << "품 번 : " << number << endl;
//        cout << "이 름 : " << name << endl;
//        cout << "가 격 : " << price << "원" << endl;
//        cout << "브랜드 : " << brand << endl;
//        cout << "상의 형태 : " << top_Type << endl;
//        cout << "상의 사이즈 : " << top_Size << endl;
//        cout << "총장 길이 : " << top_Length << endl;
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
//    string pants_Length; //총장
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
//        cout << "품 번 : " << number << endl;
//        cout << "이 름 : " << name << endl;
//        cout << "가 격 : " << price << "원" << endl;
//        cout << "브랜드 : " << brand << endl;
//        cout << "하의 형태 : " << pants_Shape << endl;
//        cout << "하의 사이즈 : " << pants_Size << endl;
//        cout << "총장 길이 : " << pants_Length << endl;
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
//        cout << "품 번 : " << number << endl;
//        cout << "이 름 : " << name << endl;
//        cout << "가 격 : " << price << "원" << endl;
//        cout << "브랜드 : " << brand << endl;
//        cout << "신발 형태 : " << shoes_Type << endl;
//        cout << "신발 사이즈 : " << shoes_Size << endl;
//        cout << "굽 길이 : " << shoes_Heel << endl;
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
//    Outer o1(1, "오버핏 피코트", 240000, "COOR", "피코트", "NONE", "87.5", "M");
//    Outer o2(2, "후드 더블 코트", 70000, "CAPITAL RADIO TUNES", "더블 코트", "NONE", "109", "L");
//    Outer o3(3, "눕시 온볼 자켓", 230000, "THE NORTH FACE", "숏패딩", "폴리에스터 100%", "70", "XL");
//    Outer o4(4, "워싱 스티치 데님자켓", 50000, "TRILLION", "트러커 재킷", "NONE", "74.5", "XXL");
//    Outer o5(5, "빈티지 무스탕 점퍼", 180000, "PANICALE", "무스탕", "NONE", "69", "XL");
//    ///////////외투//////////
//    vo.push_back(o1);
//    vo.push_back(o2);
//    vo.push_back(o3);
//    vo.push_back(o4);
//    vo.push_back(o5);
//
//    Top t1(6, "플라워 메르디", 70000, "메르디 메르크디", "맨투맨", "63", "Free");
//    Top t2(7, "헤리티지 댄 케이블 니트", 60000, "예일", "니트", "52", "S");
//    Top t3(8, "피그먼트 컷 후드", 70000, "소버먼트", "후드티셔츠", "69", "M");
//    Top t4(9, "로고 티셔츠", 50000, "디스이즈네버댓", "티셔츠", "72", "L");
//    Top t5(10, "옥스포드 셔츠", 70000, "폴로 랄프 로렌", "카라 티셔츠", "84", "XL");
//    ///////////상의//////////
//    vt.push_back(t1);
//    vt.push_back(t2);
//    vt.push_back(t3);
//    vt.push_back(t4);
//    vt.push_back(t5);
//
//    Pants p1(11, "원턱 트레이닝 팬츠", 30000, "브렌손", "와이드 트레이닝 팬츠", "L", "106");
//    Pants p2(12, "레인 슬럽 데님 쇼츠", 20000, "무신사", "데님 쇼츠", "XL", "56"); //트릴론
//    Pants p3(13, "리얼 와이드 벨티드 슬랙스 ", 10000, "무신사", "와이드 팬츠", "M", "103");
//    Pants p4(14, "스웻 조거 팬츠", 50000, "커버낫", "조거 팬츠", "M", "102");
//    Pants p5(15, "레깅스 팬츠", 100000, "볼란테", "레깅스 팬츠", "S", "95");
//    ///////////하의//////////
//    vp.push_back(p1);
//    vp.push_back(p2);
//    vp.push_back(p3);
//    vp.push_back(p4);
//    vp.push_back(p5);
//
//    Shoes s1(16, "아디다스 슈퍼스타 82 Black White", 104000, "아디다스", "운동화", 290, 3);
//    Shoes s2(17, "아디다스 아디매틱 Olive Strata Wonder Beige", 100000, "아디다스", "운동화", 290, 3);
//    Shoes s3(18, "다우너 로퍼 R21M041 (BX 블랙)", 137000, "로맨틱무브", "구두", 270, 4);
//    Shoes s4(19, "퍼 카라 스웨이드 슬리퍼 (코케트) W - 체스넛 / 5125CHE", 178000, "어그", "슬리퍼", 240, 1);
//    Shoes s5(20, "조던 1 Retro High OG University Blue", 330000, "나이키", "조던하이", 270, 1);
//    ///////////신발//////////
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
//    cout << "상품을 장바구니에 담으시겠습니까? (Y/N) : ";
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
//            cout << "상품 선택을 종료하시려면 '0'을 누르세요" << endl;
//            cout << "상품 선택 : ";
//            cin >> num;
//            if (num < 0 || num>20)
//            {
//                cout << "없는 상품 번호입니다." << endl << endl;
//                continue;
//            }
//            for (int i = 0; i < 5; i++) {
//                if (vo.at(i).number == num) {
//                    vo.at(i).print_Outer();   // 상품정보 출력
//
//                    Basket b1;
//                    b1.name = vo.at(i).name;   // 장바구니에 이름 넣기
//                    b1.price = vo.at(i).price;   // 장바구니에 가격 넣기
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
//                    b2.name = vt.at(i).name;   // 장바구니에 이름 넣기  //vt로 수정해야함 아마?
//                    b2.price = vt.at(i).price;   // 장바구니에 가격 넣기
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
//                    b3.name = vp.at(i).name;   // 장바구니에 이름 넣기 //vp
//                    b3.price = vp.at(i).price;   // 장바구니에 가격 넣기
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
//                    b4.name = vs.at(i).name;   // 장바구니에 이름 넣기  //vs
//                    b4.price = vs.at(i).price;   // 장바구니에 가격 넣기
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
//        cout << "잘 못 입력하셨습니다. " << endl << endl;
//        break;
//    }
//}
//
//void Show_All(void) {        // 전체 정보 표시
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
//    cout << "1. 외투" << endl;
//    cout << "2. 상의" << endl;
//    cout << "3. 바지" << endl;
//    cout << "4. 신발" << endl;
//    cout << "카테고리를 선택해주세요 : ";
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
//        cout << "잘못 입력하셨습니다." << endl;
//
//    }
//    Buy();
//
//
//}
//
//void Find_Name() //이름을 검색하는 코드
//{
//    system("cls");
//    cout << "이름 입력 : ";
//    string c;
//    cin >> c;
//
//    bool found = false; // 검색 결과를 찾았는지 여부를 추적하는 변수
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
//    if (!found) { // 검색 결과가 없을 경우 메시지 출력
//        cout << "없는 상품입니다." << endl << endl;
//    }
//}
//
//void Check_Price()
//{
//    int i = 0;
//    vector <Basket>::iterator itr_b;
//    cout << "---------------------------장바구니---------------------------" << endl << endl;
//    for (itr_b = vb.begin(); itr_b != vb.end(); itr_b++)
//    {
//
//        cout << "상품명 : " << vb.at(i).name;
//        cout << ", 가격 : " << vb.at(i).price << endl << endl;
//        /*total += vb.at(i).price;*/
//        i++;
//    }
//    cout << "총 합 : " << total << "원" << endl << endl;
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
//            cout << "선택한 상품이 없습니다" << endl << endl;
//            break;
//        }
//
//        cout << "결제 금액: " << total << "원" << endl;
//        cout << "얼마를 내시겠습니까? ";
//        cin >> pay;
//
//        if (pay >= total)
//        {
//            cout << "거스름돈: " << pay - total << "원 입니다." << endl << endl;
//            total = 0;
//            cout << "결제가 완료되었습니다." << endl << endl;
//            cout << "--------------------------------------------" << endl << endl;
//            vb.clear();
//            break;
//        }
//
//        else if (pay < total)
//        {
//            total -= pay;
//            cout << total << "원이 부족합니다." << endl << endl;
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
//        cout << "1. 전체 상품 보기" << endl;
//        cout << "2. 카테고리별 보기" << endl;
//        cout << "3. 이름 검색 하기" << endl;
//        cout << "4. 장바구니 확인하기 " << endl;
//        cout << "5. 결제하기 " << endl;
//        cout << "메뉴를 골라주세요 : ";
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
//        case 4://장바구니 확인하기
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
//            cout << "없는 메뉴입니다." << endl << endl;
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