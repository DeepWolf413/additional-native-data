// ambush_odr_bridge_ambush.ysc @ L4037
void func_155()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 <= 3)
  {
    if (!func_61(iLocal_15[iVar0], 0, 1))
    {
    }
    else
    {
      func_285(&iLocal_15, iVar0, joaat("BLIP_STYLE_ENEMY"), 0);
      PED::_SET_PED_CROUCH_MOVEMENT(iLocal_15[iVar0], false, 0, false);
      PED::_0x78815FC52832B690(iLocal_15[iVar0], 1);
      if (iVar0 > 1)
      {
        PED::SET_COMBAT_FLOAT(iLocal_15[iVar0], 32, 3f);
        TASK::TASK_COMBAT_PED(iLocal_15[iVar0], Global_35, 0, 0);
      }
      else
      {
        TASK::TASK_COMBAT_PED(iLocal_15[iVar0], Global_35, 0, 0);
      }
    }
    iVar0++;
  }
}