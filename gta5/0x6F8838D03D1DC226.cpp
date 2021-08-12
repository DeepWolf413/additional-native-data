// agency_heist3b.ysc @ L142565
void func_1123(int iParam0, struct<3> Param1, int iParam4, bool bParam5)
{
  char cVar0[24];
  
  if (iParam0 == -1)
  {
    return;
  }
  StringCopy(&cVar0, "AH3B_DOOR_", 24);
  StringIntConCat(&cVar0, iParam0, 24);
  Local_5455[iParam0 /*8*/] = MISC::GET_HASH_KEY(&cVar0);
  if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Local_5455[iParam0 /*8*/]))
  {
    OBJECT::ADD_DOOR_TO_SYSTEM(Local_5455[iParam0 /*8*/], iParam4, Param1, false, true, false);
  }
  if (bParam5)
  {
    OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_5455[iParam0 /*8*/], 0f, false, true);
    OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_5455[iParam0 /*8*/], 6, true, false);
    OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_5455[iParam0 /*8*/], 4, true, false);
  }
}