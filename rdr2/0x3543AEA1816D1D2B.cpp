// fussar1.ysc @ L26705
void func_460(bool bParam0)
{
  int iVar0;

  iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(1489.791f, -7157.13f, 71.7318f, joaat("AGU_BOILER_INT"));
  if (!bParam0)
  {
    if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(iVar0, "agu_shutters_open") && INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "agu_shutters_open"))
    {
      INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "agu_shutters_open", true);
    }
    if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(iVar0, "agu_shutters_closed") && INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "agu_shutters_closed"))
    {
      INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "agu_shutters_closed", true);
    }
  }
  else
  {
    if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(iVar0, "agu_shutters_open") && !INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "agu_shutters_open"))
    {
      INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "agu_shutters_open", 0);
    }
    if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(iVar0, "agu_shutters_closed") && INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "agu_shutters_closed"))
    {
      INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "agu_shutters_closed", true);
    }
  }
}