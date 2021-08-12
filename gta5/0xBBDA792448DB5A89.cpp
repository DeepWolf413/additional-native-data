// achievement_controller.ysc @ L7552
int func_26()
{
  int iVar0;
  int iVar1;
  float fVar2;
  
  if (MISC::IS_PC_VERSION())
  {
    return 0;
  }
  if (func_105())
  {
    if (func_29())
    {
      iVar0 = func_28();
      iVar1 = func_27();
      fVar2 = ((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar0)) * 100f);
      if (fVar2 > IntToFloat(Global_262145.f_121) && iVar0 >= 8)
      {
        return 1;
      }
    }
  }
  return 0;
}