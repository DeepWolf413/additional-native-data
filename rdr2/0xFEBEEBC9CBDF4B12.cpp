// beat_drunk_dueler.ysc @ L33798
void func_1027(var uParam0, var uParam1)
{
  PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
  ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(Global_35, 0);
  if (func_163(uParam1, 4194304))
  {
    func_400(Global_35, 0, 0);
  }
  else if (func_1348(uParam0, uParam1, 0))
  {
    if (func_162(uParam0, 524288))
    {
      func_400(Global_35, 0, 0);
    }
    else
    {
      PED::EXPLODE_PED_HEAD(Global_35, joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"));
    }
  }
  else if (func_1359(uParam0, uParam1))
  {
    func_400(Global_35, 0, 0);
  }
}