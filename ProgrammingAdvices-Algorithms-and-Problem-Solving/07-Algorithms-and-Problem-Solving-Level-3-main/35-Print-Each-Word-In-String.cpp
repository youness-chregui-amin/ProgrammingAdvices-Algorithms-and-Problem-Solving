#include <string>
#include <iostream>
using namespace std;

string ReadString()
{
    string S1;
    cout << "Please Enter Your String?\n";
    getline(cin, S1);

    return S1;
}

/*
 * تحليل تفصيلي لعملية البحث باستخدام short pos:
 *
 * سؤال دقيق جداً! الإجابة تحتوي على تفصيل تقني بسيط ولكنه مهم لفهم ما يحدث "تحت الغطاء" (Under the hood).
 *
 * الإجابة المختصرة: الدالة find() تُرجع std::string::npos، ولكن المتغير pos (بسبب نوعه short) سيخزن القيمة -1.
 *
 * إليك ما يحدث خطوة بخطوة عندما تصبح S1 فارغة (""):
 *
 * 1. ما الذي ترجعه الدالة find()؟
 * - عندما تبحث في نص فارغ، دالة S1.find(delim) تُرجع القيمة الثابتة std::string::npos.
 * - هذه القيمة هي في الحقيقة أكبر رقم موجب يمكن للمتغير استيعابه (على نظام 64-bit تكون القيمة $18,446,744,073,709,551,615$).
 *
 * 2. ما الذي يحدث عند التخزين في pos؟
 * - أنت قمت بتعريف المتغير كـ short pos.
 * - الـ short مساحته صغيرة (16-bit).
 * - عندما يحاول الكمبيوتر وضع رقم npos العملاق داخل short الصغير، يحدث ما يسمى Overlow (طفح)، ويتم قص الرقم.
 * - نتيجة هذا القص هي أن الرقم يتحول إلى -1.
 * - إذن: داخل المتغير pos ستجد القيمة -1.
 *
 * 3. ما الذي يحدث في شرط الحلقة while؟
 * - الجملة هي: (pos = S1.find(...)) != std::string::npos
 * - تم تخزين -1 في pos.
 * - الآن يتم مقارنة pos (التي هي -1) مع npos.
 * - بما أن -1 في لغة الآلة (Binary) هو 1111...1111، و npos هو أيضاً 1111...1111 (كل الخانات ممتلئة)، فإن الكمبيوتر يعتبرهما متساويين.
 * - الشرط != (لا يساوي) يصبح False (خطأ).
 * - تتوقف الحلقة.
 *
 * نصيحة (Best Practice):
 * على الرغم من أن الكود يعمل لأن -1 يساوي npos في المقارنة، إلا أن استخدام short لا يزال غير آمن للنصوص الطويلة (أكثر من 32,767 حرف).
 *
 * التصحيح الموصى به:
 * قم بتغيير السطر:
 * short pos = 0;
 * إلى:
 * size_t pos = 0;
 */

void PrintEachWordInString(string S1)
{
    string delim = " ";
    cout << "\nYour string wrords are: \n\n";

    short pos = 0;
    string sWord;

    while ((pos = S1.find(delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos); // substr(start, length)
        if (sWord != "")
        {
            cout << sWord << endl;
        }

        S1.erase(0, pos + delim.length()); // erase(start, length)
    }

    if (S1 != "")
    {
        cout << S1;
    }
}

int main()
{
    string S1 = ReadString();

    PrintEachWordInString(S1);

    return 0;
}
