// fbi2.ysc @ L126589
void func_773()
{
  int iVar0;
  
  iVar0 = func_715();
  if (!PED::IS_PED_INJURED(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200[0], false))
  {
    PED::SET_PED_INTO_VEHICLE(iVar0, iLocal_200[0], 1);
    PED::SET_PED_IN_VEHICLE_CONTEXT(iVar0, MISC::GET_HASH_KEY("MISSFBI2_MICHAEL_DRIVEBY"));
    PED::SET_PED_DRIVE_BY_CLIPSET_OVERRIDE(iVar0, "clipset@missfbi2_driveby");
  }
}