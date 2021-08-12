// social_controller.ysc @ L7858
void func_200(int iParam0)
{
  char cVar0[16];
  
  if (!Global_2097152[func_191() /*5557*/].f_587.f_41[iParam0])
  {
    APP::APP_SET_APP("car");
    StringCopy(&cVar0, "multiplayer", 16);
    StringIntConCat(&cVar0, func_15(), 16);
    APP::APP_SET_BLOCK(&cVar0);
    StringCopy(&cVar0, "vehicle", 16);
    StringIntConCat(&cVar0, iParam0, 16);
    APP::APP_SET_BLOCK(&cVar0);
    func_198("carUnlocked", 0);
    APP::APP_CLOSE_BLOCK();
    iLocal_101 = 1;
    SYSTEM::SETTIMERA(0);
    APP::APP_CLOSE_BLOCK();
    APP::APP_CLOSE_APP();
    Global_2097152[func_191() /*5557*/].f_587.f_41[iParam0] = 1;
  }
}