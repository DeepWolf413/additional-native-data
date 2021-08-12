// abigail21_outro.ysc @ L424
bool func_23(var uParam0)
{
  int iVar0;

  POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
  PED::SET_PED_RESET_FLAG(Global_35, 297, true);
  PLAYER::_0x16752DAA7E6D3F72(PLAYER::PLAYER_ID());
  PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
  iVar0 = PED::GET_MOUNT(Global_35);
  if (!ENTITY::IS_ENTITY_DEAD(iVar0))
  {
    PED::SET_PED_RESET_FLAG(iVar0, 49, true);
    PED::SET_PED_RESET_FLAG(iVar0, 53, true);
  }
  if (func_44())
  {
    return true;
  }
  return false;
}