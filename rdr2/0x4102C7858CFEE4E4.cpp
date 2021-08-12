// native2.ysc @ L50978
void func_1213(var uParam0)
{
  if (!func_956(*uParam0, 0))
  {
    return;
  }
  if (!PED::DOES_GROUP_EXIST(iLocal_279))
  {
    iLocal_279 = PED::CREATE_GROUP(2);
  }
  PED::SET_GROUP_FORMATION(iLocal_279, 10);
  PED::SET_PED_CONFIG_FLAG(*uParam0, 279, true);
  PED::SET_PED_AS_GROUP_LEADER(*uParam0, iLocal_279, false);
  PED::SET_GROUP_SEPARATION_RANGE(iLocal_279, 100f);
}