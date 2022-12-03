#include <iostream>
#include "PlayContext.h"
#include "Note.h"
#include "Scale.h"
#include "Speed.h"
#include "AbstractExpression.h"

using namespace std;

int main()
{
    PlayContext context;
    //上海滩曲子
    context.text = "O 2 E 0.5 G 0.5 A 3 E 0.5 G 0.5 D 3";

    AbstractExpression *pExpression = NULL;

    try
    {
        while (context.text.length() > 0)
        {
            string str = context.text.substr(0, 1);

            if("O" == str)
            {
                //是实例化音阶
                pExpression = new Scale;
            }
            else if("C" == str ||
                    "D" == str ||
                    "E" == str ||
                    "F" == str ||
                    "G" == str ||
                    "A" == str ||
                    "B" == str ||
                    "P" == str
                    )
            {
                //是实例化音符
                pExpression = new Note;
            }

            pExpression->Interpret(&context);

            delete pExpression;
        }
    }
    catch (exception &ex)
    {
        cout << "exception: " << ex.what() << endl;
    }

    return 0;
}
