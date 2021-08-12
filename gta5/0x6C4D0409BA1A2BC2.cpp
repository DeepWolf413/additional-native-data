// am_mp_shooting_range.ysc @ L109733
int func_834(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var* uParam14)
{
  if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Param0.f_1, 0, 2))
  {
    ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Param0.f_1);
    if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(PLAYER::PLAYER_PED_ID(), uParam14))
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return 0;
}