// ambush_odr_bridge_prevent.ysc @ L4429
bool func_147()
{
  int iVar0;
  int iVar1;

  if (func_326())
  {
    iVar0 = 0;
    while (iVar0 < Local_15.f_215)
    {
      if (func_61(Local_15[iVar0], 0, 0))
      {
        if (iVar0 == 0)
        {
          TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(Local_15[iVar0], "SCRIPT_PROC@ROBBERIES@BRIDGE@ODRISCOLL@BRIDGE_BLOCK", "DIA_01_PEDA", Global_35, -1, 8f, -8f, 0, 0f, false, false, -1f, 0, 0, -1f);
        }
        if (iVar0 == 1)
        {
          TASK::OPEN_SEQUENCE_TASK(&iVar1);
          TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
          func_210(Local_15[iVar0], &iVar1, 1f, 0, 1, 1);
        }
      }
      iVar0++;
    }
    func_125(0);
    func_149(&(vLocal_372[0 /*3*/]));
    return true;
  }
  return false;
}