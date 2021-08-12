// ambush_pnk_type1.ysc @ L3388
void func_134()
{
  bool bVar0;
  int iVar1;

  iVar1 = 0;
  while (iVar1 <= 5)
  {
    if (func_61(Local_15[iVar1], 0, 0))
    {
      func_273(Local_15[iVar1], Global_36, 3, 0, 3);
      if (!bVar0)
      {
        func_171(&Local_274, Local_15[iVar1], Global_35, "GENERIC_SHOCKED_HIGH", 0, -1082130432 /* Float: -1f */, 1, 1744022339);
        bVar0 = true;
      }
      TASK::TASK_COMBAT_PED(Local_15[iVar1], Global_35, 0, 0);
      PED::SET_PED_TARGET_LOSS_RESPONSE(Local_15[iVar1], 2);
      PED::SET_PED_CONFIG_FLAG(Local_15[iVar1], 188, false);
      func_274(Local_15[iVar1], Local_15.f_22[iVar1], joaat("BLIP_STYLE_COP"), 0);
    }
    iVar1++;
  }
  func_174(&Local_274, 2);
}