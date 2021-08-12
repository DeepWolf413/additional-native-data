// fillet_sp.ysc @ L11166
bool func_441(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
  if (!ENTITY::DOES_ENTITY_EXIST(*uParam2))
  {
    *uParam2 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_MELEE_KNIFE"), 1, ENTITY::GET_ENTITY_COORDS(*uParam1, true, false), true, 1f);
    GRAPHICS::_SET_PEARLESCENT_FX_ENABLED(*uParam2, false);
    if (iParam4 == 1)
    {
      func_458(uParam1, uParam2, iParam3, 0);
    }
    else
    {
      func_621(uParam0, uParam2, iParam3);
    }
  }
  return ENTITY::DOES_ENTITY_EXIST(*uParam2);
}