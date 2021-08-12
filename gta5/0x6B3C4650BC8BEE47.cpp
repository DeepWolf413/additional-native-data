// creator.ysc @ L107381
void func_729(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
  char* sVar0;
  
  sVar0 = uParam2;
  if (!func_736(sVar0))
  {
    if (func_734())
    {
      func_733(uParam1, 0);
      HUD::SET_TEXT_RIGHT_JUSTIFY(bParam4);
      HUD::SET_TEXT_CENTRE(bParam3);
      func_730(func_732(*uParam0), func_731(uParam0->f_1), sVar0, 0);
    }
  }
}