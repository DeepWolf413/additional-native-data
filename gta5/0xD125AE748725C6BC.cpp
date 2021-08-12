// director_mode.ysc @ L28955
int func_411(int iParam0)
{
  if ((!PED::GET_PED_STEALTH_MOVEMENT(iParam0) && !PED::IS_PED_DUCKING(iParam0)) && PED::GET_PED_COMBAT_MOVEMENT(iParam0) == 0)
  {
    return 1;
  }
  return 0;
}