// cv_wnt_swn_18.ysc @ L3520
bool func_95(var uParam0)
{
  int iVar0;

  if (!bLocal_99)
  {
    iVar0 = func_56(uParam0, iLocal_92);
    if (ENTITY::DOES_ENTITY_EXIST(iVar0))
    {
      if (!PED::IS_PED_USING_ANY_SCENARIO(iVar0))
      {
        if (ENTITY::DOES_ENTITY_EXIST(iVar0))
        {
          WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("WEAPON_UNARMED"), false, 0, false, false);
          WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("WEAPON_UNARMED"), false, 1, false, false);
          TASK::_0xFDECCA06E8B81346(iVar0);
          bLocal_99 = true;
        }
      }
    }
  }
  return func_210(uParam0, &uLocal_18);
}