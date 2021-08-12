// loanshark_womancry.ysc @ L5907
int func_188(var uParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(uLocal_979[0]))
  {
    return 1;
  }
  func_529();
  if (func_63(uLocal_979[0], 1))
  {
    Global_1392626[*uParam0 /*32*/].f_11 = uLocal_979[0];
    PLAYER::_0xA342495F93B7B838(PLAYER::PLAYER_ID(), uLocal_979[0]);
    PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_979[0], iLocal_983);
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_979[0], true);
    ENTITY::SET_ENTITY_COORDS(uLocal_979[0], vLocal_964[0 /*3*/], true, false, true, true);
    ENTITY::SET_ENTITY_HEADING(uLocal_979[0], fLocal_971[0]);
    PED::_0x923583741DC87BCE(uLocal_979[0], "Lilly_Millet");
    PED::SET_PED_CONFIG_FLAG(uLocal_979[0], 315, true);
    PED::REQUEST_PED_VISIBILITY_TRACKING(uLocal_979[0]);
    func_530(uLocal_979[0]);
    func_531(uLocal_979[0], 0);
    PED::_0xAAB050DA48B57978(uLocal_979[0], "Default_Nervous", Global_35, -1, 4);
    func_533(uLocal_979[0], func_532(joaat("REWARD_PED_SMALL"), 0, -1));
    return 1;
  }
  return 0;
}