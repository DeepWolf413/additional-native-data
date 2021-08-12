// am_casino_peds.ysc @ L148987
int func_1278(var uParam0, int iParam1)
{
  if (iParam1 == 12)
  {
    if (func_15(PLAYER::PLAYER_PED_ID()))
    {
      ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 765.6328f, -1763.147f, 29.3625f, false, false, false, false);
      ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 270f);
      TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), 767.3511f, -1763.287f, 29.3625f, 1f, 20000, 0.25f, false, 40000f);
    }
    func_1245(0);
    return 1;
  }
  return 0;
}