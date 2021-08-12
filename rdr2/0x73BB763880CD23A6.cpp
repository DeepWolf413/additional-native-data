// beat_sharp_shooter.ysc @ L29348
int func_786(int iParam0)
{
  bool bVar0;
  bool bVar1;

  bVar0 = ENTITY::DOES_ENTITY_EXIST(iLocal_583);
  bVar1 = (bVar0 && (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_583) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(iLocal_583)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_583)) || ENTITY::IS_ENTITY_DEAD(iLocal_583)));
  if (!bVar0 || bVar1)
  {
    iLocal_583 = func_930(iParam0);
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_583))
    {
      TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_284, iLocal_583, -1, false, 1);
      return 0;
    }
    else
    {
      TASK::TASK_AIM_GUN_AT_COORD(iLocal_284, Local_216.f_7, -1, false, false);
      return 1;
    }
  }
  return 2;
}