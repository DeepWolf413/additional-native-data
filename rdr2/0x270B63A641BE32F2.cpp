// gang2.ysc @ L54675
void func_1339()
{
  if (!func_26(&uLocal_1147))
  {
    func_213(&uLocal_1147);
  }
  if ((PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()) || func_1388(iLocal_315[1], uLocal_815[0], 1, 0)) || func_806() == 0)
  {
    func_213(&uLocal_1147);
    if (PED::GET_PED_CONFIG_FLAG(iLocal_315[1], 138, true) == 1)
    {
      PED::SET_PED_CONFIG_FLAG(iLocal_315[1], 138, false);
    }
    ENTITY::SET_ENTITY_INVINCIBLE(iLocal_315[1], true);
    ENTITY::SET_ENTITY_INVINCIBLE(iLocal_315[2], true);
    PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
  }
  if (PED::GET_PED_CONFIG_FLAG(iLocal_315[1], 138, true) == 0)
  {
    if (func_919(&uLocal_1147) > 20f)
    {
      PED::SET_PED_CONFIG_FLAG(iLocal_315[1], 138, true);
      ENTITY::SET_ENTITY_INVINCIBLE(iLocal_315[1], false);
    }
  }
}