// ambush_sav_corner.ysc @ L4249
bool func_175()
{
  int iVar0;
  int iVar1;

  if ((Local_15.f_9[Local_274.f_68] > 18f || PED::IS_PED_ON_MOUNT(Local_15[Local_274.f_68])) || PED::IS_PED_ON_MOUNT(Global_35))
  {
    return false;
  }
  if (WEAPON::_0xF29A186ED428B552(Local_15[Local_274.f_68], joaat("WEAPON_MELEE_KNIFE")))
  {
    iVar0 = joaat("WEAPON_MELEE_KNIFE");
  }
  else if (WEAPON::_0xF29A186ED428B552(Local_15[Local_274.f_68], joaat("WEAPON_MELEE_HATCHET_MELEEONLY")))
  {
    iVar0 = joaat("WEAPON_MELEE_HATCHET_MELEEONLY");
  }
  if (!WEAPON::IS_WEAPON_VALID(iVar0))
  {
    return false;
  }
  WEAPON::SET_CURRENT_PED_WEAPON(Local_15[Local_274.f_68], iVar0, false, 0, false, false);
  TASK::TASK_SWAP_WEAPON(Local_15[Local_274.f_68], 1, 1, 0, 0);
  TASK::OPEN_SEQUENCE_TASK(&iVar1);
  TASK::TASK_MELEE(0, Global_35, 0, 1, 1, 2f, 1, -1082130432 /* Float: -1f */);
  func_203(Local_15[Local_274.f_68], &iVar1, 0, 0, 1, 1);
  return true;
}