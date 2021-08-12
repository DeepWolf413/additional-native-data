// assassin_construction.ysc @ L16844
void func_327()
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
  {
    WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
    if (iVar0 == joaat("weapon_unarmed") && (iLocal_2175 != joaat("weapon_unarmed") && iLocal_2175 != 0))
    {
      WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_2175, true);
      WEAPON::GET_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iLocal_2175, &iVar1);
      iVar2 = WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iLocal_2175, true);
      iVar3 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_2175);
      if ((iVar1 < iVar2 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1785177548) != 1) && iVar3 > iVar1)
      {
        TASK::TASK_RELOAD_WEAPON(PLAYER::PLAYER_PED_ID(), true);
      }
    }
  }
}