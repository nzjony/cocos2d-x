#ifndef __HTTP_CLIENT_H__
#define __HTTP_CLIENT_H__

#include "cocos2d.h"
#include "cocos-ext.h"

class HttpClientTest : public cocos2d::Layer
{
public:
    HttpClientTest();
    virtual ~HttpClientTest();
    void toExtensionsMainLayer(cocos2d::Object *sender);
    
    //Menu Callbacks
    void onMenuGetTestClicked(cocos2d::Object *sender);
    void onMenuPostTestClicked(cocos2d::Object *sender);
    void onMenuPostBinaryTestClicked(cocos2d::Object *sender);
    void onMenuPutTestClicked(cocos2d::Object *sender);
    void onMenuDeleteTestClicked(cocos2d::Object *sender);
    
    //Http Response Callback
    void onHttpRequestCompleted(cocos2d::extension::HttpClient *sender, cocos2d::extension::HttpResponse *response);

private:
    cocos2d::LabelTTF* _labelStatusCode;
};

void runHttpClientTest();

#endif //__HTTPREQUESTHTTP_H
