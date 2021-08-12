// act_cajav_homerob1.ysc @ L2653
bool func_39(var uParam0)
{
  if (func_66(268435456))
  {
    uParam0->f_14 = 5;
    func_214("HOME_ROBBERY_1_JAVIER_FAIL", 32);
    return true;
  }
  else if (func_66(536870912))
  {
    uParam0->f_14 = 4;
    func_214("HOME_ROBBERY_1_JAVIER_FAIL", 32);
    return true;
  }
  else if (func_61(iLocal_15, 0, 0) && ((PED::IS_PED_FATALLY_INJURED(iLocal_15) || FIRE::IS_ENTITY_ON_FIRE(iLocal_15)) || (PED::IS_PED_RAGDOLL(iLocal_15) && FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_15, false, false), 8f))))
  {
    uParam0->f_14 = 4;
    func_214("HOME_ROBBERY_1_JAVIER_FAIL", 32);
    return true;
  }
  else if (func_66(1073741824 /* Float: 2f */))
  {
    uParam0->f_14 = 2;
    StringCopy(&(uParam0->f_15), "ALLY_DEAD_HORSE_PLAYER", 24);
    func_214("HOME_ROBBERY_1_JAVIER_FAIL", 32);
    return true;
  }
  return false;
}