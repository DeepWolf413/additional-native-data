// rcm_bh_skinner_brother.ysc @ L34004
bool func_1151()
{
  if (!bLocal_458)
  {
    if (func_79(&uLocal_417))
    {
      if ((func_461(&uLocal_417) >= 90f && ENTITY::IS_ENTITY_AT_ENTITY(Global_35, iLocal_403, 50f, 50f, 50f, false, true, 0)) || (func_461(&uLocal_417) >= 90f && ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_515, 50f, 50f, 50f, false, true, 0)))
      {
        bLocal_458 = true;
      }
    }
  }
  if (!bLocal_456)
  {
    if (func_1142() <= 1)
    {
      if (((((ENTITY::IS_ENTITY_DEAD(iLocal_403) && ENTITY::IS_ENTITY_AT_ENTITY(Global_35, iLocal_403, 10f, 10f, 10f, false, true, 0)) || ENTITY::IS_ENTITY_AT_ENTITY(Global_35, iLocal_403, 5f, 5f, 5f, false, true, 0)) || PED::_IS_PED_HOGTIED(iLocal_403)) || (bLocal_452 && ENTITY::IS_ENTITY_AT_ENTITY(Global_35, iLocal_403, 25f, 25f, 25f, false, true, 0))) || ENTITY::IS_ENTITY_AT_COORD(Global_35, -1987.78f, -1847.29f, 112.11f, 20f, 20f, 20f, false, true, 0))
      {
        return true;
      }
    }
    if (bLocal_458)
    {
      return true;
    }
  }
  else if ((ENTITY::IS_ENTITY_AT_ENTITY(Global_35, iLocal_403, 15f, 15f, 15f, false, true, 0) || PED::_IS_PED_HOGTIED(iLocal_403)) || bLocal_458)
  {
    return true;
  }
  return false;
}