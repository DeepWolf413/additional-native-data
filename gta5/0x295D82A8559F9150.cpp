// fbi2.ysc @ L142014
void func_1004()
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (!bLocal_609)
  {
    if (!PED::IS_PED_INJURED(iLocal_198))
    {
      WEAPON::GET_CURRENT_PED_WEAPON(iLocal_198, &iVar2, true);
      if (iVar2 == joaat("weapon_heavysniper"))
      {
        iVar0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iLocal_198, 1);
        if (ENTITY::DOES_ENTITY_EXIST(iVar0))
        {
          iVar1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
          ENTITY::SET_ENTITY_MOTION_BLUR(iVar1, false);
        }
      }
    }
  }
}