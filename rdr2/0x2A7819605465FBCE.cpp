// act_bankrobbery01.ysc @ L40294
void func_1225(int iParam0, int iParam1, bool bParam2)
{
  if (PED::IS_PED_A_PLAYER(iParam0) || PED::GET_PED_GROUP_INDEX(iParam0) == iParam1)
  {
    return;
  }
  else if (!PED::DOES_GROUP_EXIST(iParam1))
  {
    return;
  }
  if (PED::GET_PED_GROUP_INDEX(iParam0) != iParam1)
  {
    PED::REMOVE_PED_FROM_GROUP(iParam0);
  }
  if (bParam2)
  {
    if (!PED::_0x878B68960C1C2A35(iParam0, iParam1))
    {
      PED::SET_PED_AS_GROUP_LEADER(iParam0, iParam1, true);
    }
  }
  else if (!PED::IS_PED_GROUP_MEMBER(iParam0, iParam1, 0))
  {
    PED::SET_PED_AS_GROUP_MEMBER(iParam0, iParam1);
  }
}