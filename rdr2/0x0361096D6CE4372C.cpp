// marston2.ysc @ L70895
void func_1797(char[4] cParam0)
{
  bool bVar0;

  if (!func_832(Global_35, 0))
  {
    return;
  }
  if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, false, false))
  {
    return;
  }
  bVar0 = func_33(cParam0) <= iLocal_19;
  if (((bVar0 && PED::IS_PED_IN_VEHICLE(Global_35, iLocal_72, false)) && PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID())) && func_1804(cParam0, "MAR2_KNOC", 0))
  {
    PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
  }
}