#include <iostream>
#include <string.h>

using namespace std;

class worker
{
protected:
    int code;
    char name[200];
    float salary;

public:
    worker()
    {
    }
    worker(int c, char *n, float s)
    {
        code = c;
        strcpy(name, n);
        salary = s;
    }

    void putw()
    {
        cout << "\n code                 : " << code;
        cout << "\n Name                 : " << name;
        cout << "\n salary               : " << salary;
    }
};

class officer
{
protected:
    float DA, HRA;

public:
    officer()
    {
    }
    officer(float d, float h)
    {
        DA = d;
        HRA = h;
    }
    void puto()
    {
        cout << "\n DA                   : " << DA;
        cout << "\n HRA                  : " << HRA;
    }
};

class manager : public worker, public officer
{
private:
    float TA;
    float gsal;

public:
    manager()
    {
    }
    manager(int c, char *n, float s, float d, float h) : worker(c, n, s), officer(d, h)
    {
    }

    void putm()
    {
        putw();
        puto();
        TA = 0.10 * salary;
        cout << "\n TA                   : " << TA;
        gsal = DA + HRA + TA + salary;
        cout << "\n Gross salary         : " << gsal;
    }
};

int main()
{
    int cnt, i;

    cout << "\n Enter Manager Count : ";
    cin >> cnt;
    manager *m;
    m = new manager[cnt];
    for (i = 0; i < cnt; i++)
    {
        cout << "\n Enter wirker Information for " << i + 1 << "\n";
        cout << "\n --------------------------------";
        cout << "\n Enter code     : ";
        int c;
        cin >> c;
        cout << "\n Enter Name    : ";
        char n[200];
        cin >> n;
        cout << "\n Enter salary  : ";
        float s;
        cin >> s;
        cout << "\n Enter DA     : ";
        float d;
        cin >> d;
        cout << "\n Enter HRA   : ";
        float h;
        cin >> h;
        m[i] = manager(c, n, s, d, h);
    }
    for (i = 0; i < cnt; i++)
    {
        cout << "\n ------------------------------";
        cout << "\n MAnager Information ";
        cout << "\n ------------------------------";
        m[i].putm();
    }
    return 0;
}