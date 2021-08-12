// agency_heist1.ysc @ L102544
void func_563(bool bParam0)
{
  if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-252283844))
  {
    OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-252283844, 0f, false, false);
    if (bParam0)
    {
      OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-252283844, 4, false, false);
      OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-252283844, 1, false, false);
    }
    else
    {
      OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-252283844, 3, false, false);
      OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-252283844, 0, false, false);
    }
  }
}