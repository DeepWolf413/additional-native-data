// abigail2.ysc @ L40064
int func_391(int* iParam0, int iParam1, struct<3> Param2, float fParam5, char* sParam6, int iParam7)
{
  if (func_392(iParam0, iParam1, Param2, fParam5, 1))
  {
    if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
    {
      if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
      {
        PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
        PED::SET_PED_MONEY(*iParam0, 0);
        if (iParam7 == 1)
        {
          PED::SET_PED_CAN_BE_TARGETTED(*iParam0, false);
        }
      }
      PED::SET_PED_NAME_DEBUG(*iParam0, sParam6);
    }
    return 1;
  }
  return 0;
}