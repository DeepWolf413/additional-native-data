// beat_bounty_transport.ysc @ L2766
void func_54(int iParam0, bool bParam1)
{
  if (ENTITY::IS_ENTITY_DEAD(uLocal_561[iParam0]))
  {
    return;
  }
  TASK::_TASK_MOVE_IN_TRAFFIC_3(uLocal_561[iParam0], Global_35, 2.001f, 0, 0);
  PED::SET_PED_KEEP_TASK(uLocal_561[iParam0], true);
  func_48(&(uLocal_565[iParam0]));
  PED::SET_PED_CONFIG_FLAG(uLocal_561[iParam0], 146, false);
  PED::SET_PED_CONFIG_FLAG(uLocal_561[iParam0], 130, false);
  PED::SET_PED_CONFIG_FLAG(uLocal_561[iParam0], 178, true);
  PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_561[iParam0], joaat("REL_PLAYER_DISLIKE"));
  if (bParam1)
  {
    func_172(uLocal_561[iParam0]);
  }
  if (Local_573.f_48)
  {
    func_171(&(uLocal_561[iParam0]), 30);
    func_171(&(uLocal_561[iParam0]), 34);
    func_171(&(uLocal_561[iParam0]), 32);
    func_171(&(uLocal_561[iParam0]), 47);
  }
  iLocal_88[iParam0] = 1;
  func_170(&(uLocal_561[iParam0]), &(Local_1004[iParam0 /*75*/]), &(Local_1004[iParam0 /*75*/].f_21), 1, 1);
  PED::_0xB8B6430EAD2D2437(uLocal_561[iParam0], joaat("BOUNTY_HUNTER"));
  PED::_0x24C82EF607105FAA(uLocal_561[iParam0], joaat("AGGRESSIVE"));
  PED::_0xE737D5F14304A2EC(uLocal_561[iParam0], PLAYER::GET_PLAYER_INDEX(), 120000);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_561[iParam0], false);
}