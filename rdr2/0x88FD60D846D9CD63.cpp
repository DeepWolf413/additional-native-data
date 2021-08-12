// fishing_core.ysc @ L4027
void func_114(var uParam0, var uParam1, int iParam2)
{
  if ((func_115(uParam1, iParam2) != 0 && func_115(uParam1, iParam2) != 7) && func_115(uParam1, iParam2) != 8)
  {
    if (ENTITY::IS_ENTITY_DEAD(func_53(uParam1, iParam2)))
    {
      func_200(uParam1, iParam2, 7);
    }
    else
    {
      PED::SET_PED_RESET_FLAG(func_53(uParam1, iParam2), 134, true);
      PED::SET_PED_RESET_FLAG(func_53(uParam1, iParam2), 12, true);
      if (func_80(iParam2, 1024))
      {
        func_200(uParam1, iParam2, 7);
      }
      else if ((!func_80(iParam2, 2) && func_9(uParam0) == 4) && Global_1900073.f_13 == 0)
      {
        func_197(iParam2, 2);
      }
      else if (func_69(iParam2, 1, 1) && func_80(iParam2, 32768))
      {
        TASK::_0x88FD60D846D9CD63(func_53(uParam1, iParam2));
      }
    }
  }
}