// fishing_core.ysc @ L4997
void func_165(var uParam0, int iParam1)
{
  char* sVar0;

  if (!func_46(uParam0) && !MISC::GET_MISSION_FLAG())
  {
    if (iParam1 == 1)
    {
      sVar0 = func_383(func_1(), "MMFSH", "MGFSH");
      MISC::_0x1096603B519C905F(sVar0);
    }
    else
    {
      MISC::_0x1096603B519C905F("");
    }
  }
}