// act_camp_dominoes_light.ysc @ L1109
void func_39(int iParam0, var uParam1)
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 27)
  {
    if (func_102(iVar0, &uParam1))
    {
    }
    else if (func_29(iVar0) && !func_105(iVar0))
    {
      if (ENTITY::IS_ENTITY_IN_VOLUME(func_30(iVar0), *iParam0, true, 0))
      {
        TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_30(iVar0), false, true);
        PERSCHAR::_0xD4B614179BCD0654(func_106(iVar0, 0));
        PERSCHAR::_0x631CD2D77FDC0316(func_106(iVar0, 0));
      }
    }
    iVar0++;
  }
}