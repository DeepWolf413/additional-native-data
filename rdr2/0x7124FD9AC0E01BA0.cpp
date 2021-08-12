// abigail2_1.ysc @ L56066
char* func_1489(int iParam0)
{
  char* sVar0;

  if (iParam0 == 255)
  {
    if (func_238(37, iParam0))
    {
      return HUD::_0xD8402B858F4DDD88(&(Global_1109400.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109400.f_12)));
    }
    else
    {
      return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
    }
  }
  if (iParam0 < 0 || iParam0 >= 32)
  {
    return "";
  }
  sVar0 = "";
  if (!Global_1225639.f_21[iParam0])
  {
    return sVar0;
  }
  if (func_238(37, iParam0))
  {
    return HUD::_0xD8402B858F4DDD88(&(Global_1108178[iParam0 /*37*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108178[iParam0 /*37*/].f_12)));
  }
  return PLAYER::GET_PLAYER_NAME(Global_1225639.f_120[iParam0]);
}