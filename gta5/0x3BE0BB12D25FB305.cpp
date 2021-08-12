// fm_race_creator.ysc @ L232965
int func_2301(struct<12> Param0, var uParam12)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (ENTITY::DOES_ENTITY_EXIST(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1)) && !ENTITY::IS_ENTITY_DEAD(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1), false))
  {
    if (func_2302(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1)))
    {
      iVar0 = WEAPON::GET_WEAPON_DAMAGE_TYPE(Param0.f_6);
      iVar1 = Param0.f_6;
      iVar2 = WEAPON::GET_WEAPONTYPE_GROUP(iVar1);
      if (((Param0.f_11 || iVar1 == joaat("weapon_unarmed")) || iVar2 == joaat("GROUP_MELEE")) || iVar0 == 2)
      {
        return 1;
      }
    }
  }
  return 0;
}