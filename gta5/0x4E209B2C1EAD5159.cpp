// am_pi_menu.ysc @ L452920
void func_6358()
{
  if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
  {
    func_1119("PIM_HHEIS3", 0, 0);
  }
  else if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
  {
    func_1119("PIM_HHEIS2", 0, 0);
  }
  else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 3f || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
  {
    func_1119("PIM_HHEIS1", 0, 0);
  }
  else
  {
    func_1119("PIM_HHEISP", 0, 0);
  }
}