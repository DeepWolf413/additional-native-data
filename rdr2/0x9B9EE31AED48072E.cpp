// act_caunc_rustling.ysc @ L4880
void func_66(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
  if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    return;
  }
  if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
  {
    return;
  }
  if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
  {
    return;
  }
  if (!PED::IS_PED_INJURED(*iParam0))
  {
    ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
    if (!bParam3)
    {
      TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
    }
    PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
    if (bParam2)
    {
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
    }
  }
  ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}