// act_fishing01.ysc @ L20206
void func_550(int iParam0, bool bParam1)
{
  if (ENTITY::IS_ENTITY_DEAD(iParam0))
  {
  }
  PED::_0xAAC0EE3B4999ABB5(iParam0, 0);
  PED::_0x9E66708B2B41F14A(iParam0, -1);
  if (bParam1)
  {
    TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
  }
  if (PED::IS_PED_A_PLAYER(iParam0))
  {
    PED::SET_PED_CONFIG_FLAG(iParam0, 43, false);
  }
  else
  {
    PED::_0x15F4732C357B1D6D(iParam0, PLAYER::PLAYER_ID(), 6);
  }
}