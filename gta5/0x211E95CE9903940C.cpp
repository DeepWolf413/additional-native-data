// am_casino_peds.ysc @ L145014
void func_1208(var uParam0, var uParam1)
{
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
    PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 427, false);
    if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
    {
      ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
      VEHICLE::_SET_DISABLE_VEHICLE_UNK_2(false);
    }
  }
}