// agency_heist1.ysc @ L33956
int func_210(int* iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
  int iVar0;
  
  if (func_28(iParam1))
  {
    iVar0 = func_30(iParam1);
    STREAMING::REQUEST_MODEL(iVar0);
    if (STREAMING::HAS_MODEL_LOADED(iVar0))
    {
      if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
      {
        PED::DELETE_PED(iParam0);
      }
      *iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam5, false, false);
      func_426(*iParam0, iParam1, bParam7);
      PED::_0xE861D0B05C7662B8(*iParam0, false, 0);
      func_419(*iParam0);
      func_403(*iParam0, 1, 0);
      func_402(*iParam0);
      func_399(*iParam0);
      func_212(*iParam0, bParam8);
      func_211(*iParam0);
      if (bParam6)
      {
        STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
      }
      return 1;
    }
  }
  return 0;
}