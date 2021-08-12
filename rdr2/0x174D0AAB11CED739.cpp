// beat_dead_john.ysc @ L4943
bool func_95(char* sParam0, int iParam1)
{
  int iVar0;

  iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-311.7622f, 817.252f, 121.979f);
  if (INTERIOR::IS_VALID_INTERIOR(iVar0))
  {
    if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(iVar0, sParam0))
    {
      if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, sParam0))
      {
        if (iParam1 == 1)
        {
          INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, sParam0, 0);
        }
      }
      else if (iParam1 == 0)
      {
        INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, sParam0, true);
      }
      return true;
    }
    INTERIOR::UNPIN_INTERIOR(iVar0);
  }
  return false;
}