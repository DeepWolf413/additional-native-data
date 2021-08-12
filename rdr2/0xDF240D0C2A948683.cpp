// winter4.ysc @ L37176
bool func_791(var uParam0)
{
  vector3 vVar0;
  vector3 vVar3;

  if (!func_1391(uParam0, func_397(15, 4), 0))
  {
    return false;
  }
  func_1336(uParam0);
  func_960();
  func_961();
  func_1396(joaat("WEAPON_BOW"));
  func_1396(joaat("WEAPON_BOW_IMPROVED"));
  func_1338(uParam0);
  vVar0 = { -1042.93f, 599.57f, 90.816f };
  vVar3 = { ENTITY::GET_ENTITY_ROTATION(Local_14.f_59[2], 2) };
  func_1383(&(Local_14.f_59[2]), 0, 1, 1);
  iLocal_220 = OBJECT::CREATE_OBJECT(joaat("S_CS_DETONATOR02X"), vVar0, true, true, false, false, true);
  ENTITY::SET_ENTITY_ROTATION(iLocal_220, vVar3, 2, true);
  ENTITY::SET_ENTITY_COORDS(iLocal_220, vVar0, true, false, true, true);
  ENTITY::FREEZE_ENTITY_POSITION(iLocal_220, true);
  iLocal_471 = ENTITY::GET_ENTITY_LOD_DIST(iLocal_199[2]);
  ENTITY::SET_ENTITY_LOD_DIST(iLocal_199[2], 150);
  PED::SET_PED_LOD_MULTIPLIER(iLocal_199[2], 4f);
  func_438(uParam0, iLocal_220, "p_cs_detonator01x", 0, 0, 0, 0);
  return uParam0->f_607 == uParam0->f_607;
}