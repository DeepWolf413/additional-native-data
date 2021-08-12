// docks_setup.ysc @ L126884
void func_835()
{
  int iVar0;
  
  if (!WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0))
  {
    if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
    {
      if (iLocal_7197 != 8)
      {
        if (iVar0 != joaat("weapon_unarmed") && !func_358(0))
        {
          WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
        }
      }
    }
  }
  PAD::DISABLE_CONTROL_ACTION(0, 99, true);
  PAD::DISABLE_CONTROL_ACTION(0, 100, true);
  PAD::DISABLE_CONTROL_ACTION(0, 24, true);
  PAD::DISABLE_CONTROL_ACTION(0, 257, true);
  PAD::DISABLE_CONTROL_ACTION(0, 263, true);
  PAD::DISABLE_CONTROL_ACTION(0, 264, true);
  PAD::DISABLE_CONTROL_ACTION(0, 143, true);
  PAD::DISABLE_CONTROL_ACTION(0, 262, true);
  PAD::DISABLE_CONTROL_ACTION(0, 261, true);
  PAD::DISABLE_CONTROL_ACTION(0, 25, true);
  PAD::DISABLE_CONTROL_ACTION(0, 45, true);
  PAD::DISABLE_CONTROL_ACTION(0, 141, true);
  PAD::DISABLE_CONTROL_ACTION(0, 140, true);
  PAD::DISABLE_CONTROL_ACTION(0, 13, true);
  PAD::DISABLE_CONTROL_ACTION(0, 37, true);
}