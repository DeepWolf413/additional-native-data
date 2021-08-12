// am_mp_yacht.ysc @ L118867
int func_944(int iParam0)
{
  var uVar0;
  char* sVar1;
  
  if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
  {
    if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
    {
      sVar1 = ENTITY::GET_ENTITY_SCRIPT(iParam0, &uVar0);
      if (MISC::COMPARE_STRINGS(sVar1, "gb_", false, 3) == 0)
      {
        return 1;
      }
    }
  }
  return 0;
}