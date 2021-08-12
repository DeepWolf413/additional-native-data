// am_casino_peds.ysc @ L89050
int func_703(int iParam0, char* sParam1)
{
  int iVar0;
  
  if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
  {
    return 0;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return 0;
  }
  if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iParam0))
  {
    return 0;
  }
  iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, sParam1);
  if (iVar0 == -1)
  {
    return 0;
  }
  return 1;
}