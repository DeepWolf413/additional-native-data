// ambush_bnd_ridge_ambush.ysc @ L3259
void func_126(int iParam0)
{
  int iVar0;

  WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iParam0], true, true);
  func_264(Local_15[iParam0], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
  iVar0 = func_265(iParam0);
  func_266(&Local_15, Local_15[iParam0], iVar0, 1);
}