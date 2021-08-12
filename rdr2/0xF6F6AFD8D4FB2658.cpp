// ambush_exc_scm_prec.ysc @ L12933
int func_484()
{
  if (Global_1935630.f_40 != 0)
  {
    return 1;
  }
  if (WEAPON::_0x9E2D5D6BC97A5F1E(Global_35, joaat("WEAPON_UNARMED"), 5000) || WEAPON::_0x9E2D5D6BC97A5F1E(Global_35, joaat("WEAPON_MELEE_KNIFE"), 5000))
  {
    return 1;
  }
  if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
  {
    return 1;
  }
  if (PED::IS_PED_BEING_JACKED(Global_35))
  {
    return 1;
  }
  if (!ENTITY::IS_ENTITY_UPRIGHT(Global_35, 90f))
  {
    return 1;
  }
  if (TASK::IS_PED_GETTING_UP(Global_35))
  {
    return 1;
  }
  if (PED::IS_PED_RAGDOLL(Global_35))
  {
    return 1;
  }
  return 0;
}