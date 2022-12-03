/**
 * Project Untitled
 */


#include "AbstractExpression.h"

/**
 * AbstractExpression implementation
 */


/**
 * @param context
 * @return void
 */
void AbstractExpression::Interpret(PlayContext* context) {
    //此方法用于将当前的演奏文本的第一条命令中获得命令字母和其参数值， 如"O 3 E 0.5 G 0.5 A 3"，则playKey为O 而playValue为3
    if(context->text.size() == 0)
    {
        return;
    }

    string playKey = context->text.substr(0, 1);
    context->text = context->text.substr(2);

    double playValue = atof(context->text.substr(0, context->text.find_first_of(" ")).c_str());
    context->text = context->text.substr(context->text.find_first_of(" ") + 1);

    Excute(playKey, playValue);

    return;
}

/**
 * @param key
 * @param value
 * @return void
 */
void AbstractExpression::Excute(string key, double value) {
    return;
}

AbstractExpression::~AbstractExpression()
{

}
