// player_horse.ysc @ L2307
void func_60()
{
  int iVar0;
  int iVar1;

  if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
  {
    return;
  }
  if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
  {
    return;
  }
  if (func_267())
  {
    return;
  }
  iVar0 = func_268(0);
  if (func_269(iVar0))
  {
    if (func_270(iVar0) == 1)
    {
      return;
    }
  }
  iVar1 = func_271();
  if (WEAPON::_0x5A695BD328586B44(Global_35, 0) != iVar1)
  {
    WEAPON::_0xB832F1A686B9B810(Global_35, iVar1, 0);
  }
}