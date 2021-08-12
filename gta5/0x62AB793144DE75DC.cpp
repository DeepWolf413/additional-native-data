// tattoo_shop.ysc @ L3705
void func_28()
{
  int iVar0;
  
  iVar0 = PLAYER::PLAYER_PED_ID();
  if (ENTITY::DOES_ENTITY_EXIST(Local_668.f_2) && !PED::IS_PED_INJURED(Local_668.f_2))
  {
    iVar0 = Local_668.f_2;
  }
  if (ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 1, false);
    PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 0, false);
    PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 4, false);
    PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 5, false);
    PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 2, false);
    PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 3, false);
  }
}