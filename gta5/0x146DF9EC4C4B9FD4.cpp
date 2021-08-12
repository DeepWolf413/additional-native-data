// assassin_valet.ysc @ L1722
void func_1()
{
  int iVar0;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_1045, false))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_1045, false);
    if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck2"))
    {
      bLocal_1144 = true;
    }
  }
  else
  {
    bLocal_1144 = false;
  }
  if (bLocal_1144)
  {
    if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, iLocal_1312))
    {
      VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iVar0, iLocal_1312);
    }
  }
}