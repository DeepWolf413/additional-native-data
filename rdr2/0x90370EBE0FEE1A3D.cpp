// act_caunc_rustling.ysc @ L11050
void func_227(bool bParam0)
{
  if (!PED::DOES_GROUP_EXIST(iLocal_95))
  {
    if (PED::IS_PED_IN_GROUP(iLocal_22))
    {
      iLocal_95 = PED::GET_PED_GROUP_INDEX(iLocal_22);
    }
    else
    {
      iLocal_95 = PED::CREATE_GROUP(2);
      PED::SET_PED_AS_GROUP_LEADER(iLocal_22, iLocal_95, true);
      PED::SET_PED_CONFIG_FLAG(iLocal_22, 279, true);
    }
    PED::SET_GROUP_FORMATION(iLocal_95, 10);
  }
  if (((func_29(iLocal_22, 0) && !PED::IS_PED_IN_GROUP(iLocal_22)) && PED::DOES_GROUP_EXIST(iLocal_95)) && PED::IS_PED_ON_MOUNT(Global_35))
  {
    PED::SET_PED_CONFIG_FLAG(iLocal_22, 279, true);
    PED::SET_PED_AS_GROUP_LEADER(iLocal_22, iLocal_95, true);
  }
  else if (((func_29(iLocal_22, 0) && PED::IS_PED_IN_GROUP(iLocal_22)) && !PED::IS_PED_ON_MOUNT(Global_35)) && bParam0)
  {
    func_72(4);
    PED::REMOVE_PED_FROM_GROUP(iLocal_22);
  }
}