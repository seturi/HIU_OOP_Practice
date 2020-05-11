#include <iostream>
#include <cstring>
using namespace std;

class Girl;  // Girl�̶�� Ŭ������ �̸��� �̸� �˸�

class Boy
{
private:
    int height;
    friend class Girl;
    // Girl Ŭ������ Boy Ŭ������ private��� ���� ���� ����
public:
    Boy(int n) : height(n) {}
    void ShowYourFriendInfo(Girl& frn);
};
class Girl
{
private:
    char phNum[20];
public:
    Girl(const char num[])
    {
        strcpy_s(phNum, strlen(num) + 1, num);
    }
    void ShowYourFriendInfo(Boy& frn);
    friend class Boy;
};
void Boy::ShowYourFriendInfo(Girl& frn)
{
    cout << "Her phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy& frn)
{
    cout << "His height: " << frn.height << endl;
}

int main(void)
{
    Boy boy(170);
    Girl girl("010-1234-5678");

    boy.ShowYourFriendInfo(girl);
    girl.ShowYourFriendInfo(boy);
    return 0;
}