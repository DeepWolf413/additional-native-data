// braithwaites2.ysc @ L52194
bool func_1248()
{
  if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_27[0]))
  {
    if (!func_163(Local_14.f_27[0], 0) || func_1780(Local_14.f_27[0], Global_35))
    {
      return true;
    }
  }
  if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_27[1]))
  {
    if (!func_163(Local_14.f_27[1], 0) || func_1780(Local_14.f_27[1], Global_35))
    {
      return true;
    }
  }
  if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_27[2]))
  {
    if (!func_163(Local_14.f_27[2], 0) || func_1780(Local_14.f_27[2], Global_35))
    {
      return true;
    }
  }
  if (PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 60))
  {
    PLAYER::_0x1A6E84F13C952094(PLAYER::PLAYER_ID(), 60, &uLocal_7308);
    if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(uLocal_7308[0]) == joaat("REL_BRAITH_GUARD"))
    {
      return true;
    }
  }
  return false;
}