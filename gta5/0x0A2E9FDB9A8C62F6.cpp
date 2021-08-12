// am_hs4_nimb_lsa_isd_leave.ysc @ L1423
void func_59(char* sParam0)
{
  int iVar0;
  
  if (!CUTSCENE::IS_CUTSCENE_PLAYING())
  {
    return;
  }
  if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
  {
    return;
  }
  if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(sParam0, joaat("baller2"))))
  {
    iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(sParam0, joaat("baller2")));
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
    {
      VEHICLE::SET_VEHICLE_COLOURS(iVar0, 0, 0);
      VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 0, 0);
      VEHICLE::SET_VEHICLE_WINDOW_TINT(iVar0, 0);
    }
  }
}