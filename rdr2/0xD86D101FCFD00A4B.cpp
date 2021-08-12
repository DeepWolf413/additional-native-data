// abigail2_1.ysc @ L79772
void func_2344(int iParam0)
{
  if (func_2502(iParam0, 0))
  {
    return;
  }
  PED::SET_PED_CAN_RAGDOLL(iParam0, true);
  PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
  PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8229);
  PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
}