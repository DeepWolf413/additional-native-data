// bounty_poster.ysc @ L4074
bool func_151(var uParam0, var uParam1)
{
  int iVar0;

  if (uParam1->f_2 == 105 && func_183(87, 1))
  {
    return false;
  }
  iVar0 = func_260(uParam1->f_2);
  if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_6) || !func_140(iVar0, 1))
  {
    uParam0->f_6 = func_261(iVar0, 1, 0, 1, 1, 1);
    if (func_47(uParam0->f_6, 0))
    {
      PED::_0xBD75500141E4725C(uParam0->f_6, joaat("LAW_SHERIFF"));
    }
  }
  else if (uParam1->f_1 == 3)
  {
    return true;
  }
  else if (func_76(uParam0, uParam1))
  {
    ENTITY::SET_ENTITY_VISIBLE(uParam0->f_6, true);
    PED::SET_PED_CONFIG_FLAG(uParam0->f_6, 168, true);
    WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_6, joaat("WEAPON_UNARMED"), true, 0, false, false);
    return true;
  }
  return false;
}