// paparazzo1.ysc @ L4675
void func_87()
{
  if (!PED::IS_PED_GROUP_MEMBER(Local_3487, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
  {
    PED::SET_PED_AS_GROUP_MEMBER(Local_3487, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
  }
  if (PED::IS_PED_IN_GROUP(Local_3487))
  {
    PED::SET_PED_CONFIG_FLAG(Local_3487, 167, true);
    PED::SET_GROUP_FORMATION(PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()), 0);
    PED::SET_GROUP_FORMATION_SPACING(PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()), 1.5f, -1f, -1f);
    PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Local_3487, 0);
  }
}