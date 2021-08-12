// beat_campfire_ambush.ysc @ L4029
bool func_144()
{
  int iVar0;
  int iVar1;

  if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.25f)
  {
    return false;
  }
  if (!bLocal_589)
  {
    WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
    WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false);
    if (iVar0 != joaat("WEAPON_UNARMED") || iVar1 != joaat("WEAPON_UNARMED"))
    {
      WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
      iLocal_590 = MISC::GET_GAME_TIMER() + 1500;
    }
    bLocal_589 = true;
  }
  if (MISC::GET_GAME_TIMER() < iLocal_590)
  {
    return false;
  }
  return true;
}