// family2.ysc @ L30801
int func_157(int iParam0)
{
  if (PED::IS_PED_GROUP_MEMBER(iParam0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
  {
    if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 50f, 50f, 50f, false, true, 0))
    {
      if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::_0x03EA03AF85A85CB7(iLocal_108, false, true, false, false, false, false, true, -1))
      {
        PED::REMOVE_PED_FROM_GROUP(iParam0);
      }
    }
    return 1;
  }
  else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, Global_19, false, true, 0))
  {
    PED::SET_PED_AS_GROUP_MEMBER(iParam0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
  }
  if (PED::_0x03EA03AF85A85CB7(iParam0, false, true, false, false, false, false, true, -1))
  {
  }
  if (PED::_0x03EA03AF85A85CB7(iParam0, false, true, false, false, false, false, false, -1))
  {
  }
  return 0;
}