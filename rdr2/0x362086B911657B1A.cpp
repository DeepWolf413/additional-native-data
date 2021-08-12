// beat_brontes_town_encounter.ysc @ L95
void func_1()
{
  int iVar0;

  func_15(0);
  func_16(&(Local_14.f_505));
  if (((!func_17(&Local_14, 8) && !Local_14.f_46) && !Local_14.f_44) && !Local_14.f_510)
  {
    Local_14.f_45 = 0;
  }
  LAW::_0x362086B911657B1A(PLAYER::PLAYER_ID(), 0);
  iVar0 = 0;
  while (iVar0 < Local_14.f_294)
  {
    if (func_18(Local_14.f_294[iVar0], 0, 0))
    {
      if (PED::IS_PED_USING_ANY_SCENARIO(Local_14.f_294[iVar0]))
      {
        TASK::CLEAR_PED_TASKS(Local_14.f_294[iVar0], true, false);
      }
    }
    iVar0++;
  }
  func_5(&Local_14, 6);
}