// feud1.ysc @ L87517
bool func_2111(bool bParam0)
{
  if (!ENTITY::IS_ENTITY_DEAD(bParam0))
  {
    if ((PED::_IS_PED_LASSOED(bParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, Global_35, 1, 1)) || (PED::IS_PED_BEING_JACKED(bParam0) && PED::GET_PEDS_JACKER(bParam0) == Global_35))
    {
      return true;
    }
  }
  return false;
}