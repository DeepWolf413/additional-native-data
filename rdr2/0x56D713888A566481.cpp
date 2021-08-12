// beat_bandito_breakout.ysc @ L11061
int func_317(int iParam0)
{
  int iVar0;

  iVar0 = 0;
  if (!ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ENTITY::GET_ENTITY_ATTACHED_TO(iParam0));
    if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
    {
      iVar0 = 0;
    }
  }
  return iVar0;
}