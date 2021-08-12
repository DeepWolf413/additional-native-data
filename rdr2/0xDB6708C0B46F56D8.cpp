// braithwaites3.ysc @ L35410
bool func_780(var uParam0)
{
  int iVar0;

  func_1248();
  iVar0 = 0;
  while (iVar0 < 7)
  {
    if (!ENTITY::IS_ENTITY_DEAD(Local_101[iVar0 /*10*/]))
    {
      PED::SET_PED_CONFIG_FLAG(Local_101[iVar0 /*10*/], 301, false);
    }
    iVar0++;
  }
  TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
  func_422(&iLocal_74, 32);
  return uParam0->f_607 == uParam0->f_607;
}