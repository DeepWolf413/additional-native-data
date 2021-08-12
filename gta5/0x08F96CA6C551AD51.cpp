// fm_bj_race_controler.ysc @ L542640
void func_9210(var uParam0, var uParam1)
{
  if (func_380(uParam0))
  {
    if (func_9213(uParam1))
    {
      if (func_9166(PLAYER::PLAYER_ID(), 1, 1))
      {
        WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), OBJECT::GET_WEAPON_TYPE_FROM_PICKUP_TYPE(*uParam1), func_9211(*uParam1), false, true);
      }
    }
  }
}