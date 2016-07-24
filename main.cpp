
/**
 *
 * 使用const 保护数据
 */

#include <iostream>
#include <iterator>

using namespace std;

void change(const string &);

float *returnTest();

int main() {
    /* string str("can you change it?");
     change(str);
     cout << str << endl;*/

    cout << returnTest();


    return 0;
}

void change(const string &str) {

    string s = str + " NO!";
    cout << s << endl;
}

float *returnTest() {
    float * buff = new float[2];
    buff[0]=2.3f;
    buff[1] = 3.3f;
    return buff;
}
