// abigail2.ysc @ L36202
bool func_278(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
  var uVar0;
  struct<3> Var1;
  int iVar4;
  
  iVar4 = func_286(iParam0, iParam1);
  if (!func_464(iParam0) || !func_464(iParam1))
  {
    if (iVar4 != -1)
    {
      func_285(&(Local_37[iVar4 /*4*/]));
    }
    return 0;
  }
  if (!func_282(iParam0, iParam1, fParam2, iParam3))
  {
    return 0;
  }
  if (iVar4 == -1)
  {
    iVar4 = func_281();
    if (iVar4 == -1)
    {
      return 0;
    }
    Local_37[iVar4 /*4*/].f_1 = iParam0;
    Local_37[iVar4 /*4*/].f_2 = iParam1;
  }
  Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
  uVar0 = func_279(&(Local_37[iVar4 /*4*/]), Var1, iParam1, &(Local_37[iVar4 /*4*/].f_3), iParam0, iParam5);
  return (uVar0 || (MISC::GET_GAME_TIMER() - Local_37[iVar4 /*4*/].f_3) < iParam4);
}