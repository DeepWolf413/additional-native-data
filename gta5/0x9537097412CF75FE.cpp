// am_armwrestling.ysc @ L8547
int func_134(int iParam0)
{
  int iVar0;
  
  if (PED::IS_PED_INJURED(iParam0) || !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
  {
    return 0;
  }
  iVar0 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(iParam0, false));
  if (VEHICLE::IS_THIS_MODEL_A_JETSKI(iVar0))
  {
    return 1;
  }
  return 0;
}