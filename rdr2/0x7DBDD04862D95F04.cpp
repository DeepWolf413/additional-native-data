// act_caunc_rustling.ysc @ L32440
int func_799()
{
  if (!ENTITY::IS_ENTITY_DEAD(iLocal_22))
  {
    func_1330();
    func_338(4, 0, 0);
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_22, true);
    PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_22, PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_35));
    func_354(4, 1);
    PED::SET_PED_CONFIG_FLAG(iLocal_22, 297, true);
    PED::SET_PED_CONFIG_FLAG(iLocal_22, 315, true);
    PED::SET_PED_CONFIG_FLAG(iLocal_22, 130, true);
    PED::SET_PED_CONFIG_FLAG(iLocal_22, 331, true);
    PED::SET_PED_CONFIG_FLAG(iLocal_22, 330, true);
    func_790(4, -922193456, 1);
    PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_22, 83, false);
    PED::SET_PED_CONFIG_FLAG(iLocal_22, 297, false);
    return 1;
  }
  if (!func_316(4))
  {
    iLocal_22 = func_317(4, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
  }
  iLocal_22 = func_317(4, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
  return 0;
}