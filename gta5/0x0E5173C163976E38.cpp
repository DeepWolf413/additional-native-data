// agency_heist1.ysc @ L91359
void func_399(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  struct<6> Var3;
  
  iVar0 = func_29(iParam0);
  if (func_28(iVar0) && !PED::IS_PED_INJURED(iParam0))
  {
    PED::CLEAR_PED_DECORATIONS(iParam0);
    iVar1 = 0;
    while (iVar1 < 4)
    {
      iVar2 = 0;
      while (iVar2 < 32)
      {
        if (MISC::IS_BIT_SET(Global_112293.f_2361.f_493[iVar0 /*15*/].f_10[iVar1], iVar2))
        {
          if (func_300(&Var3, func_401(iVar1, iVar2), func_400(iVar0), iParam0, -1))
          {
            PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var3.f_4, Var3.f_5);
          }
        }
        iVar2++;
      }
      iVar1++;
    }
  }
}