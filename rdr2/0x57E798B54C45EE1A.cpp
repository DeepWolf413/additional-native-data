// abigail2_1.ysc @ L23509
void func_358(char[4] cParam0)
{
  int iVar0;
  int iVar1;

  if (!Global_1879514.f_11)
  {
    iVar0 = func_360();
    iVar1 = MISC::GET_HASH_KEY(&cParam0);
    if (MISSIONDATA::MISSIONDATA_GET_RATING(iVar1) != 5 && iVar0 == 5)
    {
      if (func_188(Global_1879514.f_1) == 1)
      {
        func_354(5, 1);
      }
      else if (func_188(Global_1879514.f_1) == 8 && (func_293(Global_1347702[func_264(Global_1879514.f_1) /*49*/].f_12, 1) || func_293(Global_1347702[func_264(Global_1879514.f_1) /*49*/].f_12, 33554432)))
      {
        func_354(5, 1);
      }
    }
    MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cParam0), iVar0);
  }
  else
  {
    MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cParam0), 3);
  }
}