// beat_drunk_dueler.ysc @ L20465
void func_573(var uParam0, var uParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;
  var uVar3;

  if (ENTITY::IS_ENTITY_DEAD(*uParam1))
  {
    return;
  }
  if (func_163(uParam0, 524288) && PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX()) > 0f)
  {
    iVar2 = func_980(*uParam1, 0, 1, 0);
    if (iVar2 != joaat("WEAPON_UNARMED"))
    {
      WEAPON::GET_AMMO_IN_CLIP(*uParam1, &iVar0, iVar2);
      if (iVar0 <= 0)
      {
        WEAPON::_GET_PED_WEAPON_INVENTORY_UID(*uParam1, 0, &uVar3);
        WEAPON::_GET_AMMO_IN_CLIP_BY_INVENTORY_UID(*uParam1, &iVar0, &uVar3);
      }
      iVar1 = WEAPON::GET_MAX_AMMO_IN_CLIP(*uParam1, iVar2, true);
    }
    if (iVar0 == iVar1 && func_981(uParam0) == 0)
    {
      PED::SET_PED_RESET_FLAG(Global_35, 159, true);
    }
  }
}