// player_horse.ysc @ L26972
bool func_993(int iParam0, int iParam1)
{
  ATTRIBUTE::_0xD962F8579D702DB5();
  if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
  {
    return false;
  }
  if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
  {
    return false;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return false;
  }
  if (!TASK::IS_PED_IN_WRITHE(iParam0))
  {
    return false;
  }
  if (PED::_0x7FC84E85D98F063D(Global_35))
  {
    return false;
  }
  PED::SET_PED_CONFIG_FLAG(Global_35, 176, true);
  TASK::CLEAR_PED_TASKS(Global_35, true, false);
  TASK::TASK_REVIVE_TARGET(Global_35, iParam0, iParam1);
  func_432(iParam1, 1, 0, -142743235, 0);
  return true;
}