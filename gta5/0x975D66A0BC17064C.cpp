// fm_bj_race_controler.ysc @ L316757
void func_4342(bool bParam0, bool bParam1, bool bParam2)
{
  float fVar0;
  float fVar1;
  
  fVar0 = SYSTEM::TO_FLOAT(iParam1);
  fVar1 = SYSTEM::TO_FLOAT(iParam0);
  bParam1 = SYSTEM::CEIL(fVar0);
  bParam0 = SYSTEM::CEIL(fVar1);
  PED::SET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND((IntToFloat(bParam0) * Global_262145.f_106)));
  if (bParam2)
  {
    func_4343(SYSTEM::ROUND((IntToFloat(bParam0) * Global_262145.f_106)));
  }
  HUD::SET_MAX_HEALTH_HUD_DISPLAY(SYSTEM::ROUND((IntToFloat(bParam1) * Global_262145.f_106)));
}