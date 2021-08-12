// native_son3.ysc @ L26496
void func_456(int iParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    return;
  }
  if (*iParam0 == Global_35)
  {
    if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
    {
      PLAYER::_0x12E09E278C6C29B7(PLAYER::GET_PLAYER_INDEX());
    }
  }
  if (!ENTITY::DOES_ENTITY_EXIST(Local_302))
  {
    return;
  }
  if (*iParam0 == Global_35)
  {
    if (PLAYER::_0xE24C64D9ADED2EF5(PLAYER::GET_PLAYER_INDEX(), Local_302))
    {
      PLAYER::_0x0C6B89876262A99D(PLAYER::GET_PLAYER_INDEX(), Local_302);
    }
  }
  else if (PED::IS_PED_GROUP_MEMBER(*iParam0, Local_302.f_20, 0))
  {
    func_457(*iParam0);
  }
}