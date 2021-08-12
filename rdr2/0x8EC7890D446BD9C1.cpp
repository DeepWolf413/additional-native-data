// abigail2_1.ysc @ L18046
void func_218(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
  char[] cVar0[8];

  Global_1572864.f_8 = iParam0;
  Global_1572864.f_9 = iParam9;
  Global_1572864.f_10 = iParam10;
  StringCopy(&cVar0, "INVALID", 8);
  if (func_188(iParam0) == 1)
  {
    cVar0 = func_110(func_498(iParam0));
    TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
  }
  else if (func_188(iParam0) == 8)
  {
    cVar0 = func_500(func_499(iParam0));
    TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
  }
  func_501(1, 1);
  func_502(1, Param1, Param1.f_3);
  Global_1347394 = { Param5 };
  func_64(0);
  func_65(0);
  func_204(1f);
}