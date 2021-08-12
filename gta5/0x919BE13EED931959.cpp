// armenian1.ysc @ L57301
void func_535(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, float fParam7, bool bParam8)
{
  if (STREAMING::HAS_MODEL_LOADED(iParam1) && STREAMING::HAS_MODEL_LOADED(iParam0))
  {
    iLocal_2786[iParam6] = VEHICLE::CREATE_VEHICLE(iParam0, Param2, fParam5, true, true, false);
    VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2786[iParam6], 5f);
    if (bParam8)
    {
      iLocal_2828[iParam6] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_2786[iParam6], 26, iParam1, -1, true, true);
      TASK::TASK_STAND_STILL(iLocal_2828[iParam6], -1);
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2828[iParam6], true);
    }
    if (fParam7 > 0f)
    {
    }
  }
}