// barry1.ysc @ L1199
int func_15(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  
  iVar1 = 28422;
  if (!func_12(PLAYER::PLAYER_PED_ID()))
  {
    return 0;
  }
  if (iParam0 == 0 || iParam0 == joaat("weapon_unarmed"))
  {
    return 0;
  }
  if (iParam1 == 1)
  {
    iVar1 = 60309;
  }
  WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), true);
  iVar0 = OBJECT::CREATE_OBJECT_NO_OFFSET(WEAPON::GET_WEAPONTYPE_MODEL(iParam0), PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), iVar1, 0f, 0f, 0f), true, true, false);
  if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    return 0;
  }
  ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), iVar1), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true);
  return iVar0;
}