// native2_outro.ysc @ L844
bool func_44()
{
  int iVar0;
  int iVar1;
  int iVar2;

  if (ENTITY::DOES_ENTITY_EXIST(iLocal_3))
  {
    return true;
  }
  iVar0 = func_64(49);
  iVar1 = func_65(iVar0);
  iVar2 = iVar1;
  if (ENTITY::DOES_ENTITY_EXIST(iVar2))
  {
    iLocal_3 = iVar2;
    if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_3, false))
    {
      ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_3, true, true);
    }
    VEHICLE::_0x4182C037AA1F0091(iLocal_3, 1);
    VEHICLE::_0x160C1B5AB48AB87C(iLocal_3, 1E+17f);
    VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3, false);
    return true;
  }
  return false;
}