// braithwaites3.ysc @ L50565
void func_1244(bool bParam0)
{
  int iVar0;

  if (bParam0)
  {
    func_1457();
    func_1458();
  }
  iVar0 = 0;
  while (iVar0 < 7)
  {
    if (!ENTITY::IS_ENTITY_DEAD(Local_101[iVar0 /*10*/]))
    {
      PED::SET_PED_CONFIG_FLAG(Local_101[iVar0 /*10*/], 167, true);
    }
    iVar0++;
  }
  PED::_0xDDFAD4DEAA7FA362(iLocal_703, 8f, 20f, 0.2f, 0.3f);
  PED::_0x966DE09688A1DE39(iLocal_703, 8f, 20f, 0.1f, 0.2f);
  PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), Local_101[0 /*10*/], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
  PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), Local_101[0 /*10*/], 3);
  TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_101[0 /*10*/], sLocal_35, 0, 11276, -1, 0, 0, -1);
  AUDIO::_0x0D7FD6A55FD63AEF(14, 3, 1);
}