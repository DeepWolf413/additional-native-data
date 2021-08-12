// fm_mission_controller.ysc @ L323504
int func_4500(int iParam0, var uParam1)
{
  int iVar0;
  struct<6> Var1;
  
  if (!func_4499(iParam0))
  {
    return 0;
  }
  iVar0 = 0;
  while (iVar0 <= (*uParam1 - 1))
  {
    Var1 = { *(uParam1[iVar0 /*6*/]) };
    if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
    {
    }
    else if (CUTSCENE::_0x4FCD976DA686580C(&Var1) != 2)
    {
    }
    else if (func_15491())
    {
      func_4490(0, Var1);
    }
    else
    {
      CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, &Var1, 3, 0, 64);
    }
    iVar0++;
  }
  return 1;
}