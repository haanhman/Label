#include "HelloWorldScene.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
USING_NS_CC;

using namespace cocostudio::timeline;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size sceneSize = Director::getInstance()->getVisibleSize();
    float fontSize = 44.444447f;
    string lato_bold = "fonts/Lato-Bold.ttf";
    auto background = LayerColor::create(Color4B::WHITE);
    background->setContentSize(sceneSize);
    addChild(background);
    
    auto label = Label::createWithTTF("Play Lesson", lato_bold, fontSize);
    MenuItemLabel* pMenuItem = MenuItemLabel::create(label, CC_CALLBACK_1(HelloWorld::CallBackFunction, this));
    
    Menu* pMenu =Menu::create(pMenuItem, nullptr);
    pMenu->setPosition( Vec2() );
    pMenuItem->setPosition(sceneSize.width/2, sceneSize.height*0.9f);
//    addChild(pMenu, 2);
    
    auto _label = Label::createWithTTF("Open Static Level Type", lato_bold, fontSize);
    label->setColor(Color3B::BLACK);
    MenuItemLabel* _pMenuItem = MenuItemLabel::create(_label, CC_CALLBACK_1(HelloWorld::CallBackFunction, this));
    
    Menu* _pMenu = Menu::create(_pMenuItem, nullptr);
    _pMenu->setPosition( Vec2() );
    _pMenuItem->setPosition(sceneSize.width/2, sceneSize.height*0.8f);
    addChild(_pMenu, 2);
    
    
    
    label = Label::createWithTTF("Category", lato_bold, fontSize);
    label->setColor(Color3B::BLACK);
    MenuItemLabel* pMenuItem1 = MenuItemLabel::create(label, CC_CALLBACK_1(HelloWorld::CallBackFunction, this));
    
    Menu* pMenu1 =Menu::create(pMenuItem1, nullptr);
    pMenu1->setPosition( Vec2() );
    pMenuItem1->setPosition(sceneSize.width/2, sceneSize.height*0.7f);
    addChild(pMenu1, 2);
    
    
    
    
    label = Label::createWithTTF("Stickers", lato_bold, fontSize);
    label->setColor(Color3B::BLACK);
    MenuItemLabel* pMenuItem2 = MenuItemLabel::create(label, CC_CALLBACK_1(HelloWorld::CallBackFunction, this));
    
    Menu* pMenu2 =Menu::create(pMenuItem2, nullptr);
    pMenu2->setPosition( Vec2() );
    pMenuItem2->setPosition(sceneSize.width/2, sceneSize.height*0.6f);
    addChild(pMenu2, 2);
    
    
    label = Label::createWithTTF("User", lato_bold, fontSize);
    label->setColor(Color3B::BLACK);
    MenuItemLabel* pMenuItem3 = MenuItemLabel::create(label, CC_CALLBACK_1(HelloWorld::CallBackFunction, this));
    
    Menu* pMenu3 = Menu::create(pMenuItem3, nullptr);
    pMenu3->setPosition( Vec2() );
    pMenuItem3->setPosition(sceneSize.width/2, sceneSize.height*0.5f);
    addChild(pMenu3, 2);
    
    label = Label::createWithTTF("Download Easy", lato_bold, fontSize);
    label->setPosition(sceneSize.width/2, sceneSize.height*0.4f);
    label->setColor(Color3B::BLACK);
    addChild(label);
    
    label = Label::createWithTTF("Download Medium", lato_bold, fontSize);
    label->setPosition(sceneSize.width/2, sceneSize.height*0.3f);
    label->setColor(Color3B::BLACK);
    addChild(label);
    
    //label error
    label = Label::createWithTTF("Play Advandce", lato_bold, fontSize);
    label->setPosition(sceneSize.width/2, sceneSize.height*0.2f);
    label->setColor(Color3B::BLACK);
    addChild(label);
    
    //label 2
    label = Label::createWithTTF("Set sticker", lato_bold, fontSize);
    label->setPosition(sceneSize.width/2, sceneSize.height*0.1f);
    label->setColor(Color3B::BLACK);
    addChild(label);
    
    auto labelDesc = Label::createWithTTF("Label Text", lato_bold, 30);
    labelDesc->setAnchorPoint(Vec2(1, 0));
    labelDesc->setPosition(Vec2(sceneSize.width, 10));
    addChild(labelDesc);
    
    return true;
}
void HelloWorld::CallBackFunction(Ref* sender) {
    CCLOG("Enter Here");
}
